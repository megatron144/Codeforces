<h2><a href="https://codeforces.com/contest/1437/problem/C" target="_blank" rel="noopener noreferrer">1437C — Chef Monocarp</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1437C](https://codeforces.com/contest/1437/problem/C) |

## Topics
`dp` `flows` `graph matchings` `greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Chef Monocarp</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Chef Monocarp has just put $$$n$$$ dishes into an oven. He knows that the $$$i$$$-th dish has its optimal cooking time equal to $$$t_i$$$ minutes.</p><p>At any <span class="tex-font-style-bf">positive integer</span> minute $$$T$$$ Monocarp can put <span class="tex-font-style-bf">no more than one</span> dish out of the oven. If the $$$i$$$-th dish is put out at some minute $$$T$$$, then its unpleasant value is $$$|T - t_i|$$$ — the absolute difference between $$$T$$$ and $$$t_i$$$. Once the dish is out of the oven, it can't go back in.</p><p>Monocarp should put all the dishes out of the oven. What is the minimum total unpleasant value Monocarp can obtain?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$q$$$ ($$$1 \le q \le 200$$$) — the number of testcases.</p><p>Then $$$q$$$ testcases follow.</p><p>The first line of the testcase contains a single integer $$$n$$$ ($$$1 \le n \le 200$$$) — the number of dishes in the oven.</p><p>The second line of the testcase contains $$$n$$$ integers $$$t_1, t_2, \dots, t_n$$$ ($$$1 \le t_i \le n$$$) — the optimal cooking time for each dish.</p><p>The sum of $$$n$$$ over all $$$q$$$ testcases doesn't exceed $$$200$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer for each testcase — the minimum total unpleasant value Monocarp can obtain when he puts out all the dishes out of the oven. Remember that Monocarp can only put the dishes out at positive integer minutes and no more than one dish at any minute.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036755764776313327" id="id0037283655273564087" class="input-output-copier">Copy</div></div><pre id="id0036755764776313327">6
6
4 2 4 4 5 2
7
7 7 7 7 7 7 7
1
1
5
5 1 2 4 3
4
1 4 4 4
21
21 8 1 4 1 5 21 1 8 21 11 21 11 3 12 8 19 15 9 11 13
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009806704380822051" id="id009217943542156171" class="input-output-copier">Copy</div></div><pre id="id009806704380822051">4
12
0
0
2
21
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example Monocarp can put out the dishes at minutes $$$3, 1, 5, 4, 6, 2$$$. That way the total unpleasant value will be $$$|4 - 3| + |2 - 1| + |4 - 5| + |4 - 4| + |6 - 5| + |2 - 2| = 4$$$.</p><p>In the second example Monocarp can put out the dishes at minutes $$$4, 5, 6, 7, 8, 9, 10$$$.</p><p>In the third example Monocarp can put out the dish at minute $$$1$$$.</p><p>In the fourth example Monocarp can put out the dishes at minutes $$$5, 1, 2, 4, 3$$$.</p><p>In the fifth example Monocarp can put out the dishes at minutes $$$1, 3, 4, 5$$$.</p></div>