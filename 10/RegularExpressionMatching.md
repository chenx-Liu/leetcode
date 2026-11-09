# Regular Expression Matching

## Problem Description

Given a string `s` and a pattern `p`, determine whether `p` can match all of `s`. Return `true` when it can, and `false` otherwise.

The pattern supports lowercase letters and two special symbols:

- `.` can stand for exactly one character of any kind.
- `*` allows the letter or dot immediately before it to be used zero, one, or multiple times.

For example, `a*` can represent an empty string, `a`, `aa`, and so on. The pattern `.*` can represent any sequence of characters, including an empty string.

A match must consume the whole input, rather than just a portion of it.

## Examples

### Example 1

```text
Input: s = "aa", p = "a"
Output: false
Explanation: A single a cannot cover both characters in aa.
```

### Example 2

```text
Input: s = "aa", p = "a*"
Output: true
Explanation: Using the a twice matches the input.
```

### Example 3

```text
Input: s = "ab", p = ".*"
Output: true
Explanation: The repeated dot can match a followed by b.
```
