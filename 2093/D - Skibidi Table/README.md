<h2><a href="https://codeforces.com/contest/2093/problem/D" target="_blank" rel="noopener noreferrer">2093D — Skibidi Table</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2093D](https://codeforces.com/contest/2093/problem/D) |

## Topics
`bitmasks` `implementation`

---

## Problem Statement

<div class="header"><div class="title">D. Skibidi Table</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vadim loves filling square tables with integers. But today he came up with a way to do it for fun! Let's take, for example, a table of size $$$2 \times 2$$$, with rows numbered from top to bottom and columns numbered from left to right. We place $$$1$$$ in the top left cell, $$$2$$$ in the bottom right, $$$3$$$ in the bottom left, and $$$4$$$ in the top right. That's all he needs for fun!</p><p>Fortunately for Vadim, he has a table of size $$$2^n \times 2^n$$$. He plans to fill it with integers from $$$1$$$ to $$$2^{2n}$$$ in ascending order. To fill such a large table, Vadim will divide it into $$$4$$$ equal square tables, filling the top left one first, then the bottom right one, followed by the bottom left one, and finally the top right one. Each smaller table will be divided into even smaller ones as he fills them until he reaches tables of size $$$2 \times 2$$$, which he will fill in the order described above.</p><p>Now Vadim is eager to start filling the table, but he has $$$q$$$ questions of two types: </p><ul> <li> what number will be in the cell at the $$$x$$$-th row and $$$y$$$-th column; </li><li> in which cell coordinates will the number $$$d$$$ be located. </li></ul> Help answer Vadim's questions.</div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of several sets of input data. The first line contains a single integer $$$t$$$ $$$(1 \leq t \leq 10)$$$  — the number of sets of input data. The following lines describe the input data sets.</p><p>In the first line of each data set, there is an integer $$$n$$$, describing the size of the table $$$(1 \le n \le 30)$$$.</p><p>In the second line of each data set, there is an integer $$$q$$$  — the number of questions $$$(1 \le q \le 20\,000)$$$.</p><p>In the following $$$q$$$ lines of each data set, the questions are described in the following formats: </p><ul> <li> <span class="tex-font-style-tt">-> x y</span>  — What number will be in the cell $$$(1 \le x, y \le 2^n)$$$; </li><li> <span class="tex-font-style-tt"><- d</span>  — In which cell coordinates will the number $$$(1 \le d \le 2^{2n})$$$ be located. </li></ul><p>It is guaranteed that the sum of $$$q$$$ over all test cases does not exceed $$$20\,000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the answers to each question on a separate line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008916098450832886" id="id0016876219296603545" class="input-output-copier">Copy</div></div><pre id="id008916098450832886"><div class="test-example-line test-example-line-even test-example-line-0">2</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">-> 4 3</div><div class="test-example-line test-example-line-odd test-example-line-1"><- 15</div><div class="test-example-line test-example-line-odd test-example-line-1"><- 4</div><div class="test-example-line test-example-line-odd test-example-line-1">-> 3 1</div><div class="test-example-line test-example-line-odd test-example-line-1">-> 1 3</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-even test-example-line-2">8</div><div class="test-example-line test-example-line-even test-example-line-2">-> 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">-> 1 2</div><div class="test-example-line test-example-line-even test-example-line-2">-> 2 1</div><div class="test-example-line test-example-line-even test-example-line-2">-> 2 2</div><div class="test-example-line test-example-line-even test-example-line-2"><- 1</div><div class="test-example-line test-example-line-even test-example-line-2"><- 2</div><div class="test-example-line test-example-line-even test-example-line-2"><- 3</div><div class="test-example-line test-example-line-even test-example-line-2"><- 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007370138508335202" id="id0020122749319572064" class="input-output-copier">Copy</div></div><pre id="id007370138508335202">7
2 3
1 2
9
13
1
4
3
2
1 1
2 2
2 1
1 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>This is how the filled table from the first example looks:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/da748157aec3b2f6a243518e84d255f6a0b8b6c6.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>