<h2><a href="https://codeforces.com/contest/2072/problem/C" target="_blank" rel="noopener noreferrer">2072C — Creating Keys for StORages Has Become My Main Skill</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2072C](https://codeforces.com/contest/2072/problem/C) |

## Topics
`bitmasks` `constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Creating Keys for StORages Has Become My Main Skill</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Akito still has nowhere to live, and the price for a small room is everywhere. For this reason, Akito decided to get a job at a bank as a key creator for storages.</p><p>In this magical world, everything is different. For example, the key for a storage with the code $$$(n, x)$$$ is an array $$$a$$$ of length $$$n$$$ such that:</p><ul> <li> $$$a_1 \ | \ a_2 \ | \ a_3 \ | \ \ldots \ | \ a_n = x$$$, where $$$a \ | \ b$$$ is the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise "OR"</a> of numbers $$$a$$$ and $$$b$$$.</li><li> $$$\text{MEX}(\{ a_1, a_2, a_3, \ldots, a_n \})$$$$$$^{\text{∗}}$$$ is maximized among all such arrays. </li></ul><p>Akito diligently performed his job for several hours, but suddenly he got a headache. Substitute for him for an hour; for the given $$$n$$$ and $$$x$$$, create any key for the storage with the code $$$(n, x)$$$.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$$$$\text{MEX}(S)$$$ is the minimum non-negative integer $$$z$$$ such that $$$z$$$ is not contained in the set $$$S$$$ and all $$$0 \le y  \lt  z$$$ are contained in $$$S$$$.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the number $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>In the only line of each test case, two numbers $$$n$$$ and $$$x$$$ ($$$1 \le n \le 2 \cdot 10^5, 0 \le x  \lt  2^{30}$$$) are given — the length of the array and the desired value of the bitwise "OR".</p><p>It is guaranteed that the sum of $$$n$$$ across all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ integers $$$a_i$$$ ($$$0 \le a_i  \lt  2^{30}$$$) — the elements of the key array that satisfy all the conditions.</p><p>If there are multiple suitable arrays, output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00705304639950555" id="id001553183579630164" class="input-output-copier">Copy</div></div><pre id="id00705304639950555"><div class="test-example-line test-example-line-even test-example-line-0">9</div><div class="test-example-line test-example-line-odd test-example-line-1">1 69</div><div class="test-example-line test-example-line-even test-example-line-2">7 7</div><div class="test-example-line test-example-line-odd test-example-line-3">5 7</div><div class="test-example-line test-example-line-even test-example-line-4">7 3</div><div class="test-example-line test-example-line-odd test-example-line-5">8 7</div><div class="test-example-line test-example-line-even test-example-line-6">3 52</div><div class="test-example-line test-example-line-odd test-example-line-7">9 11</div><div class="test-example-line test-example-line-even test-example-line-8">6 15</div><div class="test-example-line test-example-line-odd test-example-line-9">2 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0024235416512592545" id="id002821398227247094" class="input-output-copier">Copy</div></div><pre id="id0024235416512592545">69
6 0 3 4 1 2 5
4 1 3 0 2
0 1 2 3 2 1 0
7 0 6 1 5 2 4 3
0 52 0
0 1 8 3 0 9 11 2 10
4 0 3 8 1 2
0 3</pre></div></div></div>