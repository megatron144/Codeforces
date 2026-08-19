<h2><a href="https://codeforces.com/contest/2091/problem/E" target="_blank" rel="noopener noreferrer">2091E — Interesting Ratio</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2091E](https://codeforces.com/contest/2091/problem/E) |

## Topics
`brute force` `math` `number theory` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">E. Interesting Ratio</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Recently, Misha at the IT Campus "NEIMARK" camp learned a new topic — the Euclidean algorithm.</p><p>He was somewhat surprised when he realized that $$$a \cdot b = lcm(a, b) \cdot gcd(a, b)$$$, where $$$gcd(a, b)$$$ — is <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">the greatest common divisor (GCD)</a> of the numbers $$$a$$$ and $$$b$$$ and $$$lcm(a, b)$$$ — is <a href="https://en.wikipedia.org/wiki/Least_common_multiple">the least common multiple (LCM)</a>. Misha thought that since the product of LCM and GCD exists, it might be interesting to consider their quotient: $$$F(a,b)=\frac{lcm(a, b)}{gcd(a, b)}$$$.</p><p>For example, he took $$$a = 2$$$ and $$$b = 4$$$, computed $$$F(2, 4) = \frac{4}{2} = 2$$$ and obtained a prime number (a number is prime if it has exactly two divisors)! Now he considers $$$F(a, b)$$$ to be an interesting ratio if $$$a  \lt  b$$$ and $$$F(a, b)$$$ is a prime number.</p><p>Since Misha has just started studying number theory, he needs your help to calculate — how many different pairs of numbers $$$a$$$ and $$$b$$$ are there such that $$$F(a, b)$$$ is an interesting ratio and $$$1 \leq a  \lt  b \leq n$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \leq t \leq 10^3$$$). The description of the test cases follows.</p><p>A single line of each test case contains a single integer $$$n$$$ ($$$2 \leq n \leq 10^7$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^7$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the number of interesting ratios $$$F(a, b)$$$ for pairs satisfying $$$1 \leq a  \lt  b \leq n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0030086724240423324" id="id0033710448272867866" class="input-output-copier">Copy</div></div><pre id="id0030086724240423324"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-even test-example-line-2">10</div><div class="test-example-line test-example-line-odd test-example-line-3">34</div><div class="test-example-line test-example-line-even test-example-line-4">10007</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0033397895263636845" id="id002963749923229202" class="input-output-copier">Copy</div></div><pre id="id0033397895263636845">4
11
49
24317
</pre></div></div></div>