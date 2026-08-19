<h2><a href="https://codeforces.com/contest/1286/problem/B" target="_blank" rel="noopener noreferrer">1286B — Numbers on Tree</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1286B](https://codeforces.com/contest/1286/problem/B) |

## Topics
`constructive algorithms` `data structures` `dfs and similar` `graphs` `greedy` `trees`

---

## Problem Statement

<div class="header"><div class="title">B. Numbers on Tree</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Evlampiy was gifted a rooted tree. The vertices of the tree are numbered from $$$1$$$ to $$$n$$$. Each of its vertices also has an integer $$$a_i$$$ written on it. For each vertex $$$i$$$, Evlampiy calculated $$$c_i$$$ — the number of vertices $$$j$$$ in the subtree of vertex $$$i$$$, such that $$$a_j  \lt  a_i$$$. </p><center><img class="tex-graphics" src="https://espresso.codeforces.com/f5dda49bc62f72dcd05825f4d2b40d4d7a64a2fb.png" style="max-width: 100.0%;max-height: 100.0%;">Illustration for the second example, the first integer is $$$a_i$$$ and the integer in parentheses is $$$c_i$$$</center><p>After the new year, Evlampiy could not remember what his gift was! He remembers the tree and the values of $$$c_i$$$, but he completely forgot which integers $$$a_i$$$ were written on the vertices.</p><p>Help him to restore initial integers!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$n$$$ $$$(1 \leq n \leq 2000)$$$ — the number of vertices in the tree.</p><p>The next $$$n$$$ lines contain descriptions of vertices: the $$$i$$$-th line contains two integers $$$p_i$$$ and $$$c_i$$$ ($$$0 \leq p_i \leq n$$$; $$$0 \leq c_i \leq n-1$$$), where $$$p_i$$$ is the parent of vertex $$$i$$$ or $$$0$$$ if vertex $$$i$$$ is root, and $$$c_i$$$ is the number of vertices $$$j$$$ in the subtree of vertex $$$i$$$, such that $$$a_j  \lt  a_i$$$.</p><p>It is guaranteed that the values of $$$p_i$$$ describe a rooted tree with $$$n$$$ vertices.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If a solution exists, in the first line print "<span class="tex-font-style-tt">YES</span>", and in the second line output $$$n$$$ integers $$$a_i$$$ $$$(1 \leq a_i \leq {10}^{9})$$$. If there are several solutions, output any of them. One can prove that if there is a solution, then there is also a solution in which all $$$a_i$$$ are between $$$1$$$ and $$$10^9$$$.</p><p>If there are no solutions, print "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007879221652018751" id="id009970528362797044" class="input-output-copier">Copy</div></div><pre id="id007879221652018751">3
2 0
0 2
2 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00028881467875217726" id="id005704942264665508" class="input-output-copier">Copy</div></div><pre id="id00028881467875217726">YES
1 2 1 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010596942623605721" id="id0009575540682306216" class="input-output-copier">Copy</div></div><pre id="id0010596942623605721">5
0 1
1 3
2 1
3 0
2 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009505951801736933" id="id002840978432179285" class="input-output-copier">Copy</div></div><pre id="id009505951801736933">YES
2 3 2 1 2
</pre></div></div></div>