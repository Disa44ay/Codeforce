<h2><a href="https://codeforces.com/contest/1976/problem/A" target="_blank" rel="noopener noreferrer">1976A — Verify Password</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1976A](https://codeforces.com/contest/1976/problem/A) |

## Topics
`implementation` `sortings` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Verify Password</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Monocarp is working on his new site, and the current challenge is to make the users pick strong passwords.</p><p>Monocarp decided that strong passwords should satisfy the following conditions: </p><ul> <li> password should consist only of lowercase Latin letters and digits; </li><li> there should be no digit that comes after a letter (so, after each letter, there is either another letter or the string ends); </li><li> all digits should be sorted in the non-decreasing order; </li><li> all letters should be sorted in the non-decreasing order. </li></ul><p>Note that it's allowed for the password to have only letters or only digits.</p><p>Monocarp managed to implement the first condition, but he struggles with the remaining ones. Can you help him to verify the passwords?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of testcases.</p><p>The first line of each testcase contains a single integer $$$n$$$ ($$$1 \le n \le 20$$$) — the length of the password.</p><p>The second line contains a string, consisting of exactly $$$n$$$ characters. Each character is either a lowercase Latin letter or a digit.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print "<span class="tex-font-style-tt">YES</span>" if the given password is strong and "<span class="tex-font-style-tt">NO</span>" otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008419321699196403" id="id007394549846699943" class="input-output-copier">Copy</div></div><pre id="id0008419321699196403"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">12ac</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">123wa</div><div class="test-example-line test-example-line-odd test-example-line-3">9</div><div class="test-example-line test-example-line-odd test-example-line-3">allllmost</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">ac123</div><div class="test-example-line test-example-line-odd test-example-line-5">6</div><div class="test-example-line test-example-line-odd test-example-line-5">011679</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007674859269643102" id="id00028051723560204023" class="input-output-copier">Copy</div></div><pre id="id007674859269643102">YES
NO
YES
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the second testcase, the letters are not sorted in the non-decreasing order.</p><p>In the fourth testcase, there is a digit that comes after a letter — digit '1' after a letter 'c'.</p></div>