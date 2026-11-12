# Integer to Roman

## Problem Description

Convert a positive integer `num` into its standard Roman numeral representation and return the resulting string.

Roman numerals use seven basic symbols:

| Symbol | Value |
| --- | --- |
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

Process the decimal places from largest to smallest. Most values are formed by adding symbols, but these pairs represent subtraction:

- `IV` = 4 and `IX` = 9.
- `XL` = 40 and `XC` = 90.
- `CD` = 400 and `CM` = 900.

The symbols `I`, `X`, `C`, and `M` may appear consecutively up to three times. The symbols `V`, `L`, and `D` are never repeated.

## Examples

### Example 1

```text
Input: num = 3749
Output: "MMMDCCXLIX"
Explanation: 3000 = MMM, 700 = DCC, 40 = XL, and 9 = IX.
```

### Example 2

```text
Input: num = 58
Output: "LVIII"
Explanation: 50 = L and 8 = VIII.
```

### Example 3

```text
Input: num = 1994
Output: "MCMXCIV"
Explanation: 1000 = M, 900 = CM, 90 = XC, and 4 = IV.
```
