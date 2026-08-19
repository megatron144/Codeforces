<h2><a href="https://codeforces.com/contest/1879/problem/D" target="_blank" rel="noopener noreferrer">1879D — Sum of XOR Functions</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1879D](https://codeforces.com/contest/1879/problem/D) |

## Topics
`bitmasks` `combinatorics` `divide and conquer` `dp` `math`

---

## Problem Statement

<div class="header"><div class="title">D. Sum of XOR Functions</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of length $$$n$$$ consisting of non-negative integers.</p><p>You have to calculate the value of $$$\sum_{l=1}^{n} \sum_{r=l}^{n} f(l, r) \cdot (r - l + 1)$$$, where $$$f(l, r)$$$ is $$$a_l \oplus a_{l+1} \oplus \dots \oplus a_{r-1} \oplus a_r$$$ (the character $$$\oplus$$$ denotes bitwise XOR).</p><p>Since the answer can be very large, print it modulo $$$998244353$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 3 \cdot 10^5$$$) — the length of the array $$$a$$$.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \le a_i \le 10^9)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the one integer — the value of $$$\sum_{l=1}^{n} \sum_{r=l}^{n} f(l, r) \cdot (r - l + 1)$$$, taken modulo $$$998244353$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007255326692066031" id="id0008795185555029317" class="input-output-copier">Copy</div></div><pre id="id007255326692066031">3
1 3 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00006248102672133604" id="id0030686650762649725" class="input-output-copier">Copy</div></div><pre id="id00006248102672133604">12
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004365707371314136" id="id009705132722986933" class="input-output-copier">Copy</div></div><pre id="id004365707371314136">4
39 68 31 80
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006967691938617963" id="id0037691342981812104" class="input-output-copier">Copy</div></div><pre id="id006967691938617963">1337
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002963507653564176" id="id0031493034511408513" class="input-output-copier">Copy</div></div><pre id="id002963507653564176">7
313539461 779847196 221612534 488613315 633203958 394620685 761188160
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004963769797380252" id="id009534891163841509" class="input-output-copier">Copy</div></div><pre id="id004963769797380252">257421502
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the answer is equal to $$$f(1, 1) + 2 \cdot f(1, 2) + 3 \cdot f(1, 3) + f(2, 2) + 2 \cdot f(2, 3) + f(3, 3) = $$$ $$$= 1 + 2 \cdot 2 + 3 \cdot 0 + 3 + 2 \cdot 1 + 2 = 12$$$.</p></div>