Math
====

## INIT

> DOWNLOAD

`git clone https://github.com/YeXiaoRain/Math.git -b gh-pages-dev`

> INSTALL DEP

`npm install`

> clone theme

`git clone https://github.com/iissnan/hexo-theme-next themes/next`

> repo for gh-pages

```
mkdir public
cd public
git add origin git@yxrgithub:YeXiaoRain/Math.git
git fetch
git checkout -b gh-pages origin/gh-pages
```

**config yxrgithub in `~/.ssh/config`**

```config
Host yxrgithub
    HostName github.com
    User git
    IdentityFile ~/.ssh/id_rsa.yexiaorain
    IdentitiesOnly yes
```

## USE

> local server

`hexo s`

> generate

`hexo g`

> update code & generate

`./update.sh`
