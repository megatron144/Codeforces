<h2><a href="https://codeforces.com/contest/1691/problem/D" target="_blank" rel="noopener noreferrer">1691D — Max GEQ Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1691D](https://codeforces.com/contest/1691/problem/D) |

## Topics
`binary search` `constructive algorithms` `data structures` `divide and conquer` `implementation` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D. Max GEQ Sum</div><div class="time-limit"><div class="property-title">time limit per test</div>1.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of $$$n$$$ integers. You are asked to find out if the inequality $$$$$$\max(a_i, a_{i + 1}, \ldots, a_{j - 1}, a_{j}) \geq a_i + a_{i + 1} + \dots + a_{j - 1} + a_{j}$$$$$$ holds for all pairs of indices $$$(i, j)$$$, where $$$1 \leq i \leq j \leq n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^5$$$). Description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 2 \cdot 10^5$$$)  — the size of the array.</p><p>The next line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, on a new line output "<span class="tex-font-style-tt">YES</span>" if the condition is satisfied for the given array, and "<span class="tex-font-style-tt">NO</span>" otherwise. You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005469784907256764" id="id0008191755685220004" class="input-output-copier">Copy</div></div><pre id="id005469784907256764"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">-1 1 -1 2</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">-1 2 -3 2 -1</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-odd test-example-line-3">2 3 -1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006420581894875975" id="id008309101677871742" class="input-output-copier">Copy</div></div><pre id="id006420581894875975">YES
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In test cases $$$1$$$ and $$$2$$$, the given condition is satisfied for all $$$(i, j)$$$ pairs. </p><p>In test case $$$3$$$, the condition isn't satisfied for the pair $$$(1, 2)$$$ as $$$\max(2, 3)  \lt  2 + 3$$$.</p></div>