<h2><a href="https://codeforces.com/contest/1571/problem/E" target="_blank" rel="noopener noreferrer">1571E — Fix the String</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | Kotlin 2.2 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1571E](https://codeforces.com/contest/1571/problem/E) |

## Topics
`*special` `bitmasks` `dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">E. Fix the String</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A regular bracket sequence is a bracket sequence that can be transformed into a correct arithmetic expression by inserting characters "<span class="tex-font-style-tt">1</span>" and "<span class="tex-font-style-tt">+</span>" between the original characters of the sequence. For example:</p><ul> <li> bracket sequences "<span class="tex-font-style-tt">()()</span>" and "<span class="tex-font-style-tt">(())</span>" are regular (the resulting expressions are: "<span class="tex-font-style-tt">(1)+(1)</span>" and "<span class="tex-font-style-tt">((1+1)+1)</span>"); </li><li> bracket sequences "<span class="tex-font-style-tt">)(</span>", "<span class="tex-font-style-tt">(</span>" and "<span class="tex-font-style-tt">)</span>" are not. </li></ul><p>You are given two strings $$$s$$$ and $$$a$$$, the string $$$s$$$ has length $$$n$$$, the string $$$a$$$ has length $$$n - 3$$$. The string $$$s$$$ is a bracket sequence (i. e. each element of this string is either an opening bracket character or a closing bracket character). The string $$$a$$$ is a binary string (i. e. each element of this string is either <span class="tex-font-style-tt">1</span> or <span class="tex-font-style-tt">0</span>).</p><p>The string $$$a$$$ imposes some constraints on the string $$$s$$$: for every $$$i$$$ such that $$$a_i$$$ is <span class="tex-font-style-tt">1</span>, the string $$$s_i s_{i+1} s_{i+2} s_{i+3}$$$ should be a regular bracket sequence. Characters of $$$a$$$ equal to <span class="tex-font-style-tt">0</span> don't impose any constraints.</p><p>Initially, the string $$$s$$$ may or may not meet these constraints. You can perform the following operation any number of times: replace some character of $$$s$$$ with its inverse (i. e. you can replace an opening bracket with a closing bracket, or vice versa).</p><p>Determine if it is possible to change some characters in $$$s$$$ so that it meets all of the constraints, and if it is possible, calculate the minimum number of characters to be changed.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Each test case consists of three lines. The first line contains one integer $$$n$$$ ($$$4 \le n \le 2 \cdot 10^5$$$). The second line contains the string $$$s$$$, consisting of exactly $$$n$$$ characters; each character of $$$s$$$ is either '<span class="tex-font-style-tt">(</span>' or '<span class="tex-font-style-tt">)</span>'. The third line contains the string $$$a$$$, consisting of exactly $$$n - 3$$$ characters; each character of $$$a$$$ is either '<span class="tex-font-style-tt">1</span>' or '<span class="tex-font-style-tt">0</span>'.</p><p>Additional constraint on the input: the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer: the minimum number of characters that need to be changed in $$$s$$$, or $$$-1$$$ if it is impossible.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002809840126260058" id="id00898139597980145" class="input-output-copier">Copy</div></div><pre id="id002809840126260058">6
4
))((
1
4
))((
0
4
()()
0
6
))(()(
101
6
))(()(
001
5
(((((
11
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008179422746907937" id="id009345650877564354" class="input-output-copier">Copy</div></div><pre id="id008179422746907937">2
0
0
4
1
-1
</pre></div></div></div>