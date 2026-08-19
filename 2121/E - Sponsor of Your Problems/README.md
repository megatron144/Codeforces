<h2><a href="https://codeforces.com/contest/2121/problem/E" target="_blank" rel="noopener noreferrer">2121E — Sponsor of Your Problems</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2121E](https://codeforces.com/contest/2121/problem/E) |

## Topics
`dp` `greedy` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">E. Sponsor of Your Problems</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>For two integers $$$a$$$ and $$$b$$$, we define $$$f(a, b)$$$ as the number of positions in the decimal representation of the numbers $$$a$$$ and $$$b$$$ where their digits are the same. For example, $$$f(12, 21) = 0$$$, $$$f(31, 37) = 1$$$, $$$f(19891, 18981) = 2$$$, $$$f(54321, 24361) = 3$$$.</p><p>You are given two integers $$$l$$$ and $$$r$$$ of the <span class="tex-font-style-bf">same</span> length in decimal representation. Consider all integers $$$l \leq x \leq r$$$. Your task is to find the minimum value of $$$f(l, x) + f(x, r)$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>Each test case consists of a single line containing two integers $$$l$$$ and $$$r$$$ ($$$1 \leq l \leq r  \lt  10^9$$$).</p><p>It is guaranteed that the numbers $$$l$$$ and $$$r$$$ have the same length in decimal representation and do not have leading zeros.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum value of $$$f(l, x) + f(x, r)$$$ among all integer values $$$l \leq x \leq r$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009220369810860229" id="id007010441776402636" class="input-output-copier">Copy</div></div><pre id="id009220369810860229"><div class="test-example-line test-example-line-even test-example-line-0">14</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 3</div><div class="test-example-line test-example-line-odd test-example-line-3">4 6</div><div class="test-example-line test-example-line-even test-example-line-4">15 16</div><div class="test-example-line test-example-line-odd test-example-line-5">17 19</div><div class="test-example-line test-example-line-even test-example-line-6">199 201</div><div class="test-example-line test-example-line-odd test-example-line-7">899 999</div><div class="test-example-line test-example-line-even test-example-line-8">1990 2001</div><div class="test-example-line test-example-line-odd test-example-line-9">6309 6409</div><div class="test-example-line test-example-line-even test-example-line-10">12345 12501</div><div class="test-example-line test-example-line-odd test-example-line-11">19987 20093</div><div class="test-example-line test-example-line-even test-example-line-12">746814 747932</div><div class="test-example-line test-example-line-odd test-example-line-13">900990999 900991010</div><div class="test-example-line test-example-line-even test-example-line-14">999999999 999999999</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004558208516858433" id="id009266183413521714" class="input-output-copier">Copy</div></div><pre id="id004558208516858433">2
1
0
3
2
2
1
3
3
4
3
5
12
18
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can choose $$$x = 1$$$. Then $$$f(1, 1) + f(1, 1) = 1 + 1 = 2$$$.</p><p>In the second test case, you can choose $$$x = 2$$$. Then $$$f(2, 2) + f(2, 3) = 1 + 0 = 1$$$.</p><p>In the third test case, you can choose $$$x = 5$$$. Then $$$f(4, 5) + f(5, 6) = 0 + 0 = 0$$$.</p><p>In the fourth test case, you can choose $$$x = 15$$$. Then $$$f(15, 15) + f(15, 16) = 2 + 1 = 3$$$.</p><p>In the fifth test case, you can choose $$$x = 18$$$. Then $$$f(17, 18) + f(18, 19) = 1 + 1 = 2$$$.</p><p>In the sixth test case, you can choose $$$x = 200$$$. Then $$$f(199, 200) + f(200, 201) = 0 + 2 = 2$$$.</p><p>In the seventh test case, you can choose $$$x = 900$$$. Then $$$f(899, 900) + f(900, 999) = 0 + 1 = 1$$$.</p><p>In the eighth test case, you can choose $$$x = 1992$$$. Then $$$f(1990, 1992) + f(1992, 2001) = 3 + 0 = 3$$$.</p></div>