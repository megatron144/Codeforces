<h2><a href="https://codeforces.com/contest/2094/problem/G" target="_blank" rel="noopener noreferrer">2094G — Chimpanzini Bananini</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2094G](https://codeforces.com/contest/2094/problem/G) |

## Topics
`data structures` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">G. Chimpanzini Bananini</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">Chimpanzini Bananini stands on the brink of a momentous battle—one destined to bring finality.</span></p><p>For an arbitrary array $$$b$$$ of length $$$m$$$, let's denote the <span class="tex-font-style-it">rizziness</span> of the array to be $$$\sum_{i=1}^mb_i\cdot i=b_1\cdot 1+b_2\cdot 2+b_3\cdot 3+\ldots + b_m\cdot m$$$.</p><p>Chimpanzini Bananini gifts you an empty array. There are three types of operations you can perform on it. </p><ol> <li> Perform a cyclic shift on the array. That is, the array $$$[a_1, a_2, \ldots, a_n]$$$ becomes $$$[a_n, a_1, a_2, \ldots, a_{n-1}].$$$ </li><li> Reverse the entire array. That is, the array $$$[a_1, a_2, \ldots, a_n]$$$ becomes $$$[a_n, a_{n-1}, \ldots, a_1].$$$ </li><li> Append an element to the end of the array. The array $$$[a_1, a_2, \ldots, a_n]$$$ becomes $$$[a_1, a_2, \ldots, a_n, k]$$$ after appending $$$k$$$ to the end of the array. </li></ol><p>After each operation, you are interested in calculating the <span class="tex-font-style-it">rizziness</span> of your array. </p><p>Note that all operations are <span class="tex-font-style-bf">persistent</span>. This means that each operation modifies the array, and subsequent operations should be applied to the current state of the array after the previous operations.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains an integer $$$q$$$ ($$$1 \leq q \leq 2\cdot 10^5$$$) — the number of operations you perform on your array.</p><p>The following $$$q$$$ lines first contain a single integer $$$s$$$ ($$$1 \leq s \leq 3$$$) — the operation type. </p><ul> <li> If $$$s=1$$$, then the cyclic shift operation should be performed. </li><li> If $$$s=2$$$, then the reversal operation should be performed. </li><li> If $$$s=3$$$, then the line will contain an additional integer $$$k$$$ ($$$1 \leq k \leq 10^6$$$), denoting the element appended to the back of the array. </li></ul><p>It is guaranteed that the sum of $$$q$$$ will not exceed $$$2\cdot 10^5$$$ over all test cases. Additionally, it is guaranteed that the first operation on each test case will be one with $$$s=3$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$q$$$ lines, outputting the <span class="tex-font-style-it">rizziness</span> of your array after each operation.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00618073451771244" id="id0006724775536196326" class="input-output-copier">Copy</div></div><pre id="id00618073451771244"><div class="test-example-line test-example-line-even test-example-line-0">1</div><div class="test-example-line test-example-line-odd test-example-line-1">13</div><div class="test-example-line test-example-line-odd test-example-line-1">3 1</div><div class="test-example-line test-example-line-odd test-example-line-1">3 2</div><div class="test-example-line test-example-line-odd test-example-line-1">3 3</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">3 4</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">3 5</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">3 6</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">3 7</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005389978134286073" id="id00538259808571267" class="input-output-copier">Copy</div></div><pre id="id005389978134286073">1
5
14
11
27
23
48
38
74
73
122
102
88
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first six states of the array: </p><ul> <li> $$$[1]$$$ </li><li> $$$[1, 2]$$$ </li><li> $$$[1, 2, 3]$$$ </li><li> $$$[3, 1, 2]$$$ </li><li> $$$[3, 1, 2, 4]$$$ </li><li> $$$[4, 2, 1, 3]$$$ </li></ul></div>