
<div>
<h1 id="tower-of-hanoi" style="box-sizing: border-box; font-size: 2.6em; margin: 1.3em 0px; font-family: 'Source Sans Pro', sans-serif; font-weight: 300; line-height: 1.1; color: rgb(63, 63, 63); outline: none !important; background-color: rgb(246, 246, 246);"><br></h1>
<h1 id="tower-of-hanoi" style="box-sizing: border-box; font-size: 2.6em; margin: 1.3em 0px; font-family: 'Source Sans Pro', sans-serif; font-weight: 300; line-height: 1.1; color: rgb(63, 63, 63); outline: none !important; background-color: rgb(246, 246, 246);">Tower of Hanoi</h1>
<h1 style="box-sizing: border-box; font-size: 2.6em; margin: 1.3em 0px; font-family: 'Source Sans Pro', sans-serif; font-weight: 300; line-height: 1.1; color: rgb(63, 63, 63); outline: none !important; background-color: rgb(246, 246, 246);">
<p style="box-sizing: border-box; margin: 0px 0px 1.1em; font-size: 18px; line-height: 26.1000003814697px; text-align: justify; outline: none !important;"><code style="box-sizing: border-box; font-family: 'Source Code Pro', monospace; font-size: 0.9em; padding: 2px 4px; border-top-left-radius: 4px; border-top-right-radius: 4px; border-bottom-right-radius: 4px; border-bottom-left-radius: 4px; outline: none !important; background-color: rgba(128, 128, 128, 0.0745098);">hannuo[panzhi,zhuzi]</code>&nbsp;<br style="box-sizing: border-box; outline: none !important;"><code style="box-sizing: border-box; font-family: 'Source Code Pro', monospace; font-size: 0.9em; padding: 2px 4px; border-top-left-radius: 4px; border-top-right-radius: 4px; border-bottom-right-radius: 4px; border-bottom-left-radius: 4px; outline: none !important; background-color: rgba(128, 128, 128, 0.0745098);">=min{2*hannuo[k,zhuzi]+hannuo[panzi-k,zhuzi-1]}</code></p>
<table style="box-sizing: border-box; border-collapse: collapse; border-spacing: 0px; max-width: 100%; margin-bottom: 20px; color: rgb(63, 63, 63); font-size: 18px; line-height: 26.1000003814697px; text-align: justify; outline: none !important;">
<thead style="box-sizing: border-box; outline: none !important;">
<tr style="box-sizing: border-box; outline: none !important;">
<th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">0</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">3</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">4</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">5</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">6</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">7</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">8</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">9</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">10</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">11</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">12</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">13</th><th style="box-sizing: border-box; text-align: left; padding: 8px; line-height: 20px; vertical-align: bottom; border-top-width: 0px; outline: none !important;">14</th>
</tr>
</thead>
<tbody style="box-sizing: border-box; outline: none !important;">

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">2</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">3</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">4</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">5</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">31</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">6</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">63</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">17</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">7</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">127</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">25</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">19</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">17</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">8</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">255</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">33</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">23</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">21</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">19</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">17</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">9</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">511</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">41</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">27</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">25</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">23</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">21</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">19</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">17</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">17</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">17</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">17</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">17</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">10</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1023</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">49</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">31</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">29</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">27</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">25</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">23</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">21</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">19</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">19</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">19</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">19</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">11</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">2047</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">65</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">39</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">33</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">31</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">29</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">27</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">25</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">23</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">21</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">21</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">21</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">12</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">4095</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">81</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">47</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">37</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">35</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">33</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">31</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">29</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">27</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">25</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">23</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">23</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">13</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">8191</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">97</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">55</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">41</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">39</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">37</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">35</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">33</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">31</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">29</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">27</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">25</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">14</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">16383</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">113</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">63</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">45</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">43</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">41</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">39</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">37</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">35</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">33</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">31</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">29</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">15</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">32767</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">129</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">71</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">49</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">47</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">45</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">43</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">41</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">39</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">37</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">35</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">33</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">16</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">65535</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">161</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">79</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">57</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">51</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">49</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">47</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">45</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">43</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">41</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">39</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">37</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">17</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">131071</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">193</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">87</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">65</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">55</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">53</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">51</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">49</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">47</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">45</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">43</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">41</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">18</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">262143</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">225</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">95</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">73</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">59</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">57</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">55</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">53</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">51</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">49</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">47</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">45</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">19</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">524287</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">257</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">103</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">81</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">63</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">61</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">59</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">57</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">55</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">53</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">51</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">49</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">20</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">1048575</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">289</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">111</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">89</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">67</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">65</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">63</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">61</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">59</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">57</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">55</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">53</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">21</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">2097151</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">321</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">127</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">97</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">71</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">69</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">67</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">65</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">63</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">61</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">59</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">57</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">22</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">4194303</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">385</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">143</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">105</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">79</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">73</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">71</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">69</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">67</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">65</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">63</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">61</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">23</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">8388607</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">449</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">159</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">113</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">87</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">77</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">75</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">73</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">71</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">69</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">67</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">65</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">24</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">16777215</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">513</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">175</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">121</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">95</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">81</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">79</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">77</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">75</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">73</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">71</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">69</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">25</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">33554431</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">577</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">191</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">129</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">103</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">85</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">83</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">81</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">79</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">77</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">75</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">73</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">26</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">67108863</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">641</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">207</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">137</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">111</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">89</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">87</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">85</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">83</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">81</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">79</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">77</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">27</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">134217727</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">705</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">223</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">145</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">119</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">93</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">91</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">89</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">87</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">85</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">83</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">81</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">28</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">268435455</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">769</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">239</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">153</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">127</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">97</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">95</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">93</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">91</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">89</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">87</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">85</td>
</tr>

<tr style="box-sizing: border-box; outline: none !important;">
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">29</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">536870911</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">897</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">255</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">161</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">135</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">105</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">99</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">97</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">95</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">93</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">91</td>
<td style="box-sizing: border-box; outline: none !important; padding: 8px; line-height: 20px; vertical-align: top; border-top-width: 1px; border-top-style: solid; border-top-color: rgb(221, 221, 221);">89</td>
</tr>

</tbody>

</table>
</h1>
</div>
