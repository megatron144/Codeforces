<h2><a href="https://codeforces.com/contest/2094/problem/E" target="_blank" rel="noopener noreferrer">2094E — Boneca Ambalabu</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2094E](https://codeforces.com/contest/2094/problem/E) |

## Topics
`bitmasks`

---

## Problem Statement

<div class="header"><div class="title">E. Boneca Ambalabu</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Boneca Ambalabu gives you a sequence of $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$.</p><p>Output the maximum value of $$$(a_k\oplus a_1)+(a_k\oplus a_2)+\ldots+(a_k\oplus a_n)$$$ among all $$$1 \leq k \leq n$$$. Note that $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) – the number of independent test cases.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \leq n\leq 2\cdot 10^5$$$) – the length of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$ ($$$0 \leq a_i  \lt  2^{30}$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the maximum value on a new line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007850189343534559" id="id0010343906532814284" class="input-output-copier">Copy</div></div><pre id="id007850189343534559"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">18 18 18</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 4 8 16</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">8 13 4 5 15</div><div class="test-example-line test-example-line-even test-example-line-4">6</div><div class="test-example-line test-example-line-even test-example-line-4">625 676 729 784 841 900</div><div class="test-example-line test-example-line-odd test-example-line-5">1</div><div class="test-example-line test-example-line-odd test-example-line-5">1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0043922548077872337" id="id005677926102701895" class="input-output-copier">Copy</div></div><pre id="id0043922548077872337">0
79
37
1555
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the best we can do is $$$(18\oplus18)+(18\oplus18)+(18\oplus18)=0$$$.</p><p>In the second test case, we choose $$$k=5$$$ to get $$$(16\oplus1)+(16\oplus2)+(16\oplus4)+(16\oplus8)+(16\oplus16)=79$$$.</p></div>