<h2><a href="https://codeforces.com/contest/1514/problem/D" target="_blank" rel="noopener noreferrer">1514D — Cut and Stick</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1514D](https://codeforces.com/contest/1514/problem/D) |

## Topics
`binary search` `data structures` `greedy` `implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. Cut and Stick</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Baby Ehab has a piece of Cut and Stick with an array $$$a$$$ of length $$$n$$$ written on it. He plans to grab a pair of scissors and do the following to it:</p><ul> <li> pick a range $$$(l, r)$$$ and cut out every element $$$a_l$$$, $$$a_{l + 1}$$$, ..., $$$a_r$$$ in this range; </li><li> stick some of the elements together in the same order they were in the array; </li><li> end up with multiple pieces, where every piece contains some of the elements and every element belongs to some piece. </li></ul><p>More formally, he partitions the sequence $$$a_l$$$, $$$a_{l + 1}$$$, ..., $$$a_r$$$ into subsequences. He thinks a partitioning is beautiful if for every piece (subsequence) it holds that, if it has length $$$x$$$, then no value occurs strictly more than $$$\lceil \frac{x}{2} \rceil$$$ times in it.</p><p>He didn't pick a range yet, so he's wondering: for $$$q$$$ ranges $$$(l, r)$$$, what is the minimum number of pieces he needs to partition the elements $$$a_l$$$, $$$a_{l + 1}$$$, ..., $$$a_r$$$ into so that the partitioning is beautiful.</p><p>A sequence $$$b$$$ is a subsequence of an array $$$a$$$ if $$$b$$$ can be obtained from $$$a$$$ by deleting some (possibly zero) elements. Note that it does <span class="tex-font-style-bf">not</span> have to be contiguous.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$q$$$ ($$$1 \le n,q \le 3 \cdot 10^5$$$) — the length of the array $$$a$$$ and the number of queries.</p><p>The second line contains $$$n$$$ integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_{n}$$$ ($$$1 \le a_i \le n$$$) — the elements of the array $$$a$$$.</p><p>Each of the next $$$q$$$ lines contains two integers $$$l$$$ and $$$r$$$ ($$$1 \le l \le r \le n$$$) — the range of this query.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, print the minimum number of subsequences you need to partition this range into so that the partitioning is beautiful. We can prove such partitioning always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0045246794215671515" id="id009482237926917599" class="input-output-copier">Copy</div></div><pre id="id0045246794215671515">6 2
1 3 2 3 3 2
1 6
2 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021049983976423114" id="id009597462177352402" class="input-output-copier">Copy</div></div><pre id="id0021049983976423114">1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first query, you can just put the whole array in one subsequence, since its length is $$$6$$$, and no value occurs more than $$$3$$$ times in it.</p><p>In the second query, the elements of the query range are $$$[3,2,3,3]$$$. You can't put them all in one subsequence, since its length is $$$4$$$, and $$$3$$$ occurs more than $$$2$$$ times. However, you can partition it into two subsequences: $$$[3]$$$ and $$$[2,3,3]$$$.</p></div>