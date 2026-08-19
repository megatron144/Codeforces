<h2><a href="https://codeforces.com/contest/1283/problem/D" target="_blank" rel="noopener noreferrer">1283D — Christmas Trees</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1283D](https://codeforces.com/contest/1283/problem/D) |

## Topics
`graphs` `greedy` `shortest paths`

---

## Problem Statement

<div class="header"><div class="title">D. Christmas Trees</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ Christmas trees on an infinite number line. The $$$i$$$-th tree grows at the position $$$x_i$$$. All $$$x_i$$$ are guaranteed to be distinct.</p><p>Each <span class="tex-font-style-bf">integer</span> point can be either occupied by the Christmas tree, by the human or not occupied at all. Non-integer points cannot be occupied by anything.</p><p>There are $$$m$$$ people who want to celebrate Christmas. Let $$$y_1, y_2, \dots, y_m$$$ be the positions of people (note that all values $$$x_1, x_2, \dots, x_n, y_1, y_2, \dots, y_m$$$ should be <span class="tex-font-style-bf">distinct</span> and all $$$y_j$$$ should be <span class="tex-font-style-bf">integer</span>). You want to find such an arrangement of people that the value $$$\sum\limits_{j=1}^{m}\min\limits_{i=1}^{n}|x_i - y_j|$$$ is the minimum possible (in other words, the sum of distances to the nearest Christmas tree for all people should be minimized).</p><p>In other words, let $$$d_j$$$ be the distance from the $$$j$$$-th human to the nearest Christmas tree ($$$d_j = \min\limits_{i=1}^{n} |y_j - x_i|$$$). Then you need to choose such positions $$$y_1, y_2, \dots, y_m$$$ that $$$\sum\limits_{j=1}^{m} d_j$$$ is the minimum possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 2 \cdot 10^5$$$) — the number of Christmas trees and the number of people.</p><p>The second line of the input contains $$$n$$$ integers $$$x_1, x_2, \dots, x_n$$$ ($$$-10^9 \le x_i \le 10^9$$$), where $$$x_i$$$ is the position of the $$$i$$$-th Christmas tree. It is guaranteed that all $$$x_i$$$ are distinct.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line print one integer $$$res$$$ — the minimum possible value of $$$\sum\limits_{j=1}^{m}\min\limits_{i=1}^{n}|x_i - y_j|$$$ (in other words, the sum of distances to the nearest Christmas tree for all people).</p><p>In the second line print $$$m$$$ integers $$$y_1, y_2, \dots, y_m$$$ ($$$-2 \cdot 10^9 \le y_j \le 2 \cdot 10^9$$$), where $$$y_j$$$ is the position of the $$$j$$$-th human. All $$$y_j$$$ should be distinct and all values $$$x_1, x_2, \dots, x_n, y_1, y_2, \dots, y_m$$$ should be <span class="tex-font-style-bf">distinct</span>.</p><p>If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009381065339002448" id="id004669586502070836" class="input-output-copier">Copy</div></div><pre id="id009381065339002448">2 6
1 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00502882291793677" id="id009711790117018383" class="input-output-copier">Copy</div></div><pre id="id00502882291793677">8
-1 2 6 4 0 3 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0011879354946589138" id="id0011943807431455833" class="input-output-copier">Copy</div></div><pre id="id0011879354946589138">3 5
0 3 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0045778215997719707" id="id0015605642917783602" class="input-output-copier">Copy</div></div><pre id="id0045778215997719707">7
5 -2 4 -1 2 
</pre></div></div></div>