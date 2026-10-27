# String to Integer (atoi)

## Problem Description

Implement a function that converts a string to a 32-bit signed integer.

Read the string from left to right using these rules:

1. Ignore any leading spaces.
2. Read an optional '+' or '-' sign. The number is positive if there is no sign.
3. Read consecutive decimal digits and convert them to an integer. Stop at the first character that is not a digit. If no digits are read, return 0.
4. If the result is outside the 32-bit signed integer range, clamp it to the nearest boundary: `-2^31` for values that are too small, or `2^31 - 1` for values that are too large.

## Examples

### Example 1

```text
Input: s = "42"
Output: 42
```

### Example 2

```text
Input: s = " -042"
Output: -42
```

### Example 3

```text
Input: s = "1337c0d3"
Output: 1337
```

### Example 4

```text
Input: s = "0-1"
Output: 0
```

### Example 5

```text
Input: s = "words and 987"
Output: 0
```
