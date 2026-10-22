# Zigzag Conversion

## Problem Description

Given a string `s` and an integer `numRows`, arrange the characters in a zigzag pattern across `numRows` rows. Move downward through the rows, then diagonally upward, and repeat until all characters have been placed.

Read the rows from top to bottom, joining their characters from left to right, and return the resulting string. Do not include any spaces used to display the pattern.

## Examples

### Example 1

```text
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Explanation: The zigzag arrangement is:

P   A   H   N
A P L S I I G
Y   I   R
```

### Example 2

```text
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation: The zigzag arrangement is:

P     I     N
A   L S   I G
Y A   H R
P     I
```

### Example 3

```text
Input: s = "A", numRows = 1
Output: "A"
```
