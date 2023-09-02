---
title: 魔方
date: 2023-08-31
categories: 魔方 
tags: [魔方]
---

# 魔方

不知道魔方公式的情况下,用数学解决魔方

<!--more-->
## 3阶

建模, 颜色映射成1-6

方法1: 6 * 9=54个面 一维向量, 对于每个操作建立一个54x54转移矩阵

方法2: 直接54个面的中心的三维坐标, 用旋转矩阵

方法3: 直接9个块,每次操作是对给定块的旋转变化

---

核心逻辑

- 状态输入
- 建模
- 多阶段目标的逐级加深的深搜

多阶段目标可以自由选取,这里先采用常用公式的目标:

- 单层
- 双层
- 顶十字
- 顶面
- 顶角
- 顶棱

然而作为多阶段实现,这里其实还可以更细

- 底部棱个数 1->4
- 底部棱完成,角1->4
- 第二层完成个数1->4
- 顶十字1->4
- 顶面角颜色1->4
- 顶角交换1->4
- 顶棱1->4

注意的是,这里可能有些情况是不存在的,但是这里主要是对当前魔方姿态 给一个进度评价,不存在的状态永远不会作为入参而已

### 代码

#### 版本0: 支持初始状态 和 命令行展示当前状态

```python
from typing import List
from colorama import Fore, Style

#  U
# LFRB
#  D

#  0
# 1234
#  5

#   黄
# 蓝红绿橙
#   白
YELLOW = 0
BLUE = 1
RED = 2
GREEN = 3
ORANGE = 4
WHITE = 5

CUBE = List[List[List[int]]]  # ULFRBD


def valid(cube) -> None:
  assert len(cube) == 6
  n = len(cube[0])
  for face in cube:
    assert len(face) == n
    for row in face:
      assert len(row) == n
      for v in row:
        assert 0 <= v and v < 6


def color_print(v: int) -> None:
  v2c = {
      YELLOW: Fore.YELLOW,
      BLUE: Fore.BLUE,
      RED: Fore.RED,
      GREEN: Fore.GREEN,
      ORANGE: Fore.MAGENTA,  # 紫色, 品红
      WHITE: Fore.WHITE,
  }
  print(f'{v2c[v]}o{Style.RESET_ALL}', end='')


def show_arr(cube: CUBE) -> None:
  valid(cube)
  n = len(cube[0])
  # UP
  for i in range(n):
    for j in range(n):
      print(' ', end='')
    for j in range(n):
      color_print(cube[0][i][j])
    print()
  # LFRB
  for i in range(n):
    for k in range(1, 5):
      for j in range(n):
        color_print(cube[k][i][j])
    print()

  # DOWN
  for i in range(n):
    for j in range(n):
      print(' ', end='')
    for j in range(n):
      color_print(cube[5][i][j])
    print()


def solve(cube: CUBE) -> None:
  valid(cube)
  show_arr(cube)


solve([
    [  # UP
        [RED, ORANGE, GREEN], [YELLOW, YELLOW, ORANGE], [BLUE, WHITE, ORANGE]
    ],
    [  # 左
        [BLUE, GREEN, YELLOW], [RED, BLUE, YELLOW], [WHITE, ORANGE, RED]
    ],
    [  # 前
        [ORANGE, RED, WHITE], [RED, RED, YELLOW], [YELLOW, WHITE, RED]
    ],
    [  # 右
        [BLUE, GREEN, WHITE], [BLUE, GREEN, BLUE], [WHITE, BLUE, YELLOW]
    ],
    [  # 后
        [ORANGE, YELLOW, YELLOW], [RED, ORANGE, GREEN], [ORANGE, BLUE, GREEN]
    ],
    [  # 下
        [GREEN, GREEN, BLUE], [WHITE, WHITE, ORANGE], [RED, WHITE, GREEN]
    ],
])
```

#### 版本1: 初始化 到3维坐标的映射,旋转矩阵,3d展示

```python
from typing import Dict, List, Tuple
import numpy as np
import matplotlib.pyplot as plt

#  U
# LFRB
#  D

#  0
# 1234
#  5

#   黄
# 蓝红绿橙
#   白
YELLOW = 0
BLUE = 1
RED = 2
GREEN = 3
ORANGE = 4
WHITE = 5

CUBE = List[List[List[int]]]  # ULFRBD
# [x][y][z] => (color,xyz扩展方向)
CUBE3D = Dict[int, Dict[int, Dict[int, Tuple[int, List[int]]]]]


def valid(cube) -> None:
  assert len(cube) == 6
  n = len(cube[0])
  for face in cube:
    assert len(face) == n
    for row in face:
      assert len(row) == n
      for v in row:
        assert 0 <= v and v < 6


def show_3ds(cube_3ds: List[CUBE3D]) -> None:
  cnt = len(cube_3ds)
  fig = plt.figure()
  colors = ['#FFFF00', '#0000FF', '#FF0000', '#00FF00', '#FF681F', '#FFFFFF']

  for i in range(cnt):
    cube_3d = cube_3ds[i]
    ax = fig.add_subplot(1, cnt, i+1, projection='3d')

    for x, yzv in cube_3d.items():
      for y, zv in yzv.items():
        for z, v in zv.items():
          c, dxyz = v
          dx, dy, dz = dxyz
          if dx == 0:
            X = np.array([[x, x], [x, x]])
            Y = np.array([[y-1, y+1], [y-1, y+1]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dy == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y, y], [y, y]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dz == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y-1, y-1], [y+1, y+1]])
            Z = np.array([[z, z], [z, z]])
          ax.plot_surface(
              X, Y, Z, color=colors[c])

  plt.show()


def set_res(res: CUBE3D, x: int, y: int, z: int, v: Tuple[int, List[int]]) -> None:
  if x not in res:
    res[x] = {}
  if y not in res[x]:
    res[x][y] = {}
  res[x][y][z] = v


def arr_to_3d(cube: CUBE) -> CUBE3D:
  res: CUBE3D = {}

  n = len(cube[0])
  for i in range(n):
    for j in range(n):
      set_res(res, 2 * i - (n - 1), 2 * j - (n - 1), +
              n, (cube[0][i][j], [1, 1, 0]))  # UP
      set_res(res, 2 * j - (n - 1), -n, (n - 1) - 2 * i,
              (cube[1][i][j], [1, 0, 1]))  # LEFT
      set_res(res, +n, 2 * j - (n - 1), (n - 1) - 2 * i,
              (cube[2][i][j], [0, 1, 1]))  # FRONT
      set_res(res, (n - 1) - 2 * j, +n, (n - 1) - 2 * i,
              (cube[3][i][j], [1, 0, 1]))  # RIGHT
      set_res(res, -n, (n - 1) - 2 * j, (n - 1) - 2 * i,
              (cube[4][i][j], [0, 1, 1]))  # BACK
      set_res(res, (n - 1) - 2 * i, 2 * j - (n - 1), -
              n, (cube[5][i][j], [1, 1, 0]))  # DOWN
  return res


def rotateX(xyz: List[int]) -> List[int]:  # 绕着X轴转
  return np.matmul(np.array([xyz]), np.array([[1, 0, 0], [0, 0, -1], [0, 1, 0]]))[0]


def rotateY(xyz: List[int]) -> List[int]:  # 绕着Y轴转
  return np.matmul(np.array([xyz]), np.array([[0, 0, 1], [0, 1, 0], [-1, 0, 0]]))[0]


def rotateZ(xyz: List[int]) -> List[int]:  # 绕着Z轴转
  return np.matmul(np.array([xyz]), np.array([[0, 1, 0], [-1, 0, 0], [0, 0, 1]]))[0]


def rotateFilter(cube3d: CUBE3D, filter, rotateFn) -> CUBE3D:
  res = {}
  for x, yzv in cube3d.items():
    for y, zv in yzv.items():
      for z, v in zv.items():
        if filter(x, y, z):  # need rotate
          nx, ny, nz = rotateFn([x, y, z])
          set_res(res, nx, ny, nz, [v[0], rotateFn(v[1])])
        else:
          set_res(res, x, y, z, v)
  return res


def rotateFront(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: x > 0, rotateX)


def rotateBack(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: x < 0, rotateX)


def rotateLeft(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: y < 0, rotateY)


def rotateRight(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: y > 0, rotateY)


def rotateUp(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: z > 0, rotateZ)


def rotateDown(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: z < 0, rotateZ)


def solve(cube: CUBE) -> None:
  valid(cube)
  cube3d = arr_to_3d(cube)
  show_3ds([cube3d, rotateFront(cube3d), rotateBack(cube3d), rotateLeft(
      cube3d), rotateRight(cube3d), rotateUp(cube3d), rotateDown(cube3d)])


solve([
    [  # UP
        [RED, ORANGE, GREEN], [YELLOW, YELLOW, ORANGE], [BLUE, WHITE, ORANGE]
    ],
    [  # 左
        [BLUE, GREEN, YELLOW], [RED, BLUE, YELLOW], [WHITE, ORANGE, RED]
    ],
    [  # 前
        [ORANGE, RED, WHITE], [RED, RED, YELLOW], [YELLOW, WHITE, RED]
    ],
    [  # 右
        [BLUE, GREEN, WHITE], [BLUE, GREEN, BLUE], [WHITE, BLUE, YELLOW]
    ],
    [  # 后
        [ORANGE, YELLOW, YELLOW], [RED, ORANGE, GREEN], [ORANGE, BLUE, GREEN]
    ],
    [  # 下
        [GREEN, GREEN, BLUE], [WHITE, WHITE, ORANGE], [RED, WHITE, GREEN]
    ],
])
```

---

这里可以先预处理,计算映射关系,简化成 $6n^2$ 的状态和 稀疏转移矩阵

#### 版本2: 实现 迭代加深dfs,完成底面 与 阶段性展示

```python
from typing import Dict, List, Tuple
import numpy as np
import matplotlib.pyplot as plt

#  U
# LFRB
#  D

#  0
# 1234
#  5

#   黄
# 蓝红绿橙
#   白
YELLOW = 0
BLUE = 1
RED = 2
GREEN = 3
ORANGE = 4
WHITE = 5

CUBE = List[List[List[int]]]  # ULFRBD
# [x][y][z] => (color,xyz扩展方向)
CUBE3D = Dict[int, Dict[int, Dict[int, Tuple[int, List[int]]]]]


def valid(cube) -> None:
  assert len(cube) == 6
  n = len(cube[0])
  for face in cube:
    assert len(face) == n
    for row in face:
      assert len(row) == n
      for v in row:
        assert 0 <= v and v < 6


def show_3ds(cube_3ds: List[CUBE3D]) -> None:
  cnt = len(cube_3ds)
  row = max(int(cnt**0.5), 1)
  col = cnt//row + int((cnt % row) != 0)
  fig = plt.figure()
  colors = ['#FFFF00', '#0000FF', '#FF0000', '#00FF00', '#FF681F', '#FFFFFF']

  for i in range(cnt):
    cube_3d = cube_3ds[i]
    ax = fig.add_subplot(row, col, i+1, projection='3d')

    for x, yzv in cube_3d.items():
      for y, zv in yzv.items():
        for z, v in zv.items():
          c, dxyz = v
          dx, dy, dz = dxyz
          if dx == 0:
            X = np.array([[x, x], [x, x]])
            Y = np.array([[y-1, y+1], [y-1, y+1]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dy == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y, y], [y, y]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dz == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y-1, y-1], [y+1, y+1]])
            Z = np.array([[z, z], [z, z]])
          ax.plot_surface(
              X, Y, Z, color=colors[c])

  plt.show()


def set_cube(res: CUBE3D, xyz: List[int], v: Tuple[int, List[int]]) -> None:
  x, y, z = xyz
  if x not in res:
    res[x] = {}
  if y not in res[x]:
    res[x][y] = {}

  res[x][y][z] = v


def _up(i, j, n=3) -> List[int]:
  return [2 * i - (n - 1), 2 * j - (n - 1), + n]


def _left(i, j, n=3) -> List[int]:
  return [2 * j - (n - 1), -n, (n - 1) - 2 * i]


def _front(i, j, n=3) -> List[int]:
  return [+n, 2 * j - (n - 1), (n - 1) - 2 * i]


def _right(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * j, +n, (n - 1) - 2 * i]


def _back(i, j, n=3) -> List[int]:
  return [-n, (n - 1) - 2 * j, (n - 1) - 2 * i]


def _down(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * i, 2 * j - (n - 1), - n]


def arr_to_3d(cube: CUBE) -> CUBE3D:
  res: CUBE3D = {}

  n = len(cube[0])
  for i in range(n):
    for j in range(n):
      set_cube(res, _up(i, j, n), [cube[0][i][j], [1, 1, 0]])  # UP
      set_cube(res, _left(i, j, n), [cube[1][i][j], [1, 0, 1]])  # LEFT
      set_cube(res, _front(i, j, n), [cube[2][i][j], [0, 1, 1]])  # FRONT
      set_cube(res, _right(i, j, n), [cube[3][i][j], [1, 0, 1]])  # RIGHT
      set_cube(res, _back(i, j, n), [cube[4][i][j], [0, 1, 1]])  # BACK
      set_cube(res, _down(i, j, n), [cube[5][i][j], [1, 1, 0]])  # DOWN
  return res


def rotateX(xyz: List[int]) -> List[int]:  # 绕着X轴转
  return np.matmul(np.array([xyz]), np.array([[1, 0, 0], [0, 0, -1], [0, 1, 0]]))[0]


def rotateY(xyz: List[int]) -> List[int]:  # 绕着Y轴转
  return np.matmul(np.array([xyz]), np.array([[0, 0, 1], [0, 1, 0], [-1, 0, 0]]))[0]


def rotateZ(xyz: List[int]) -> List[int]:  # 绕着Z轴转
  return np.matmul(np.array([xyz]), np.array([[0, 1, 0], [-1, 0, 0], [0, 0, 1]]))[0]


def rotateFilter(cube3d: CUBE3D, filter, rotateFn) -> CUBE3D:
  res = {}
  for x, yzv in cube3d.items():
    for y, zv in yzv.items():
      for z, v in zv.items():
        if filter(x, y, z):  # need rotate
          set_cube(res, rotateFn([x, y, z]), [v[0], rotateFn(v[1])])
        else:
          set_cube(res, [x, y, z], v)
  return res


def rotateFront(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: x > 0, rotateX)


def rotateBack(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: x < 0, rotateX)


def rotateLeft(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: y < 0, rotateY)


def rotateRight(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: y > 0, rotateY)


def rotateUp(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: z > 0, rotateZ)


def rotateDown(cube3d: CUBE3D) -> CUBE3D:
  return rotateFilter(cube3d, lambda x, y, z: z < 0, rotateZ)


def progress(cube3d: CUBE3D) -> int:  # 只针对3阶魔方
  p = 0

  def c(xyz: List[int]) -> int:
    x, y, z = xyz
    return cube3d[x][y][z][0]
  # 底面 十字
  if c(_left(2, 1)) == c(_left(1, 1)) and c(_down(1, 0)) == c(_down(1, 1)):
    p += 1
  if c(_front(2, 1)) == c(_front(1, 1)) and c(_down(0, 1)) == c(_down(1, 1)):
    p += 1
  if c(_right(2, 1)) == c(_right(1, 1)) and c(_down(1, 2)) == c(_down(1, 1)):
    p += 1
  if c(_back(2, 1)) == c(_back(1, 1)) and c(_down(2, 1)) == c(_down(1, 1)):
    p += 1
  if p != 4:
    return p

  # 底面4角
  if c(_left(2, 2)) == c(_left(1, 1)) and c(_front(2, 0)) == c(_front(1, 1)) and c(_down(0, 0)) == c(_down(1, 1)):
    p += 1

  if c(_front(2, 2)) == c(_front(1, 1)) and c(_right(2, 0)) == c(_right(1, 1)) and c(_down(0, 2)) == c(_down(1, 1)):
    p += 1

  if c(_right(2, 2)) == c(_right(1, 1)) and c(_back(2, 0)) == c(_back(1, 1)) and c(_down(2, 2)) == c(_down(1, 1)):
    p += 1

  if c(_back(2, 2)) == c(_back(1, 1)) and c(_left(2, 0)) == c(_left(1, 1)) and c(_down(2, 0)) == c(_down(1, 1)):
    p += 1

  if p != 4*2:
    return p

  return p


def dfs(res: List[CUBE3D], remain: int, stop: int) -> bool:
  if progress(res[-1]) >= stop:
    return True
  if remain <= 0:  # 迭代加深
    return False

  ops = [
      rotateUp, lambda x:rotateUp(
          rotateUp(x)), lambda x:rotateUp(rotateUp(rotateUp(x))),
      rotateLeft, lambda x:rotateLeft(rotateLeft(
          x)), lambda x:rotateLeft(rotateLeft(rotateLeft(x))),
      rotateFront, lambda x:rotateFront(rotateFront(
          x)), lambda x:rotateFront(rotateFront(rotateFront(x))),
      rotateRight, lambda x:rotateRight(rotateRight(
          x)), lambda x:rotateRight(rotateRight(rotateRight(x))),
      rotateBack, lambda x:rotateBack(rotateBack(
          x)), lambda x:rotateBack(rotateBack(rotateBack(x))),
      rotateDown, lambda x:rotateDown(rotateDown(
          x)), lambda x:rotateDown(rotateDown(rotateDown(x))),
  ]
  for op in ops:
    res.append(op(res[-1]))
    if dfs(res, remain-1, stop):
      return True
    res.pop()

  return False


def steps(cube3d: CUBE3D, stop: int) -> List[CUBE3D]:
  res = [cube3d]
  dep = 1
  while not dfs(res, dep, stop):
    dep += 1
  return res


def dump3d(cube3d: CUBE3D, n=3) -> None:
  res = []

  def dump_face(fn) -> None:
    face = []
    for i in range(n):
      row = []
      for j in range(n):
        x, y, z = fn(i, j)
        row.append(cube3d[x][y][z][0])
      face.append(row)
    res.append(face)

  dump_face(_up)
  dump_face(_left)
  dump_face(_front)
  dump_face(_right)
  dump_face(_back)
  dump_face(_down)
  print(res)


def solve(cube: CUBE) -> None:
  valid(cube)
  cube3d = arr_to_3d(cube)

  steplist = [1, 2, 3, 4, 5, 6, 7, 8]
  ans = [cube3d]
  for dst_step in steplist:
    moves = steps(ans[-1], dst_step)
    print(f'step {dst_step} solved with ops = {len(moves)-1}')
    ans = ans + moves[1:]

  show_3ds(ans)
  dump3d(ans[-1])


solve([
    [  # UP
        [RED, ORANGE, GREEN], [YELLOW, YELLOW, ORANGE], [BLUE, WHITE, ORANGE]
    ],
    [  # 左
        [BLUE, GREEN, YELLOW], [RED, BLUE, YELLOW], [WHITE, ORANGE, RED]
    ],
    [  # 前
        [ORANGE, RED, WHITE], [RED, RED, YELLOW], [YELLOW, WHITE, RED]
    ],
    [  # 右
        [BLUE, GREEN, WHITE], [BLUE, GREEN, BLUE], [WHITE, BLUE, YELLOW]
    ],
    [  # 后
        [ORANGE, YELLOW, YELLOW], [RED, ORANGE, GREEN], [ORANGE, BLUE, GREEN]
    ],
    [  # 下
        [GREEN, GREEN, BLUE], [WHITE, WHITE, ORANGE], [RED, WHITE, GREEN]
    ],
])
```

在这里, 似乎把 旋转180看作一个操作比 把180度看作2个操作 更容易搜出来, 可能虽然每层更多了,但是总步数更少了,从而更好

#### 版本3 第二层,剪枝,优化效率


```python
from typing import Any, Dict, List, Tuple
import numpy as np
import matplotlib.pyplot as plt

#  U
# LFRB
#  D

#  0
# 1234
#  5

#   黄
# 蓝红绿橙
#   白
YELLOW = 0
BLUE = 1
RED = 2
GREEN = 3
ORANGE = 4
WHITE = 5

CUBE = List[List[List[int]]]  # ULFRBD
# [x][y][z] => (color,xyz扩展方向)
CUBE3DCOLOR = Dict[int, Dict[int, Dict[int, int]]]
CUBE3DSURFACE = Dict[int, Dict[int, Dict[int, List[int]]]]


def valid(cube) -> None:
  assert len(cube) == 6
  n = len(cube[0])
  for face in cube:
    assert len(face) == n
    for row in face:
      assert len(row) == n
      for v in row:
        assert 0 <= v and v < 6


def show_3ds(cube_3ds: List[CUBE3DCOLOR], cube_3d_surface: CUBE3DSURFACE) -> None:
  cnt = len(cube_3ds)
  row = max(int(cnt**0.5), 1)
  col = cnt//row + int((cnt % row) != 0)
  fig = plt.figure()
  colors = ['#FFFF00', '#0000FF', '#FF0000', '#00FF00', '#FF681F', '#FFFFFF']

  for i in range(cnt):
    cube_3d = cube_3ds[i]
    ax = fig.add_subplot(row, col, i+1, projection='3d')

    for x, yzv in cube_3d.items():
      for y, zv in yzv.items():
        for z, c in zv.items():
          dx, dy, dz = cube_3d_surface[x][y][z]
          if dx == 0:
            X = np.array([[x, x], [x, x]])
            Y = np.array([[y-1, y+1], [y-1, y+1]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dy == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y, y], [y, y]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dz == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y-1, y-1], [y+1, y+1]])
            Z = np.array([[z, z], [z, z]])
          ax.plot_surface(
              X, Y, Z, color=colors[c])

  plt.show()


def set_cube(res: CUBE3DSURFACE | CUBE3DCOLOR, xyz: List[int], v: Any) -> None:
  x, y, z = xyz
  if x not in res:
    res[x] = {}
  if y not in res[x]:
    res[x][y] = {}

  res[x][y][z] = v


def _up(i, j, n=3) -> List[int]:
  return [2 * i - (n - 1), 2 * j - (n - 1), + n]


def _left(i, j, n=3) -> List[int]:
  return [2 * j - (n - 1), -n, (n - 1) - 2 * i]


def _front(i, j, n=3) -> List[int]:
  return [+n, 2 * j - (n - 1), (n - 1) - 2 * i]


def _right(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * j, +n, (n - 1) - 2 * i]


def _back(i, j, n=3) -> List[int]:
  return [-n, (n - 1) - 2 * j, (n - 1) - 2 * i]


def _down(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * i, 2 * j - (n - 1), - n]


def arr_to_3d(cube: CUBE) -> CUBE3DCOLOR:
  res: CUBE3DCOLOR = {}

  n = len(cube[0])
  for i in range(n):
    for j in range(n):
      set_cube(res, _up(i, j, n), cube[0][i][j])  # UP
      set_cube(res, _left(i, j, n), cube[1][i][j])  # LEFT
      set_cube(res, _front(i, j, n), cube[2][i][j])  # FRONT
      set_cube(res, _right(i, j, n), cube[3][i][j])  # RIGHT
      set_cube(res, _back(i, j, n), cube[4][i][j])  # BACK
      set_cube(res, _down(i, j, n), cube[5][i][j])  # DOWN
  return res


def rotateX(xyz: List[int]) -> List[int]:  # 绕着X轴转
  return np.matmul(np.array([xyz]), np.array([[1, 0, 0], [0, 0, -1], [0, 1, 0]]))[0]


def rotateY(xyz: List[int]) -> List[int]:  # 绕着Y轴转
  return np.matmul(np.array([xyz]), np.array([[0, 0, 1], [0, 1, 0], [-1, 0, 0]]))[0]


def rotateZ(xyz: List[int]) -> List[int]:  # 绕着Z轴转
  return np.matmul(np.array([xyz]), np.array([[0, 1, 0], [-1, 0, 0], [0, 0, 1]]))[0]


def rotateFilter(cube3d: CUBE3DCOLOR, filter, rotateFn) -> CUBE3DCOLOR:
  res = {}
  for x, yzv in cube3d.items():
    for y, zv in yzv.items():
      for z, v in zv.items():
        # filter() return 'need rotate'
        set_cube(res, rotateFn([x, y, z]) if filter(x, y, z) else [x, y, z], v)
  return res


def rotateFront(cube): return rotateFilter(
    cube, lambda x, y, z: x > 0, rotateX)


def rotateBack(cube): return rotateFilter(cube, lambda x, y, z: x < 0, rotateX)
def rotateLeft(cube): return rotateFilter(cube, lambda x, y, z: y < 0, rotateY)
def rotateRight(cube): return rotateFilter(
    cube, lambda x, y, z: y > 0, rotateY)


def rotateUp(cube): return rotateFilter(cube, lambda x, y, z: z > 0, rotateZ)
def rotateDown(cube): return rotateFilter(cube, lambda x, y, z: z < 0, rotateZ)


def progress(cube3d: CUBE3DCOLOR) -> int:  # 只针对3阶魔方
  p = 0

  def c(xyz: List[int]) -> int:
    x, y, z = xyz
    return cube3d[x][y][z]
  # 底面 十字
  if c(_left(2, 1)) == c(_left(1, 1)) and c(_down(1, 0)) == c(_down(1, 1)):
    p += 1
  if c(_front(2, 1)) == c(_front(1, 1)) and c(_down(0, 1)) == c(_down(1, 1)):
    p += 1
  if c(_right(2, 1)) == c(_right(1, 1)) and c(_down(1, 2)) == c(_down(1, 1)):
    p += 1
  if c(_back(2, 1)) == c(_back(1, 1)) and c(_down(2, 1)) == c(_down(1, 1)):
    p += 1
  if p != 4:
    return p

  # 底面4角
  if c(_left(2, 2)) == c(_left(1, 1)) and c(_front(2, 0)) == c(_front(1, 1)) and c(_down(0, 0)) == c(_down(1, 1)):
    p += 1

  if c(_front(2, 2)) == c(_front(1, 1)) and c(_right(2, 0)) == c(_right(1, 1)) and c(_down(0, 2)) == c(_down(1, 1)):
    p += 1

  if c(_right(2, 2)) == c(_right(1, 1)) and c(_back(2, 0)) == c(_back(1, 1)) and c(_down(2, 2)) == c(_down(1, 1)):
    p += 1

  if c(_back(2, 2)) == c(_back(1, 1)) and c(_left(2, 0)) == c(_left(1, 1)) and c(_down(2, 0)) == c(_down(1, 1)):
    p += 1

  if p != 8:
    return p

  # 第二层4个棱, 这里通过5 > 1+1+1+1 保证了 完成的棱 大于 所有的半步状态
  if c(_left(1, 2)) == c(_left(1, 1)) and c(_front(1, 0)) == c(_front(1, 1)):
    p += 5

  if c(_front(1, 2)) == c(_front(1, 1)) and c(_right(1, 0)) == c(_right(1, 1)):
    p += 5

  if c(_right(1, 2)) == c(_right(1, 1)) and c(_back(1, 0)) == c(_back(1, 1)):
    p += 5

  if c(_back(1, 2)) == c(_back(1, 1)) and c(_left(1, 0)) == c(_left(1, 1)):
    p += 5

  # 第二层 中间半步状态
  if c(_left(0, 1)) == c(_left(1, 1)) and c(_up(1, 0)) == c(_front(1, 1)):
    p += 1

  if c(_front(0, 1)) == c(_front(1, 1)) and c(_up(2, 1)) == c(_right(1, 1)):
    p += 1

  if c(_right(0, 1)) == c(_right(1, 1)) and c(_up(1, 2)) == c(_back(1, 1)):
    p += 1

  if c(_back(0, 1)) == c(_back(1, 1)) and c(_up(0, 1)) == c(_left(1, 1)):
    p += 1

  if p != 28:
    return p

  return p


def rotateMidX(cube): return rotateFilter(
    cube, lambda x, y, z: x == 0, rotateX)


def rotateMidY(cube): return rotateFilter(
    cube, lambda x, y, z: y == 0, rotateY)


def rotateMidZ(cube): return rotateFilter(
    cube, lambda x, y, z: z == 0, rotateZ)


def two(fn):
  return lambda x: fn(fn(x))


def three(fn):
  return lambda x: fn(fn(fn(x)))


ops = [
    rotateUp, two(rotateUp), three(rotateUp),
    rotateDown, two(rotateDown), three(rotateDown),
    # rotateMidZ, two(rotateMidZ), three(rotateMidZ),

    rotateLeft, two(rotateLeft), three(rotateLeft),
    rotateRight, two(rotateRight), three(rotateRight),
    # rotateMidY, two(rotateMidY), three(rotateMidY),

    rotateFront, two(rotateFront), three(rotateFront),
    rotateBack, two(rotateBack), three(rotateBack),
    # rotateMidX, two(rotateMidX), three(rotateMidX),
]


def dfs(res: List[CUBE3DCOLOR], opidxs: List[int], remain: int, stop: int) -> bool:
  if progress(res[-1]) >= stop:
    return True
  if remain <= 0:  # 迭代加深
    return False

  for idx in range(len(ops)):
    # 剪枝
    if idx // 3 == opidxs[-1] // 3:  # 不要连续旋转同一个面
      continue
    if idx // 6 == opidxs[-1] // 6:  # 如果 连续 沿着同轴旋转 两个面
      if idx > opidxs[-1]:  # 保证 序号小的先旋转
        continue

    op = ops[idx]
    res.append(op(res[-1]))
    opidxs.append(idx)
    if dfs(res, opidxs, remain-1, stop):
      return True
    res.pop()
    opidxs.pop()

  return False


def steps(cube3d: CUBE3DCOLOR, stop: int) -> List[CUBE3DCOLOR]:
  res = [cube3d]
  opsidxs = [-1]
  dep = 1
  while not dfs(res, opsidxs, dep, stop):
    dep += 1
    print('dep = ', dep)
  return res


def dump3d(cube3d: CUBE3DCOLOR, n=3) -> None:
  res = []

  def dump_face(fn) -> None:
    face = []
    for i in range(n):
      row = []
      for j in range(n):
        x, y, z = fn(i, j)
        row.append(cube3d[x][y][z])
      face.append(row)
    res.append(face)

  dump_face(_up)
  dump_face(_left)
  dump_face(_front)
  dump_face(_right)
  dump_face(_back)
  dump_face(_down)
  print(res)


transfroms = [_up, _left, _front, _right, _back, _down]


def solve(cube: CUBE) -> None:
  valid(cube)
  n = len(cube[0])
  cube3d = arr_to_3d(cube)

  cube3dsurface = {}
  for i in range(n):
    for j in range(n):
      set_cube(cube3dsurface, _up(i, j, n),  [1, 1, 0])  # UP
      set_cube(cube3dsurface, _left(i, j, n),  [1, 0, 1])  # LEFT
      set_cube(cube3dsurface, _front(i, j, n),  [0, 1, 1])  # FRONT
      set_cube(cube3dsurface, _right(i, j, n),  [1, 0, 1])  # RIGHT
      set_cube(cube3dsurface, _back(i, j, n),  [0, 1, 1])  # BACK
      set_cube(cube3dsurface, _down(i, j, n),  [1, 1, 0])  # DOWN

  def two(fn):
    return lambda x: fn(fn(x))

  def three(fn):
    return lambda x: fn(fn(fn(x)))

  ops = [
      rotateUp, two(rotateUp), three(rotateUp),
      rotateDown, two(rotateDown), three(rotateDown),
      # rotateMidZ, two(rotateMidZ), three(rotateMidZ),

      rotateLeft, two(rotateLeft), three(rotateLeft),
      rotateRight, two(rotateRight), three(rotateRight),
      # rotateMidY, two(rotateMidY), three(rotateMidY),

      rotateFront, two(rotateFront), three(rotateFront),
      rotateBack, two(rotateBack), three(rotateBack),
      # rotateMidX, two(rotateMidX), three(rotateMidX),
  ]

  steplist = [i for i in range(1, 28+1)]

  def cube3dsolver():
    ans = [cube3d]
    for dst_step in steplist:
      moves = steps(ans[-1], dst_step)
      print(f'step {dst_step} solved with ops = {len(moves)-1}')
      ans = ans + moves[1:]
    return ans

  ans = cube3dsolver()
  show_3ds(ans, cube3dsurface)
  dump3d(ans[-1])


solve([[[0, 0, 1], [4, 0, 0], [0, 0, 4]], [[1, 0, 2], [4, 1, 3], [1, 1, 1]], [[3, 3, 0], [2, 2, 1], [2, 2, 2]], [
      [3, 1, 2], [2, 3, 4], [3, 3, 3]], [[0, 2, 4], [3, 4, 1], [4, 4, 4]], [[5, 5, 5], [5, 5, 5], [5, 5, 5]]])
```

然而这里直接 每个棱 让进度+=1, 并不理想,其实可以看到:

当要解决最后一块第二层的时候,就需要把一个在上层的移动进第二层,而不影响其它低二层以下的,假设这样的操作步骤是X,(~~当然 在没有理论知识下,可能也是同时做好两/三个棱,~~)

而如果是可行的,则可能当前 最后一个位置,正好反着放在了目标位置中,那么 至少需要2X步骤,甚至是2X+1

对于深度搜索来说, 增加2倍的步骤, 意味着数量级的幂次增加了两倍

---

实际跑下来,单次用了多达7步,而剪枝优化了每轮可选的操作在 `12~15`, 而$12^6\cdot 18=5374,7712$,$15^6\cdot 18=2,0503,1250$

光是次数都很大,更不要说常数还不小

#### 版本4 顶面 全黄

```python
from typing import Any, Dict, List, Tuple
import numpy as np
import matplotlib.pyplot as plt

#  U
# LFRB
#  D

#  0
# 1234
#  5

#   黄
# 蓝红绿橙
#   白
YELLOW = 0
BLUE = 1
RED = 2
GREEN = 3
ORANGE = 4
WHITE = 5

CUBE = List[List[List[int]]]  # ULFRBD
# [x][y][z] => (color,xyz扩展方向)
CUBE3DCOLOR = Dict[int, Dict[int, Dict[int, int]]]
CUBE3DSURFACE = Dict[int, Dict[int, Dict[int, List[int]]]]


def valid(cube) -> None:
  assert len(cube) == 6
  n = len(cube[0])
  for face in cube:
    assert len(face) == n
    for row in face:
      assert len(row) == n
      for v in row:
        assert 0 <= v and v < 6


def show_3ds(cube_3ds: List[CUBE3DCOLOR], cube_3d_surface: CUBE3DSURFACE) -> None:
  cnt = len(cube_3ds)
  row = max(int(cnt**0.5), 1)
  col = cnt//row + int((cnt % row) != 0)
  fig = plt.figure()
  colors = ['#FFFF00', '#0000FF', '#FF0000', '#00FF00', '#FF681F', '#FFFFFF']

  for i in range(cnt):
    cube_3d = cube_3ds[i]
    ax = fig.add_subplot(row, col, i+1, projection='3d')

    for x, yzv in cube_3d.items():
      for y, zv in yzv.items():
        for z, c in zv.items():
          dx, dy, dz = cube_3d_surface[x][y][z]
          if dx == 0:
            X = np.array([[x, x], [x, x]])
            Y = np.array([[y-1, y+1], [y-1, y+1]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dy == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y, y], [y, y]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dz == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y-1, y-1], [y+1, y+1]])
            Z = np.array([[z, z], [z, z]])
          ax.plot_surface(
              X, Y, Z, color=colors[c])

  plt.show()


def set_cube(res: CUBE3DSURFACE | CUBE3DCOLOR, xyz: List[int], v: Any) -> None:
  x, y, z = xyz
  if x not in res:
    res[x] = {}
  if y not in res[x]:
    res[x][y] = {}

  res[x][y][z] = v


def _up(i, j, n=3) -> List[int]:
  return [2 * i - (n - 1), 2 * j - (n - 1), + n]


def _left(i, j, n=3) -> List[int]:
  return [2 * j - (n - 1), -n, (n - 1) - 2 * i]


def _front(i, j, n=3) -> List[int]:
  return [+n, 2 * j - (n - 1), (n - 1) - 2 * i]


def _right(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * j, +n, (n - 1) - 2 * i]


def _back(i, j, n=3) -> List[int]:
  return [-n, (n - 1) - 2 * j, (n - 1) - 2 * i]


def _down(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * i, 2 * j - (n - 1), - n]


def arr_to_3d(cube: CUBE) -> CUBE3DCOLOR:
  res: CUBE3DCOLOR = {}

  n = len(cube[0])
  for i in range(n):
    for j in range(n):
      set_cube(res, _up(i, j, n), cube[0][i][j])  # UP
      set_cube(res, _left(i, j, n), cube[1][i][j])  # LEFT
      set_cube(res, _front(i, j, n), cube[2][i][j])  # FRONT
      set_cube(res, _right(i, j, n), cube[3][i][j])  # RIGHT
      set_cube(res, _back(i, j, n), cube[4][i][j])  # BACK
      set_cube(res, _down(i, j, n), cube[5][i][j])  # DOWN
  return res


def rotateX(xyz: List[int]) -> List[int]:  # 绕着X轴转
  return np.matmul(np.array([xyz]), np.array([[1, 0, 0], [0, 0, -1], [0, 1, 0]]))[0]


def rotateY(xyz: List[int]) -> List[int]:  # 绕着Y轴转
  return np.matmul(np.array([xyz]), np.array([[0, 0, 1], [0, 1, 0], [-1, 0, 0]]))[0]


def rotateZ(xyz: List[int]) -> List[int]:  # 绕着Z轴转
  return np.matmul(np.array([xyz]), np.array([[0, 1, 0], [-1, 0, 0], [0, 0, 1]]))[0]


def rotateFilter(cube3d: CUBE3DCOLOR, filter, rotateFn) -> CUBE3DCOLOR:
  res = {}
  for x, yzv in cube3d.items():
    for y, zv in yzv.items():
      for z, v in zv.items():
        # filter() return 'need rotate'
        set_cube(res, rotateFn([x, y, z]) if filter(x, y, z) else [x, y, z], v)
  return res


def rotateFront(cube): return rotateFilter(
    cube, lambda x, y, z: x > 0, rotateX)


def rotateBack(cube): return rotateFilter(cube, lambda x, y, z: x < 0, rotateX)
def rotateLeft(cube): return rotateFilter(cube, lambda x, y, z: y < 0, rotateY)
def rotateRight(cube): return rotateFilter(
    cube, lambda x, y, z: y > 0, rotateY)


def rotateUp(cube): return rotateFilter(cube, lambda x, y, z: z > 0, rotateZ)
def rotateDown(cube): return rotateFilter(cube, lambda x, y, z: z < 0, rotateZ)


def progress(cube3d: CUBE3DCOLOR) -> int:  # 只针对3阶魔方
  p = 0

  def c(xyz: List[int]) -> int:
    x, y, z = xyz
    return cube3d[x][y][z]
  # 底面 十字
  if c(_left(2, 1)) == c(_left(1, 1)) and c(_down(1, 0)) == c(_down(1, 1)):
    p += 1
  if c(_front(2, 1)) == c(_front(1, 1)) and c(_down(0, 1)) == c(_down(1, 1)):
    p += 1
  if c(_right(2, 1)) == c(_right(1, 1)) and c(_down(1, 2)) == c(_down(1, 1)):
    p += 1
  if c(_back(2, 1)) == c(_back(1, 1)) and c(_down(2, 1)) == c(_down(1, 1)):
    p += 1
  if p != 4:
    return p

  # 底面4角
  if c(_left(2, 2)) == c(_left(1, 1)) and c(_front(2, 0)) == c(_front(1, 1)) and c(_down(0, 0)) == c(_down(1, 1)):
    p += 1

  if c(_front(2, 2)) == c(_front(1, 1)) and c(_right(2, 0)) == c(_right(1, 1)) and c(_down(0, 2)) == c(_down(1, 1)):
    p += 1

  if c(_right(2, 2)) == c(_right(1, 1)) and c(_back(2, 0)) == c(_back(1, 1)) and c(_down(2, 2)) == c(_down(1, 1)):
    p += 1

  if c(_back(2, 2)) == c(_back(1, 1)) and c(_left(2, 0)) == c(_left(1, 1)) and c(_down(2, 0)) == c(_down(1, 1)):
    p += 1

  if p != 8:
    return p

  # 第二层4个棱, 这里通过5 > 1+1+1+1 保证了 完成的棱 大于 所有的半步状态
  if c(_left(1, 2)) == c(_left(1, 1)) and c(_front(1, 0)) == c(_front(1, 1)):
    p += 5

  if c(_front(1, 2)) == c(_front(1, 1)) and c(_right(1, 0)) == c(_right(1, 1)):
    p += 5

  if c(_right(1, 2)) == c(_right(1, 1)) and c(_back(1, 0)) == c(_back(1, 1)):
    p += 5

  if c(_back(1, 2)) == c(_back(1, 1)) and c(_left(1, 0)) == c(_left(1, 1)):
    p += 5

  # 第二层 中间半步状态
  if c(_left(0, 1)) == c(_left(1, 1)) and c(_up(1, 0)) == c(_front(1, 1)):
    p += 1

  if c(_front(0, 1)) == c(_front(1, 1)) and c(_up(2, 1)) == c(_right(1, 1)):
    p += 1

  if c(_right(0, 1)) == c(_right(1, 1)) and c(_up(1, 2)) == c(_back(1, 1)):
    p += 1

  if c(_back(0, 1)) == c(_back(1, 1)) and c(_up(0, 1)) == c(_left(1, 1)):
    p += 1

  if p != 28:
    return p

  # 顶十字
  if c(_up(0, 1)) == c(_up(1, 1)):
    p += 1

  if c(_up(1, 0)) == c(_up(1, 1)):
    p += 1

  if c(_up(1, 2)) == c(_up(1, 1)):
    p += 1

  if c(_up(2, 1)) == c(_up(1, 1)):
    p += 1

  if p != 32:
    return p

  # 顶面
  if c(_up(0, 0)) == c(_up(1, 1)):
    p += 1

  if c(_up(0, 2)) == c(_up(1, 1)):
    p += 1

  if c(_up(2, 0)) == c(_up(1, 1)):
    p += 1

  if c(_up(2, 2)) == c(_up(1, 1)):
    p += 1

  if p != 36:
    return p

  return p


def rotateMidX(cube): return rotateFilter(
    cube, lambda x, y, z: x == 0, rotateX)


def rotateMidY(cube): return rotateFilter(
    cube, lambda x, y, z: y == 0, rotateY)


def rotateMidZ(cube): return rotateFilter(
    cube, lambda x, y, z: z == 0, rotateZ)


def two(fn):
  return lambda x: fn(fn(x))


def three(fn):
  return lambda x: fn(fn(fn(x)))


ops = [
    rotateUp, two(rotateUp), three(rotateUp),
    rotateDown, two(rotateDown), three(rotateDown),
    # rotateMidZ, two(rotateMidZ), three(rotateMidZ),

    rotateLeft, two(rotateLeft), three(rotateLeft),
    rotateRight, two(rotateRight), three(rotateRight),
    # rotateMidY, two(rotateMidY), three(rotateMidY),

    rotateFront, two(rotateFront), three(rotateFront),
    rotateBack, two(rotateBack), three(rotateBack),
    # rotateMidX, two(rotateMidX), three(rotateMidX),
]


def dfs(res: List[CUBE3DCOLOR], opidxs: List[int], remain: int, stop: int) -> bool:
  if progress(res[-1]) >= stop:
    return True
  if remain <= 0:  # 迭代加深
    return False

  for idx in range(len(ops)):
    # 剪枝
    if idx // 3 == opidxs[-1] // 3:  # 不要连续旋转同一个面
      continue
    if idx // 6 == opidxs[-1] // 6:  # 如果 连续 沿着同轴旋转 两个面
      if idx > opidxs[-1]:  # 保证 序号小的先旋转
        continue

    op = ops[idx]
    res.append(op(res[-1]))
    opidxs.append(idx)
    if dfs(res, opidxs, remain-1, stop):
      return True
    res.pop()
    opidxs.pop()

  return False


def steps(cube3d: CUBE3DCOLOR, stop: int) -> List[CUBE3DCOLOR]:
  res = [cube3d]
  opsidxs = [-1]
  dep = 1
  while not dfs(res, opsidxs, dep, stop):
    dep += 1
    print('dep = ', dep)
  return res


def dump3d(cube3d: CUBE3DCOLOR, n=3) -> None:
  res = []

  def dump_face(fn) -> None:
    face = []
    for i in range(n):
      row = []
      for j in range(n):
        x, y, z = fn(i, j)
        row.append(cube3d[x][y][z])
      face.append(row)
    res.append(face)

  dump_face(_up)
  dump_face(_left)
  dump_face(_front)
  dump_face(_right)
  dump_face(_back)
  dump_face(_down)
  print(res)


transfroms = [_up, _left, _front, _right, _back, _down]


def solve(cube: CUBE) -> None:
  valid(cube)
  n = len(cube[0])
  cube3d = arr_to_3d(cube)

  cube3dsurface = {}
  for i in range(n):
    for j in range(n):
      set_cube(cube3dsurface, _up(i, j, n),  [1, 1, 0])  # UP
      set_cube(cube3dsurface, _left(i, j, n),  [1, 0, 1])  # LEFT
      set_cube(cube3dsurface, _front(i, j, n),  [0, 1, 1])  # FRONT
      set_cube(cube3dsurface, _right(i, j, n),  [1, 0, 1])  # RIGHT
      set_cube(cube3dsurface, _back(i, j, n),  [0, 1, 1])  # BACK
      set_cube(cube3dsurface, _down(i, j, n),  [1, 1, 0])  # DOWN

  def two(fn):
    return lambda x: fn(fn(x))

  def three(fn):
    return lambda x: fn(fn(fn(x)))

  ops = [
      rotateUp, two(rotateUp), three(rotateUp),
      rotateDown, two(rotateDown), three(rotateDown),
      # rotateMidZ, two(rotateMidZ), three(rotateMidZ),

      rotateLeft, two(rotateLeft), three(rotateLeft),
      rotateRight, two(rotateRight), three(rotateRight),
      # rotateMidY, two(rotateMidY), three(rotateMidY),

      rotateFront, two(rotateFront), three(rotateFront),
      rotateBack, two(rotateBack), three(rotateBack),
      # rotateMidX, two(rotateMidX), three(rotateMidX),
  ]

  steplist = [i for i in range(1, 36+1)]

  def cube3dsolver():
    ans = [cube3d]
    for dst_step in steplist:
      moves = steps(ans[-1], dst_step)
      print(f'step {dst_step} solved with ops = {len(moves)-1}')
      ans = ans + moves[1:]
    return ans

  ans = cube3dsolver()
  show_3ds(ans, cube3dsurface)
  dump3d(ans[-1])


solve([[[3, 0, 1], [3, 0, 0], [4, 2, 4]], [[2, 0, 0], [1, 1, 1], [1, 1, 1]], [[3, 0, 1], [2, 2, 2], [2, 2, 2]], [
      [0, 4, 2], [3, 3, 3], [3, 3, 3]], [[0, 1, 0], [4, 4, 4], [4, 4, 4]], [[5, 5, 5], [5, 5, 5], [5, 5, 5]]])
```

从代码上讲,改动很小,就是 增加了顶面 十字 和 顶面 全黄的描述, 但是实际运行的时候, 单次迈进最多的还是7步

#### 版本5 回退一点,顶面十字+棱,meet-in-middle

如果按照 十字=> 顶面 => 顶角 => 顶棱,, "从预知的知识"来看, 单个步骤太长, 对于暴力搜的方案来说,不可行

这里换了一个进度表示: 顶面十字 => 十字棱 => 角在对应位置 => 完成

```python
from typing import Any, Dict, List, Tuple
import numpy as np
import matplotlib.pyplot as plt

#  U
# LFRB
#  D

#  0
# 1234
#  5

#   黄
# 蓝红绿橙
#   白
YELLOW = 0
BLUE = 1
RED = 2
GREEN = 3
ORANGE = 4
WHITE = 5
BLACK = 6  # 用于简化状态

CUBE = List[List[List[int]]]  # ULFRBD
# [x][y][z] => (color,xyz扩展方向)
CUBE3DCOLOR = Dict[int, Dict[int, Dict[int, int]]]
CUBE3DSURFACE = Dict[int, Dict[int, Dict[int, List[int]]]]
cube3dsurface = {}


def valid(cube) -> None:
  assert len(cube) == 6
  n = len(cube[0])
  for face in cube:
    assert len(face) == n
    for row in face:
      assert len(row) == n
      for v in row:
        assert 0 <= v and v < 6


def show_3ds(cube_3ds: List[CUBE3DCOLOR], cube_3d_surface: CUBE3DSURFACE) -> None:
  cnt = len(cube_3ds)
  row = max(int(cnt**0.5), 1)
  col = cnt//row + int((cnt % row) != 0)
  fig = plt.figure()
  colors = ['#FFFF00', '#0000FF', '#FF0000',
            '#00FF00', '#FF681F', '#FFFFFF', '#000000']

  for i in range(cnt):
    cube_3d = cube_3ds[i]
    ax = fig.add_subplot(row, col, i+1, projection='3d')

    for x, yzv in cube_3d.items():
      for y, zv in yzv.items():
        for z, c in zv.items():
          dx, dy, dz = cube_3d_surface[x][y][z]
          if dx == 0:
            X = np.array([[x, x], [x, x]])
            Y = np.array([[y-1, y+1], [y-1, y+1]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dy == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y, y], [y, y]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dz == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y-1, y-1], [y+1, y+1]])
            Z = np.array([[z, z], [z, z]])
          ax.plot_surface(
              X, Y, Z, color=colors[c])

  plt.show()


def set_cube(res: CUBE3DSURFACE | CUBE3DCOLOR, xyz: List[int], v: Any) -> None:
  x, y, z = xyz
  if x not in res:
    res[x] = {}
  if y not in res[x]:
    res[x][y] = {}

  res[x][y][z] = v


def _up(i, j, n=3) -> List[int]:
  return [2 * i - (n - 1), 2 * j - (n - 1), + n]


def _left(i, j, n=3) -> List[int]:
  return [2 * j - (n - 1), -n, (n - 1) - 2 * i]


def _front(i, j, n=3) -> List[int]:
  return [+n, 2 * j - (n - 1), (n - 1) - 2 * i]


def _right(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * j, +n, (n - 1) - 2 * i]


def _back(i, j, n=3) -> List[int]:
  return [-n, (n - 1) - 2 * j, (n - 1) - 2 * i]


def _down(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * i, 2 * j - (n - 1), - n]


transfroms = [_up, _left, _front, _right, _back, _down]


def arr_to_3d(cube: CUBE) -> CUBE3DCOLOR:
  res: CUBE3DCOLOR = {}

  n = len(cube[0])
  for i in range(n):
    for j in range(n):
      set_cube(res, _up(i, j, n), cube[0][i][j])  # UP
      set_cube(res, _left(i, j, n), cube[1][i][j])  # LEFT
      set_cube(res, _front(i, j, n), cube[2][i][j])  # FRONT
      set_cube(res, _right(i, j, n), cube[3][i][j])  # RIGHT
      set_cube(res, _back(i, j, n), cube[4][i][j])  # BACK
      set_cube(res, _down(i, j, n), cube[5][i][j])  # DOWN
  return res


def rotateX(xyz: List[int]) -> List[int]:  # 绕着X轴转
  return np.matmul(np.array([xyz]), np.array([[1, 0, 0], [0, 0, -1], [0, 1, 0]]))[0]


def rotateY(xyz: List[int]) -> List[int]:  # 绕着Y轴转
  return np.matmul(np.array([xyz]), np.array([[0, 0, 1], [0, 1, 0], [-1, 0, 0]]))[0]


def rotateZ(xyz: List[int]) -> List[int]:  # 绕着Z轴转
  return np.matmul(np.array([xyz]), np.array([[0, 1, 0], [-1, 0, 0], [0, 0, 1]]))[0]


def rotateFilter(cube3d: CUBE3DCOLOR, filter, rotateFn) -> CUBE3DCOLOR:
  res = {}
  for x, yzv in cube3d.items():
    for y, zv in yzv.items():
      for z, v in zv.items():
        # filter() return 'need rotate'
        set_cube(res, rotateFn([x, y, z]) if filter(x, y, z) else [x, y, z], v)
  return res


def copy(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: False, lambda o: o)


def rotateFront(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: x > 0, rotateX)


def rotateBack(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: x < 0, rotateX)


def rotateLeft(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: y < 0, rotateY)


def rotateRight(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: y > 0, rotateY)


def rotateUp(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: z > 0, rotateZ)


def rotateDown(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: z < 0, rotateZ)


def progress(cube3d: CUBE3DCOLOR) -> int:  # 只针对3阶魔方
  p = 0

  def c(xyz: List[int]) -> int:
    x, y, z = xyz
    return cube3d[x][y][z]
  # 底面 十字
  if c(_left(2, 1)) == c(_left(1, 1)) and c(_down(1, 0)) == c(_down(1, 1)):
    p += 1
  if c(_front(2, 1)) == c(_front(1, 1)) and c(_down(0, 1)) == c(_down(1, 1)):
    p += 1
  if c(_right(2, 1)) == c(_right(1, 1)) and c(_down(1, 2)) == c(_down(1, 1)):
    p += 1
  if c(_back(2, 1)) == c(_back(1, 1)) and c(_down(2, 1)) == c(_down(1, 1)):
    p += 1
  if p != 4:
    return p

  # 底面4角
  if c(_left(2, 2)) == c(_left(1, 1)) and c(_front(2, 0)) == c(_front(1, 1)) and c(_down(0, 0)) == c(_down(1, 1)):
    p += 1

  if c(_front(2, 2)) == c(_front(1, 1)) and c(_right(2, 0)) == c(_right(1, 1)) and c(_down(0, 2)) == c(_down(1, 1)):
    p += 1

  if c(_right(2, 2)) == c(_right(1, 1)) and c(_back(2, 0)) == c(_back(1, 1)) and c(_down(2, 2)) == c(_down(1, 1)):
    p += 1

  if c(_back(2, 2)) == c(_back(1, 1)) and c(_left(2, 0)) == c(_left(1, 1)) and c(_down(2, 0)) == c(_down(1, 1)):
    p += 1

  if p != 8:
    return p

  # 第二层4个棱, 这里通过5 > 1+1+1+1 保证了 完成的棱 大于 所有的半步状态
  if c(_left(1, 2)) == c(_left(1, 1)) and c(_front(1, 0)) == c(_front(1, 1)):
    p += 5

  if c(_front(1, 2)) == c(_front(1, 1)) and c(_right(1, 0)) == c(_right(1, 1)):
    p += 5

  if c(_right(1, 2)) == c(_right(1, 1)) and c(_back(1, 0)) == c(_back(1, 1)):
    p += 5

  if c(_back(1, 2)) == c(_back(1, 1)) and c(_left(1, 0)) == c(_left(1, 1)):
    p += 5

  # 第二层 中间半步状态
  if c(_left(0, 1)) == c(_left(1, 1)) and c(_up(1, 0)) == c(_front(1, 1)):
    p += 1

  if c(_front(0, 1)) == c(_front(1, 1)) and c(_up(2, 1)) == c(_right(1, 1)):
    p += 1

  if c(_right(0, 1)) == c(_right(1, 1)) and c(_up(1, 2)) == c(_back(1, 1)):
    p += 1

  if c(_back(0, 1)) == c(_back(1, 1)) and c(_up(0, 1)) == c(_left(1, 1)):
    p += 1

  if p != 28:
    return p

  # 顶十字
  if c(_up(0, 1)) == c(_up(1, 1)):
    p += 1

  if c(_up(1, 0)) == c(_up(1, 1)):
    p += 1

  if c(_up(1, 2)) == c(_up(1, 1)):
    p += 1

  if c(_up(2, 1)) == c(_up(1, 1)):
    p += 1

  if p != 32:
    return p

  # 顶十字的棱
  if c(_left(0, 1)) == c(_left(1, 1)):
    p += 1

  if c(_front(0, 1)) == c(_front(1, 1)):
    p += 1

  if c(_right(0, 1)) == c(_right(1, 1)):
    p += 1

  if c(_back(0, 1)) == c(_back(1, 1)):
    p += 1

  if p != 36:
    return p

  # 顶四角 在对应的位置
  if sorted([c(_up(2, 0)), c(_left(0, 2)), c(_front(0, 0))]) == sorted([c(_up(1, 1)), c(_left(1, 1)), c(_front(1, 1))]):
    p += 1

  if sorted([c(_up(2, 2)), c(_front(0, 2)), c(_right(0, 0))]) == sorted([c(_up(1, 1)), c(_front(1, 1)), c(_right(1, 1))]):
    p += 1

  if sorted([c(_up(0, 2)), c(_right(0, 2)), c(_back(0, 0))]) == sorted([c(_up(1, 1)), c(_right(1, 1)), c(_back(1, 1))]):
    p += 1

  if sorted([c(_up(0, 0)), c(_back(0, 2)), c(_left(0, 0))]) == sorted([c(_up(1, 1)), c(_back(1, 1)), c(_left(1, 1))]):
    p += 1

  if p != 40:
    return p

  # 终止状态
  if c(_left(0, 0)) == c(_left(1, 1)):
    p += 1

  if c(_front(0, 0)) == c(_front(1, 1)):
    p += 1

  if c(_right(0, 0)) == c(_right(1, 1)):
    p += 1

  if c(_back(0, 0)) == c(_back(1, 1)):
    p += 1

  if p != 44:
    return p

  return p


def rotateMidX(cube): return rotateFilter(
    cube, lambda x, y, z: x == 0, rotateX)


def rotateMidY(cube): return rotateFilter(
    cube, lambda x, y, z: y == 0, rotateY)


def rotateMidZ(cube): return rotateFilter(
    cube, lambda x, y, z: z == 0, rotateZ)


def two(fn):
  return lambda x: fn(fn(x))


def three(fn):
  return lambda x: fn(fn(fn(x)))


ops = [
    rotateUp, two(rotateUp), three(rotateUp),
    rotateDown, two(rotateDown), three(rotateDown),
    # rotateMidZ, two(rotateMidZ), three(rotateMidZ),

    rotateLeft, two(rotateLeft), three(rotateLeft),
    rotateRight, two(rotateRight), three(rotateRight),
    # rotateMidY, two(rotateMidY), three(rotateMidY),

    rotateFront, two(rotateFront), three(rotateFront),
    rotateBack, two(rotateBack), three(rotateBack),
    # rotateMidX, two(rotateMidX), three(rotateMidX),
]


def dfs(res: List[CUBE3DCOLOR], opidxs: List[int], remain: int, stop: int) -> bool:
  if progress(res[-1]) >= stop:
    return True
  if remain <= 0:  # 迭代加深
    return False

  for idx in range(len(ops)):
    # 剪枝
    if idx // 3 == opidxs[-1] // 3:  # 不要连续旋转同一个面
      continue
    if idx // 6 == opidxs[-1] // 6:  # 如果 连续 沿着同轴旋转 两个面
      if idx > opidxs[-1]:  # 保证 序号小的先旋转
        continue

    op = ops[idx]
    res.append(op(res[-1]))
    opidxs.append(idx)
    if dfs(res, opidxs, remain-1, stop):
      return True
    res.pop()
    opidxs.pop()

  return False


def steps(cube3d: CUBE3DCOLOR, stop: int) -> List[CUBE3DCOLOR]:
  res = [cube3d]
  opsidxs = [-1]
  dep = 1
  while not dfs(res, opsidxs, dep, stop):
    dep += 1
    print('dep = ', dep)
  return res


def black_up_十棱(cube3d: CUBE3DCOLOR) -> List[int]:  # return opidxs
  # meet in middle
  assert progress(cube3d) >= 32
  S = {}
  STATE_TYPE = List[int]

  def c(xyz: List[int]) -> int:
    x, y, z = xyz
    return cube3d[x][y][z]

  #  [state] => STATE_TYPE {正向/逆向,操作idxs arr}
  def get_state(state: List[int]) -> Tuple[bool, STATE_TYPE]:
    ref = S
    for v in state:
      if v not in ref:
        return False, None
      ref = ref[v]
    return True, ref

  def set_state(state: List[int], val: STATE_TYPE) -> None:
    ref = S
    for i in range(len(state)-1):
      if state[i] not in ref:
        ref[state[i]] = {}
      ref = ref[state[i]]
    ref[state[-1]] = val

  def flat_cube(cur: CUBE3DCOLOR, n=3) -> List[int]:
    res = [0 for i in range(6*n*n)]
    for _ in range(6):
      for i in range(n):
        for j in range(n):
          x, y, z = transfroms[_](i, j)
          res[j+n*(i+n*_)] = cur[x][y][z]
    return res

  def rev(opidxs: List[int]) -> List[int]:
    ret = []
    for v in opidxs[::-1]:
      if v == -1:
        continue
      ret.append((v//3)*3 + (2-v % 3))
    return ret

  # 正向 build
  def build(cur: CUBE3DCOLOR, opidxs: List[int], remain: int) -> None:
    flat_state = flat_cube(cur)
    exist, state = get_state(flat_state)
    if exist and len(state) <= len(opidxs):  # 更快的步骤, 由状态剪枝
      return

    set_state(flat_state, opidxs)
    if remain == 0:
      return

    for idx in range(len(ops)):
      build(ops[idx](cur), opidxs+[idx], remain-1)

  # 逆向 query
  def query(cur: CUBE3DCOLOR, opidxs: List[int], remain: int) -> Tuple[bool, List[int]]:
    flat_state = flat_cube(cur)
    exist, value = get_state(flat_state)
    if exist:
      return True, value + rev(opidxs)

    if remain == 0:
      return False, []

    for idx in range(len(ops)):
      # 剪枝
      # if idx // 3 == opidxs[-1] // 3:  # 不要连续旋转同一个面
      #   continue
      # if idx // 6 == opidxs[-1] // 6:  # 如果 连续 沿着同轴旋转 两个面
      #   if idx > opidxs[-1]:  # 保证 序号小的先旋转
      #     continue
      ok, ret = query(ops[idx](cur), opidxs+[idx], remain-1)
      if ok:
        return ok, ret

    return False, []

  def black_start() -> CUBE3DCOLOR:
    res = copy(cube3d)
    set_cube(res, _up(0, 0), BLACK)
    set_cube(res, _up(0, 2), BLACK)
    set_cube(res, _up(2, 0), BLACK)
    set_cube(res, _up(2, 2), BLACK)

    set_cube(res, _left(0, 0), BLACK)
    set_cube(res, _left(0, 2), BLACK)

    set_cube(res, _front(0, 0), BLACK)
    set_cube(res, _front(0, 2), BLACK)

    set_cube(res, _right(0, 0), BLACK)
    set_cube(res, _right(0, 2), BLACK)

    set_cube(res, _back(0, 0), BLACK)
    set_cube(res, _back(0, 2), BLACK)
    return res

  def black_dst() -> CUBE3DCOLOR:
    res = black_start()
    set_cube(res, _up(0, 1), c(_up(1, 1)))
    set_cube(res, _up(1, 0), c(_up(1, 1)))
    set_cube(res, _up(1, 2), c(_up(1, 1)))
    set_cube(res, _up(2, 1), c(_up(1, 1)))

    set_cube(res, _left(0, 1), c(_left(1, 1)))
    set_cube(res, _front(0, 1), c(_front(1, 1)))
    set_cube(res, _right(0, 1), c(_right(1, 1)))
    set_cube(res, _back(0, 1), c(_back(1, 1)))
    return res

  st = black_start()
  build(st, [-1], 4)
  st = rotateUp(st)
  build(st, [-1, 0], 4)
  st = rotateUp(st)
  build(st, [-1, 1], 4)
  st = rotateUp(st)
  build(st, [-1, 2], 4)

  print('build finish')

  dst = black_dst()
  for op in range(-1, 3):  # -1,0,1,2
    ok, idxs = query(dst, [op], 4)  # 注意过滤
    if ok:
      return list(filter(lambda o: o != -1, idxs))
    dst = rotateUp(dst)

  assert False
  return []


def dump3d(cube3d: CUBE3DCOLOR, n=3) -> None:
  res = []

  def dump_face(fn) -> None:
    face = []
    for i in range(n):
      row = []
      for j in range(n):
        x, y, z = fn(i, j)
        row.append(cube3d[x][y][z])
      face.append(row)
    res.append(face)

  dump_face(_up)
  dump_face(_left)
  dump_face(_front)
  dump_face(_right)
  dump_face(_back)
  dump_face(_down)
  print(res)


def solve(cube: CUBE) -> None:
  valid(cube)
  n = len(cube[0])
  cube3d = arr_to_3d(cube)

  for i in range(n):
    for j in range(n):
      set_cube(cube3dsurface, _up(i, j, n),  [1, 1, 0])  # UP
      set_cube(cube3dsurface, _left(i, j, n),  [1, 0, 1])  # LEFT
      set_cube(cube3dsurface, _front(i, j, n),  [0, 1, 1])  # FRONT
      set_cube(cube3dsurface, _right(i, j, n),  [1, 0, 1])  # RIGHT
      set_cube(cube3dsurface, _back(i, j, n),  [0, 1, 1])  # BACK
      set_cube(cube3dsurface, _down(i, j, n),  [1, 1, 0])  # DOWN

  steplist = range(1, 32+1)

  def cube3dsolver():
    ans = [cube3d]
    for dst_step in steplist:
      moves = steps(ans[-1], dst_step)
      print(f'step {dst_step} solved with ops = {len(moves)-1}')
      ans = ans + moves[1:]

    opidxs = black_up_十棱(ans[-1])
    for idx in opidxs:
      ans.append(ops[idx](ans[-1]))
    return ans

  ans = cube3dsolver()
  show_3ds(ans, cube3dsurface)
  dump3d(ans[-1])


solve([[[0, 0, 0], [0, 0, 0], [0, 0, 0]], [[4, 1, 2], [1, 1, 1], [1, 1, 1]], [[3, 4, 1], [2, 2, 2], [2, 2, 2]], [
      [2, 2, 4], [3, 3, 3], [3, 3, 3]], [[1, 3, 3], [4, 4, 4], [4, 4, 4]], [[5, 5, 5], [5, 5, 5], [5, 5, 5]]])
```


#### 版本6 优化棱进度 与 顶面十字

TODO........... 搜索量太大没跑出来,还需要优化

```python
from typing import Any, Dict, List, Tuple
import numpy as np
import matplotlib.pyplot as plt

#  U
# LFRB
#  D

#  0
# 1234
#  5

#   黄
# 蓝红绿橙
#   白
YELLOW = 0
BLUE = 1
RED = 2
GREEN = 3
ORANGE = 4
WHITE = 5
BLACK = 6  # 用于简化状态

CUBE = List[List[List[int]]]  # ULFRBD
# [x][y][z] => (color,xyz扩展方向)
CUBE3DCOLOR = Dict[int, Dict[int, Dict[int, int]]]
CUBE3DSURFACE = Dict[int, Dict[int, Dict[int, List[int]]]]
cube3dsurface = {}


def valid(cube) -> None:
  assert len(cube) == 6
  n = len(cube[0])
  for face in cube:
    assert len(face) == n
    for row in face:
      assert len(row) == n
      for v in row:
        assert 0 <= v and v < 6


def show_3ds(cube_3ds: List[CUBE3DCOLOR], cube_3d_surface: CUBE3DSURFACE) -> None:
  cnt = len(cube_3ds)
  row = max(int(cnt**0.5), 1)
  col = cnt//row + int((cnt % row) != 0)
  fig = plt.figure()
  colors = ['#FFFF00', '#0000FF', '#FF0000',
            '#00FF00', '#FF681F', '#FFFFFF', '#000000']

  for i in range(cnt):
    cube_3d = cube_3ds[i]
    ax = fig.add_subplot(row, col, i+1, projection='3d')

    for x, yzv in cube_3d.items():
      for y, zv in yzv.items():
        for z, c in zv.items():
          dx, dy, dz = cube_3d_surface[x][y][z]
          if dx == 0:
            X = np.array([[x, x], [x, x]])
            Y = np.array([[y-1, y+1], [y-1, y+1]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dy == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y, y], [y, y]])
            Z = np.array([[z-1, z-1], [z+1, z+1]])
          elif dz == 0:
            X = np.array([[x-1, x+1], [x-1, x+1]])
            Y = np.array([[y-1, y-1], [y+1, y+1]])
            Z = np.array([[z, z], [z, z]])
          ax.plot_surface(
              X, Y, Z, color=colors[c])

  plt.show()


def set_cube(res: CUBE3DSURFACE | CUBE3DCOLOR, xyz: List[int], v: Any) -> None:
  x, y, z = xyz
  if x not in res:
    res[x] = {}
  if y not in res[x]:
    res[x][y] = {}

  res[x][y][z] = v


def get_cube(res: CUBE3DSURFACE | CUBE3DCOLOR, xyz: List[int]) -> int:
  x, y, z = xyz
  return res[x][y][z]


def _up(i, j, n=3) -> List[int]:
  return [2 * i - (n - 1), 2 * j - (n - 1), + n]


def _left(i, j, n=3) -> List[int]:
  return [2 * j - (n - 1), -n, (n - 1) - 2 * i]


def _front(i, j, n=3) -> List[int]:
  return [+n, 2 * j - (n - 1), (n - 1) - 2 * i]


def _right(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * j, +n, (n - 1) - 2 * i]


def _back(i, j, n=3) -> List[int]:
  return [-n, (n - 1) - 2 * j, (n - 1) - 2 * i]


def _down(i, j, n=3) -> List[int]:
  return [(n - 1) - 2 * i, 2 * j - (n - 1), - n]


transfroms = [_up, _left, _front, _right, _back, _down]


def arr_to_3d(cube: CUBE) -> CUBE3DCOLOR:
  res: CUBE3DCOLOR = {}

  n = len(cube[0])
  for i in range(n):
    for j in range(n):
      set_cube(res, _up(i, j, n), cube[0][i][j])  # UP
      set_cube(res, _left(i, j, n), cube[1][i][j])  # LEFT
      set_cube(res, _front(i, j, n), cube[2][i][j])  # FRONT
      set_cube(res, _right(i, j, n), cube[3][i][j])  # RIGHT
      set_cube(res, _back(i, j, n), cube[4][i][j])  # BACK
      set_cube(res, _down(i, j, n), cube[5][i][j])  # DOWN
  return res


def rotateX(xyz: List[int]) -> List[int]:  # 绕着X轴转
  return np.matmul(np.array([xyz]), np.array([[1, 0, 0], [0, 0, -1], [0, 1, 0]]))[0]


def rotateY(xyz: List[int]) -> List[int]:  # 绕着Y轴转
  return np.matmul(np.array([xyz]), np.array([[0, 0, 1], [0, 1, 0], [-1, 0, 0]]))[0]


def rotateZ(xyz: List[int]) -> List[int]:  # 绕着Z轴转
  return np.matmul(np.array([xyz]), np.array([[0, 1, 0], [-1, 0, 0], [0, 0, 1]]))[0]


def rotateFilter(cube3d: CUBE3DCOLOR, filter, rotateFn) -> CUBE3DCOLOR:
  res = {}
  for x, yzv in cube3d.items():
    for y, zv in yzv.items():
      for z, v in zv.items():
        # filter() return 'need rotate'
        set_cube(res, rotateFn([x, y, z]) if filter(x, y, z) else [x, y, z], v)
  return res


def copy(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: False, lambda o: o)


def rotateFront(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: x > 0, rotateX)


def rotateBack(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: x < 0, rotateX)


def rotateLeft(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: y < 0, rotateY)


def rotateRight(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: y > 0, rotateY)


def rotateUp(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: z > 0, rotateZ)


def rotateDown(cube: CUBE3DCOLOR): return rotateFilter(
    cube, lambda x, y, z: z < 0, rotateZ)


def progress(cube3d: CUBE3DCOLOR) -> int:  # 只针对3阶魔方
  p = 0

  def c(xyz: List[int]) -> int:
    x, y, z = xyz
    return cube3d[x][y][z]
  # 底面 十字
  if c(_left(2, 1)) == c(_left(1, 1)) and c(_down(1, 0)) == c(_down(1, 1)):
    p += 1
  if c(_front(2, 1)) == c(_front(1, 1)) and c(_down(0, 1)) == c(_down(1, 1)):
    p += 1
  if c(_right(2, 1)) == c(_right(1, 1)) and c(_down(1, 2)) == c(_down(1, 1)):
    p += 1
  if c(_back(2, 1)) == c(_back(1, 1)) and c(_down(2, 1)) == c(_down(1, 1)):
    p += 1
  if p != 4:
    return p

  # 底面4角
  if c(_left(2, 2)) == c(_left(1, 1)) and c(_front(2, 0)) == c(_front(1, 1)) and c(_down(0, 0)) == c(_down(1, 1)):
    p += 1

  if c(_front(2, 2)) == c(_front(1, 1)) and c(_right(2, 0)) == c(_right(1, 1)) and c(_down(0, 2)) == c(_down(1, 1)):
    p += 1

  if c(_right(2, 2)) == c(_right(1, 1)) and c(_back(2, 0)) == c(_back(1, 1)) and c(_down(2, 2)) == c(_down(1, 1)):
    p += 1

  if c(_back(2, 2)) == c(_back(1, 1)) and c(_left(2, 0)) == c(_left(1, 1)) and c(_down(2, 0)) == c(_down(1, 1)):
    p += 1

  if p != 8:
    return p

  # 第二层4个棱, 这里通过5 > 1+1+1+1 保证了 完成的棱 大于 所有的半步状态
  if c(_left(1, 2)) == c(_left(1, 1)) and c(_front(1, 0)) == c(_front(1, 1)):
    p += 5

  if c(_front(1, 2)) == c(_front(1, 1)) and c(_right(1, 0)) == c(_right(1, 1)):
    p += 5

  if c(_right(1, 2)) == c(_right(1, 1)) and c(_back(1, 0)) == c(_back(1, 1)):
    p += 5

  if c(_back(1, 2)) == c(_back(1, 1)) and c(_left(1, 0)) == c(_left(1, 1)):
    p += 5

  # 第二层 中间半步状态
  if c(_left(0, 1)) == c(_left(1, 1)) and c(_up(1, 0)) == c(_front(1, 1)):
    p += 1

  if c(_front(0, 1)) == c(_front(1, 1)) and c(_up(2, 1)) == c(_right(1, 1)):
    p += 1

  if c(_right(0, 1)) == c(_right(1, 1)) and c(_up(1, 2)) == c(_back(1, 1)):
    p += 1

  if c(_back(0, 1)) == c(_back(1, 1)) and c(_up(0, 1)) == c(_left(1, 1)):
    p += 1

  if p != 28:
    return p

  # 顶十字
  if c(_up(0, 1)) == c(_up(1, 1)):
    p += 1

  if c(_up(1, 0)) == c(_up(1, 1)):
    p += 1

  if c(_up(1, 2)) == c(_up(1, 1)):
    p += 1

  if c(_up(2, 1)) == c(_up(1, 1)):
    p += 1

  if p != 32:
    return p

  # 顶十字的棱
  if c(_left(0, 1)) == c(_left(1, 1)):
    p += 1

  if c(_front(0, 1)) == c(_front(1, 1)):
    p += 1

  if c(_right(0, 1)) == c(_right(1, 1)):
    p += 1

  if c(_back(0, 1)) == c(_back(1, 1)):
    p += 1

  if p != 36:
    return p

  # 顶四角 在对应的位置
  if sorted([c(_up(2, 0)), c(_left(0, 2)), c(_front(0, 0))]) == sorted([c(_up(1, 1)), c(_left(1, 1)), c(_front(1, 1))]):
    p += 1

  if sorted([c(_up(2, 2)), c(_front(0, 2)), c(_right(0, 0))]) == sorted([c(_up(1, 1)), c(_front(1, 1)), c(_right(1, 1))]):
    p += 1

  if sorted([c(_up(0, 2)), c(_right(0, 2)), c(_back(0, 0))]) == sorted([c(_up(1, 1)), c(_right(1, 1)), c(_back(1, 1))]):
    p += 1

  if sorted([c(_up(0, 0)), c(_back(0, 2)), c(_left(0, 0))]) == sorted([c(_up(1, 1)), c(_back(1, 1)), c(_left(1, 1))]):
    p += 1

  if p != 40:
    return p

  # 终止状态
  if c(_left(0, 0)) == c(_left(1, 1)):
    p += 1

  if c(_front(0, 0)) == c(_front(1, 1)):
    p += 1

  if c(_right(0, 0)) == c(_right(1, 1)):
    p += 1

  if c(_back(0, 0)) == c(_back(1, 1)):
    p += 1

  if p != 44:
    return p

  return p


def rotateMidX(cube): return rotateFilter(
    cube, lambda x, y, z: x == 0, rotateX)


def rotateMidY(cube): return rotateFilter(
    cube, lambda x, y, z: y == 0, rotateY)


def rotateMidZ(cube): return rotateFilter(
    cube, lambda x, y, z: z == 0, rotateZ)


def two(fn):
  return lambda x: fn(fn(x))


def three(fn):
  return lambda x: fn(fn(fn(x)))


ops = [
    rotateUp, two(rotateUp), three(rotateUp),
    rotateDown, two(rotateDown), three(rotateDown),
    # rotateMidZ, two(rotateMidZ), three(rotateMidZ),

    rotateLeft, two(rotateLeft), three(rotateLeft),
    rotateRight, two(rotateRight), three(rotateRight),
    # rotateMidY, two(rotateMidY), three(rotateMidY),

    rotateFront, two(rotateFront), three(rotateFront),
    rotateBack, two(rotateBack), three(rotateBack),
    # rotateMidX, two(rotateMidX), three(rotateMidX),
]


def dfs(res: List[CUBE3DCOLOR], opidxs: List[int], remain: int, stop: int) -> bool:
  if progress(res[-1]) >= stop:
    return True
  if remain <= 0:  # 迭代加深
    return False

  for idx in range(len(ops)):
    # 剪枝
    if idx // 3 == opidxs[-1] // 3:  # 不要连续旋转同一个面
      continue
    if idx // 6 == opidxs[-1] // 6:  # 如果 连续 沿着同轴旋转 两个面
      if idx > opidxs[-1]:  # 保证 序号小的先旋转
        continue

    op = ops[idx]
    res.append(op(res[-1]))
    opidxs.append(idx)
    if dfs(res, opidxs, remain-1, stop):
      return True
    res.pop()
    opidxs.pop()

  return False


def steps(cube3d: CUBE3DCOLOR, stop: int) -> List[CUBE3DCOLOR]:
  res = [cube3d]
  opsidxs = [-1]
  dep = 1
  while not dfs(res, opsidxs, dep, stop):
    dep += 1
    print('dep = ', dep)
  return res


# return opidxs
def meet_in_middle_hanlder(handler) -> List[int]:
  S = {}
  STATE_TYPE = List[int]

  #  [state] => STATE_TYPE {正向/逆向,操作idxs arr}
  def get_state(state: List[int]) -> Tuple[bool, STATE_TYPE]:
    ref = S
    for v in state:
      if v not in ref:
        return False, None
      ref = ref[v]
    return True, ref

  def set_state(state: List[int], val: STATE_TYPE) -> None:
    ref = S
    for i in range(len(state)-1):
      if state[i] not in ref:
        ref[state[i]] = {}
      ref = ref[state[i]]
    ref[state[-1]] = val

  def flat_cube(cur: CUBE3DCOLOR, n=3) -> List[int]:
    res = [0 for i in range(6*n*n)]
    for _ in range(6):
      for i in range(n):
        for j in range(n):
          x, y, z = transfroms[_](i, j)
          res[j+n*(i+n*_)] = cur[x][y][z]
    return res

  def rev(opidxs: List[int]) -> List[int]:
    ret = []
    for v in opidxs[::-1]:
      if v == -1:
        continue
      ret.append((v//3)*3 + (2-v % 3))
    return ret

  # 正向 build
  def build(cur: CUBE3DCOLOR, opidxs: List[int], remain: int) -> None:
    flat_state = flat_cube(cur)
    exist, state = get_state(flat_state)
    if exist and len(state) <= len(opidxs):  # 更快的步骤, 由状态剪枝
      return

    set_state(flat_state, opidxs)
    if remain == 0:
      return

    for idx in range(len(ops)):
      build(ops[idx](cur), opidxs+[idx], remain-1)

  # 逆向 query
  def query(cur: CUBE3DCOLOR, opidxs: List[int], remain: int) -> Tuple[bool, List[int]]:
    flat_state = flat_cube(cur)
    exist, value = get_state(flat_state)
    if exist:
      return True, value + rev(opidxs)

    if remain == 0:
      return False, []

    for idx in range(len(ops)):
      # 剪枝
      if idx // 3 == opidxs[-1] // 3:  # 不要连续旋转同一个面
        continue
      if idx // 6 == opidxs[-1] // 6:  # 如果 连续 沿着同轴旋转 两个面
        if idx > opidxs[-1]:  # 保证 序号小的先旋转
          continue
      ok, ret = query(ops[idx](cur), opidxs+[idx], remain-1)
      if ok:
        return ok, ret

    return False, []

  return handler(build, query)


def black_up_十棱(cube3d: CUBE3DCOLOR) -> List[int]:  # return opidxs
  # meet in middle
  if progress(cube3d) >= 36:
    return []
  assert progress(cube3d) >= 32

  def c(xyz: List[int]) -> int:
    x, y, z = xyz
    return cube3d[x][y][z]

  def black_start() -> CUBE3DCOLOR:
    res = copy(cube3d)
    set_cube(res, _up(0, 0), BLACK)
    set_cube(res, _up(0, 2), BLACK)
    set_cube(res, _up(2, 0), BLACK)
    set_cube(res, _up(2, 2), BLACK)

    set_cube(res, _left(0, 0), BLACK)
    set_cube(res, _left(0, 2), BLACK)

    set_cube(res, _front(0, 0), BLACK)
    set_cube(res, _front(0, 2), BLACK)

    set_cube(res, _right(0, 0), BLACK)
    set_cube(res, _right(0, 2), BLACK)

    set_cube(res, _back(0, 0), BLACK)
    set_cube(res, _back(0, 2), BLACK)
    return res

  def black_dst() -> CUBE3DCOLOR:
    res = black_start()
    set_cube(res, _up(0, 1), c(_up(1, 1)))
    set_cube(res, _up(1, 0), c(_up(1, 1)))
    set_cube(res, _up(1, 2), c(_up(1, 1)))
    set_cube(res, _up(2, 1), c(_up(1, 1)))

    set_cube(res, _left(0, 1), c(_left(1, 1)))
    set_cube(res, _front(0, 1), c(_front(1, 1)))
    set_cube(res, _right(0, 1), c(_right(1, 1)))
    set_cube(res, _back(0, 1), c(_back(1, 1)))
    return res

  def handler(build_fn, query_fn):
    st = black_start()
    build_fn(st, [-1], 4)
    st = rotateUp(st)
    build_fn(st, [-1, 0], 4)
    st = rotateUp(st)
    build_fn(st, [-1, 1], 4)
    st = rotateUp(st)
    build_fn(st, [-1, 2], 4)

    dst = black_dst()
    for op in range(-1, 3):  # -1,0,1,2
      ok, idxs = query_fn(dst, [op], 4)  # 注意过滤
      if ok:
        return list(filter(lambda o: o != -1, idxs))
      dst = rotateUp(dst)

    assert False
    return []

  return meet_in_middle_hanlder(handler)


def black_up_顶角(cube3d: CUBE3DCOLOR) -> List[int]:  # return opidxs
  # meet in middle
  if progress(cube3d) >= 40:
    return []
  assert progress(cube3d) >= 36

  def c(xyz: List[int]) -> int:
    x, y, z = xyz
    return cube3d[x][y][z]

  def black_start() -> CUBE3DCOLOR:
    return copy(cube3d)

  def black_dsts() -> CUBE3DCOLOR:
    n = 3
    finish = copy(cube3d)
    for i in range(n):
      for j in range(n):
        set_cube(finish, _up(i, j), c(_up(1, 1)))
    for j in range(n):
      set_cube(finish, _left(0, j), c(_left(1, 1)))
      set_cube(finish, _front(0, j), c(_front(1, 1)))
      set_cube(finish, _right(0, j), c(_right(1, 1)))
      set_cube(finish, _back(0, j), c(_back(1, 1)))

    l = []
    group: List[List[List[int]]] = [
        [_up(2, 0), _left(0, 2), _front(0, 0)],
        [_up(2, 2), _front(0, 2), _right(0, 0)],
        [_up(0, 2), _right(0, 2), _back(0, 0)],
        [_up(0, 0), _back(0, 2), _left(0, 0)],
    ]
    for mask in range(3**4):
      rotate = [mask % 3, (mask//3) % 3, (mask//3//3) % 3, (mask//3//3//3) % 3]
      dst = copy(finish)
      for i in range(4):
        g = group[i]
        color = [get_cube(finish, g[0]), get_cube(
            finish, g[1]), get_cube(finish, g[2])]
        for j in range(3):
          set_cube(dst, g[(j+rotate[i]) % 3], color[j])

      l.append(dst)

    return l

  def handler(build_fn, query_fn):
    st = black_start()
    print('start build ....')
    build_fn(st, [-1], 4)
    print('start build Done')

    dsts = black_dsts()
    for i in range(len(dsts)):
      dst = dsts[i]
      print(f'顶角 进度 {i+1}/{len(dsts)}')
      ok, idxs = query_fn(dst, [-1], 4)  # 注意过滤
      if ok:
        return list(filter(lambda o: o != -1, idxs))
      dst = rotateUp(dst)

    assert False
    return []

  return meet_in_middle_hanlder(handler)


def dump3d(cube3d: CUBE3DCOLOR, n=3) -> None:
  res = []

  def dump_face(fn) -> None:
    face = []
    for i in range(n):
      row = []
      for j in range(n):
        x, y, z = fn(i, j)
        row.append(cube3d[x][y][z])
      face.append(row)
    res.append(face)

  dump_face(_up)
  dump_face(_left)
  dump_face(_front)
  dump_face(_right)
  dump_face(_back)
  dump_face(_down)
  print(res)


def solve(cube: CUBE) -> None:
  valid(cube)
  n = len(cube[0])
  cube3d = arr_to_3d(cube)

  for i in range(n):
    for j in range(n):
      set_cube(cube3dsurface, _up(i, j, n),  [1, 1, 0])  # UP
      set_cube(cube3dsurface, _left(i, j, n),  [1, 0, 1])  # LEFT
      set_cube(cube3dsurface, _front(i, j, n),  [0, 1, 1])  # FRONT
      set_cube(cube3dsurface, _right(i, j, n),  [1, 0, 1])  # RIGHT
      set_cube(cube3dsurface, _back(i, j, n),  [0, 1, 1])  # BACK
      set_cube(cube3dsurface, _down(i, j, n),  [1, 1, 0])  # DOWN

  steplist = range(1, 32+1)

  def cube3dsolver():
    ans = [cube3d]
    for dst_step in steplist:
      moves = steps(ans[-1], dst_step)
      print(f'step {dst_step} solved with ops = {len(moves)-1}')
      ans = ans + moves[1:]

    opidxs = black_up_十棱(ans[-1])
    for idx in opidxs:
      ans.append(ops[idx](ans[-1]))
    print('顶十棱 Done!')

    for dst_step in range(36, 40+1):
      moves = steps(ans[-1], dst_step)
      print(f'step {dst_step} solved with ops = {len(moves)-1}')
      ans = ans + moves[1:]
    # opidxs = black_up_顶角(ans[-1])
    # for idx in opidxs:
    #   ans.append(ops[idx](ans[-1]))

    # print('顶角 Done!')

    return ans

  ans = cube3dsolver()
  show_3ds(ans, cube3dsurface)
  dump3d(ans[-1])


solve([[[0, 0, 4], [0, 0, 0], [2, 0, 1]], [[4, 1, 3], [1, 1, 1], [1, 1, 1]], [[0, 2, 2], [2, 2, 2], [2, 2, 2]], [
      [0, 3, 1], [3, 3, 3], [3, 3, 3]], [[0, 4, 3], [4, 4, 4], [4, 4, 4]], [[5, 5, 5], [5, 5, 5], [5, 5, 5]]])
```

### 7步公式

底层: 感觉基本逻辑就够了,没有什么"公式"

中层:
- 要把 左侧(0,1)移动到(1,2): 右手: 左上右下 + 背后90度 + 右上左下
- 要把 右侧(0,1)移动到(1,0): 左手: 右上左下 + 背后90度 + 左上右下

顶面十字: 
- 前顺时针+左上右下+前逆时针

十字棱:
- 右手: 上 左 下 左 上 左2 下 左

顶角位置:
- (顶顺)(右上)(顶逆)(左上) (顶顺)(右下)(顶逆)(左下)

完成:
- 右下,底顺,右上,底逆

## 4+阶

从3阶提取, 逻辑意义

TODO
## 总结

当然, 上面的问题在于 实际上还是借鉴了现有公式(7步还原魔方)的"过程", 因为在无知识的情况下, 其实无法知道去做阶段性是否是可行的

另外,作为程序搜索,如果有办法提出更好的渐进的方案而不是上面的渐进方案,过着在搜索中能有优先级,就更好了(https://zhuanlan.zhihu.com/p/57816260 里讲到了多个步骤)

既然上面最多单次步数是7步, 有没有办法是,从两头向中间搜索(meet-in-middle),这样先把不关心的颜色 全部置为第7种颜色,这样最大步数是4步, $18 * 15^3 = 60750$ 非常小, 稍微的问题是目前实现是靠估价函数实现的, 所以其实并不能准确的知道目标状态, 所以其实有可能$2^4$种左右的目标状态,但这也不大

然而上面的 7步还原魔方, 所用的公式,有不少在7,8步, 最后的还是9步

而作为速拧用的cfop(Fridrich Method), 则是相当于暴力分情况(119 条公式)讨论, 而单次的步数都更长, 对于暴力搜索更不可取了