<h2><a href="https://codeforces.com/contest/1986/problem/A" target="_blank" rel="noopener noreferrer">1986A — X Axis</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1986A](https://codeforces.com/contest/1986/problem/A) |

## Topics
`brute force` `geometry` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. X Axis</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three points with integer coordinates $$$x_1$$$, $$$x_2$$$, and $$$x_3$$$ on the $$$X$$$ axis ($$$1 \leq x_i \leq 10$$$). You can choose any point with an integer coordinate $$$a$$$ on the $$$X$$$ axis. Note that the point $$$a$$$ may coincide with $$$x_1$$$, $$$x_2$$$, or $$$x_3$$$. Let $$$f(a)$$$ be the total distance from the given points to the point $$$a$$$. Find the smallest value of $$$f(a)$$$.</p><p>The distance between points $$$a$$$ and $$$b$$$ is equal to $$$|a - b|$$$. For example, the distance between points $$$a = 5$$$ and $$$b = 2$$$ is $$$3$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^3$$$) — the number of test cases. Then follows their descriptions.</p><p>The single line of each test case contains three integers $$$x_1$$$, $$$x_2$$$, and $$$x_3$$$ ($$$1 \leq x_i \leq 10$$$) — the coordinates of the points.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the smallest value of $$$f(a)$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009721505705574695" id="id0008582689893188045" class="input-output-copier">Copy</div></div><pre id="id009721505705574695"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">1 5 9</div><div class="test-example-line test-example-line-odd test-example-line-3">8 2 8</div><div class="test-example-line test-example-line-even test-example-line-4">10 9 3</div><div class="test-example-line test-example-line-odd test-example-line-5">2 1 1</div><div class="test-example-line test-example-line-even test-example-line-6">2 4 1</div><div class="test-example-line test-example-line-odd test-example-line-7">7 3 5</div><div class="test-example-line test-example-line-even test-example-line-8">1 9 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001387383995162852" id="id001232874599316095" class="input-output-copier">Copy</div></div><pre id="id001387383995162852">0
8
6
7
1
3
4
8
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the smallest value of $$$f(a)$$$ is achieved when $$$a = 1$$$: $$$f(1) = |1 - 1| + |1 - 1| + |1 - 1| = 0$$$.</p><p>In the second test case, the smallest value of $$$f(a)$$$ is achieved when $$$a = 5$$$: $$$f(5) = |1 - 5| + |5 - 5| + |9 - 5| = 8$$$.</p><p>In the third test case, the smallest value of $$$f(a)$$$ is achieved when $$$a = 8$$$: $$$f(8) = |8 - 8| + |2 - 8| + |8 - 8| = 6$$$.</p><p>In the fourth test case, the smallest value of $$$f(a)$$$ is achieved when $$$a = 9$$$: $$$f(10) = |10 - 9| + |9 - 9| + |3 - 9| = 7$$$.</p></div>