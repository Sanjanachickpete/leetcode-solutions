# LeetCode Solutions

**Name:** Sanjana

**Roll Number:** [Enter your roll number]

Personal LeetCode practice log — part of B25GE0101 portfolio

## Table of Contents

- [Arrays & Strings](arrays-strings/)
- [Basic Algorithms](basic-algorithms/)
- [Stacks](stacks/)
- [Linked Lists](linked-lists/)
- [Progress Tracker](PROGRESS.md)
- [Screenshot Guide](SCREENSHOTS.md)

## Problems

### Mandatory

1. [Two Sum](arrays-strings/01-two-sum.md) — Arrays
2. [Reverse String](arrays-strings/02-reverse-string.md) — Strings
3. [Valid Anagram](arrays-strings/03-valid-anagram.md) — Strings
4. [Best Time to Buy and Sell Stock](arrays-strings/04-best-time-to-buy-and-sell-stock.md) — Arrays
5. [Longest Common Prefix](arrays-strings/05-longest-common-prefix.md) — Strings
6. [Binary Search](basic-algorithms/06-binary-search.md) — Basic Algorithms
7. [Move Zeroes](arrays-strings/07-move-zeroes.md) — Arrays
8. [Valid Parentheses](stacks/08-valid-parentheses.md) — Stacks

### Bonus

9. [Reverse Linked List](linked-lists/09-reverse-linked-list.md) — Linked Lists

## Language

- C

## Purpose

This repository records beginner-friendly LeetCode practice, C implementations, and local test programs as part of the B25GE0101 portfolio. Local test results do not mean a solution has been submitted to or accepted by LeetCode.

## Local Testing

The `.c` files include the LeetCode function and a separate local `main()` with test cases. With GCC and PowerShell, compile one file and run it using a temporary executable:

```powershell
New-Item -ItemType Directory -Force "$env:TEMP\leetcode-solutions-tests"
gcc -std=c99 -Wall -Wextra -pedantic arrays-strings\01-two-sum.c -o "$env:TEMP\leetcode-solutions-tests\two-sum.exe"
& "$env:TEMP\leetcode-solutions-tests\two-sum.exe"
```

