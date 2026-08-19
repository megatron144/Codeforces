<h2><a href="https://codeforces.com/contest/1355/problem/C" target="_blank" rel="noopener noreferrer">1355C — Count Triangles</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1355C](https://codeforces.com/contest/1355/problem/C) |

## Topics
`binary search` `implementation` `math` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">C. Count Triangles</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Like any unknown mathematician, Yuri has favourite numbers: $$$A$$$, $$$B$$$, $$$C$$$, and $$$D$$$, where $$$A \leq B \leq C \leq D$$$. Yuri also likes triangles and once he thought: how many non-degenerate triangles with integer sides $$$x$$$, $$$y$$$, and $$$z$$$ exist, such that $$$A \leq x \leq B \leq y \leq C \leq z \leq D$$$ holds?</p><p>Yuri is preparing problems for a new contest now, so he is very busy. That's why he asked you to calculate the number of triangles with described property.</p><p>The triangle is called non-degenerate if and only if its vertices are not collinear.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains four integers: $$$A$$$, $$$B$$$, $$$C$$$ and $$$D$$$ ($$$1 \leq A \leq B \leq C \leq D \leq 5 \cdot 10^5$$$) — Yuri's favourite numbers.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the number of non-degenerate triangles with integer sides $$$x$$$, $$$y$$$, and $$$z$$$ such that the inequality $$$A \leq x \leq B \leq y \leq C \leq z \leq D$$$ holds.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031767707560623815" id="id007666770287593112" class="input-output-copier">Copy</div></div><pre id="id0031767707560623815">1 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009307902979460532" id="id0021857464964368" class="input-output-copier">Copy</div></div><pre id="id009307902979460532">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0035251484592337656" id="id0006402490267969996" class="input-output-copier">Copy</div></div><pre id="id0035251484592337656">1 2 2 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010109660826614641" id="id0035130599262844275" class="input-output-copier">Copy</div></div><pre id="id0010109660826614641">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000583347864528424" id="id005718423912892905" class="input-output-copier">Copy</div></div><pre id="id000583347864528424">500000 500000 500000 500000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007320677029861803" id="id008102386108329528" class="input-output-copier">Copy</div></div><pre id="id007320677029861803">1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example Yuri can make up triangles with sides $$$(1, 3, 3)$$$, $$$(2, 2, 3)$$$, $$$(2, 3, 3)$$$ and $$$(2, 3, 4)$$$.</p><p>In the second example Yuri can make up triangles with sides $$$(1, 2, 2)$$$, $$$(2, 2, 2)$$$ and $$$(2, 2, 3)$$$.</p><p>In the third example Yuri can make up only one equilateral triangle with sides equal to $$$5 \cdot 10^5$$$.</p></div>