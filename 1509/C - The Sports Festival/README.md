<h2><a href="https://codeforces.com/contest/1509/problem/C" target="_blank" rel="noopener noreferrer">1509C — The Sports Festival</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1509C](https://codeforces.com/contest/1509/problem/C) |

## Topics
`dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. The Sports Festival</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The student council is preparing for the relay race at the sports festival.</p><p>The council consists of $$$n$$$ members. They will run one after the other in the race, the speed of member $$$i$$$ is $$$s_i$$$. The <span class="tex-font-style-it">discrepancy</span> $$$d_i$$$ of the $$$i$$$-th stage is the difference between the maximum and the minimum running speed among the first $$$i$$$ members who ran. Formally, if $$$a_i$$$ denotes the speed of the $$$i$$$-th member who participated in the race, then $$$d_i = \max(a_1, a_2, \dots, a_i) - \min(a_1, a_2, \dots, a_i)$$$.</p><p>You want to minimize the sum of the discrepancies $$$d_1 + d_2 + \dots + d_n$$$. To do this, you are allowed to change the order in which the members run. What is the minimum possible sum that can be achieved?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 2000$$$)  — the number of members of the student council.</p><p>The second line contains $$$n$$$ integers $$$s_1, s_2, \dots, s_n$$$ ($$$1 \le s_i \le 10^9$$$)  – the running speeds of the members.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer  — the minimum possible value of $$$d_1 + d_2 + \dots + d_n$$$ after choosing the order of the members.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005080195426394425" id="id006097793041815003" class="input-output-copier">Copy</div></div><pre id="id005080195426394425">3
3 1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0033153240825301666" id="id0024180653138583585" class="input-output-copier">Copy</div></div><pre id="id0033153240825301666">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049793220194000054" id="id00052714745056924306" class="input-output-copier">Copy</div></div><pre id="id0049793220194000054">1
5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006076223778650487" id="id0025368589734468927" class="input-output-copier">Copy</div></div><pre id="id006076223778650487">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007070977877285062" id="id0003069636398023723" class="input-output-copier">Copy</div></div><pre id="id007070977877285062">6
1 6 3 3 6 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022715638274967742" id="id009300534629700031" class="input-output-copier">Copy</div></div><pre id="id0022715638274967742">11
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006189385386958551" id="id007377209149068393" class="input-output-copier">Copy</div></div><pre id="id006189385386958551">6
104 943872923 6589 889921234 1000000000 69
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00841813299994619" id="id005511926691518205" class="input-output-copier">Copy</div></div><pre id="id00841813299994619">2833800505
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we may choose to make the third member run first, followed by the first member, and finally the second. Thus $$$a_1 = 2$$$, $$$a_2 = 3$$$, and $$$a_3 = 1$$$. We have:</p><ul> <li> $$$d_1 = \max(2) - \min(2) = 2 - 2 = 0$$$. </li><li> $$$d_2 = \max(2, 3) - \min(2, 3) = 3 - 2 = 1$$$. </li><li> $$$d_3 = \max(2, 3, 1) - \min(2, 3, 1) = 3 - 1 = 2$$$. </li></ul><p>The resulting sum is $$$d_1 + d_2 + d_3 = 0 + 1 + 2 = 3$$$. It can be shown that it is impossible to achieve a smaller value.</p><p>In the second test case, the only possible rearrangement gives $$$d_1 = 0$$$, so the minimum possible result is $$$0$$$.</p></div>