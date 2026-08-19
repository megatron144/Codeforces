<h2><a href="https://codeforces.com/contest/2036/problem/F" target="_blank" rel="noopener noreferrer">2036F — XORificator 3000</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2036F](https://codeforces.com/contest/2036/problem/F) |

## Topics
`bitmasks` `dp` `number theory` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">F. XORificator 3000</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Alice has been giving gifts to Bob for many years, and she knows that what he enjoys the most is performing <a href="http://tiny.cc/xor_wiki_eng">bitwise XOR</a> of <span class="tex-font-style-it">interesting</span> integers. Bob considers a positive integer $$$x$$$ to be <span class="tex-font-style-it">interesting</span> if it satisfies $$$x \not\equiv k (\bmod 2^i)$$$. Therefore, this year for his birthday, she gifted him a super-powerful "XORificator 3000", the latest model.</p><p>Bob was very pleased with the gift, as it allowed him to instantly compute the XOR of all <span class="tex-font-style-it">interesting</span> integers in any range from $$$l$$$ to $$$r$$$, inclusive. After all, what else does a person need for happiness? Unfortunately, the device was so powerful that at one point it performed XOR with itself and disappeared. Bob was very upset, and to cheer him up, Alice asked you to write your version of the "XORificator".</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains a single integer $$$t$$$ $$$(1 \leq t \leq 10^4)$$$ — the number of XOR queries on the segment. The following $$$t$$$ lines contain the queries, each consisting of the integers $$$l$$$, $$$r$$$, $$$i$$$, $$$k$$$ $$$(1 \leq l \leq r \leq 10^{18}$$$, $$$0 \leq i \leq 30$$$, $$$0 \leq k  \lt  2^i)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, output a single integer — the XOR of all integers $$$x$$$ in the range $$$[l, r]$$$ such that $$$x \not\equiv k \mod 2^i$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009961204626445299" id="id007153243474682864" class="input-output-copier">Copy</div></div><pre id="id009961204626445299"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1 3 1 0</div><div class="test-example-line test-example-line-even test-example-line-2">2 28 3 7</div><div class="test-example-line test-example-line-odd test-example-line-3">15 43 1 0</div><div class="test-example-line test-example-line-even test-example-line-4">57 2007 1 0</div><div class="test-example-line test-example-line-odd test-example-line-5">1010 1993 2 2</div><div class="test-example-line test-example-line-even test-example-line-6">1 1000000000 30 1543</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008013482896169104" id="id006448412431304061" class="input-output-copier">Copy</div></div><pre id="id008013482896169104">2
2
13
0
4
1000000519
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first query, the <span class="tex-font-style-it">interesting</span> integers in the range $$$[1, 3]$$$ are $$$1$$$ and $$$3$$$, so the answer will be $$$1 \oplus 3 = 2$$$.</p></div>