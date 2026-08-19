<h2><a href="https://codeforces.com/contest/1466/problem/E" target="_blank" rel="noopener noreferrer">1466E — Apollo versus Pan</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1466E](https://codeforces.com/contest/1466/problem/E) |

## Topics
`bitmasks` `brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">E. Apollo versus Pan</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Only a few know that Pan and Apollo weren't only battling for the title of the GOAT musician. A few millenniums later, they also challenged each other in math (or rather in fast calculations). The task they got to solve is the following:</p><p>Let $$$x_1, x_2, \ldots, x_n$$$ be the sequence of $$$n$$$ non-negative integers. Find this value: $$$$$$\sum_{i=1}^n \sum_{j=1}^n \sum_{k=1}^n (x_i \, \& \, x_j) \cdot (x_j \, | \, x_k)$$$$$$</p><p>Here $$$\&$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise and,</a> and $$$|$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise or.</a></p><p>Pan and Apollo could solve this in a few seconds. Can you do it too? For convenience, find the answer modulo $$$10^9 + 7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \leq t \leq 1\,000$$$) denoting the number of test cases, then $$$t$$$ test cases follow.</p><p>The first line of each test case consists of a single integer $$$n$$$ ($$$1 \leq n \leq 5 \cdot 10^5$$$), the length of the sequence. The second one contains $$$n$$$ non-negative integers $$$x_1, x_2, \ldots, x_n$$$ ($$$0 \leq x_i  \lt  2^{60}$$$), elements of the sequence.</p><p>The sum of $$$n$$$ over all test cases will not exceed $$$5 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ lines. The $$$i$$$-th line should contain the answer to the $$$i$$$-th text case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002797671555601502" id="id009092915163241515" class="input-output-copier">Copy</div></div><pre id="id002797671555601502">8
2
1 7
3
1 2 4
4
5 5 5 5
5
6 2 2 1 0
1
0
1
1
6
1 12 123 1234 12345 123456
5
536870912 536870911 1152921504606846975 1152921504606846974 1152921504606846973
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006307449292976338" id="id006215748785383803" class="input-output-copier">Copy</div></div><pre id="id006307449292976338">128
91
1600
505
0
1
502811676
264880351
</pre></div></div></div>