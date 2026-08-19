<h2><a href="https://codeforces.com/contest/2085/problem/C" target="_blank" rel="noopener noreferrer">2085C — Serval and The Formula</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2085C](https://codeforces.com/contest/2085/problem/C) |

## Topics
`bitmasks` `constructive algorithms` `dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Serval and The Formula</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>You are given two positive integers $$$x$$$ and $$$y$$$ ($$$1\le x, y\le 10^9$$$).</p><p>Find a <span class="tex-font-style-bf">non-negative</span> integer $$$k\le 10^{18}$$$, such that $$$(x+k) + (y+k) = (x+k)\oplus (y+k)$$$ holds$$$^{\text{∗}}$$$, or determine that such an integer does not exist.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$$$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>. </p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows. </p><p>The only line of each test case contains two integers $$$x$$$ and $$$y$$$ ($$$1\le x, y\le 10^9$$$) — the given integers.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer $$$k$$$ ($$$0\le k\le 10^{18}$$$) — the integer you found. Print $$$-1$$$ if it is impossible to find such an integer.</p><p>If there are multiple answers, you may print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006584195227688837" id="id0016375331676906768" class="input-output-copier">Copy</div></div><pre id="id006584195227688837"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2 5</div><div class="test-example-line test-example-line-even test-example-line-2">6 6</div><div class="test-example-line test-example-line-odd test-example-line-3">19 10</div><div class="test-example-line test-example-line-even test-example-line-4">1024 4096</div><div class="test-example-line test-example-line-odd test-example-line-5">1198372 599188</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005314166712491453" id="id007351121938319504" class="input-output-copier">Copy</div></div><pre id="id005314166712491453">0
-1
1
1024
28
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, since $$$(2 + 0) + (5 + 0) = (2 + 0) \oplus (5 + 0) = 7$$$, $$$k=0$$$ is a possible answer. Note that $$$k=4$$$ is also a possible answer because $$$(2 + 4) + (5 + 4) = (2 + 4) \oplus (5 + 4) = 15$$$.</p><p>In the second test case, $$$(x+k)\oplus (y+k) = (6+k)\oplus (6+k) = 0$$$. However, $$$(x+k)+(y+k)  \gt  0$$$ holds for every $$$k \ge 0$$$, implying that such an integer $$$k$$$ does not exist.</p></div>