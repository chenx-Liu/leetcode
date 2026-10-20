# Median of Two Sorted Arrays

## Problem Description

Given two arrays, `nums1` and `nums2`, sorted in non-decreasing order, return the median of all their elements combined.

For an odd number of elements, the median is the middle element in sorted order. For an even number of elements, it is the average of the two middle elements.

Either array may be empty, but they cannot both be empty.

Your algorithm must run in `O(log(m + n))` time, where `m` and `n` are the lengths of the two arrays.

## Examples

### Example 1

```text
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: The combined sorted array is [1,2,3], so the median is 2.
```

### Example 2

```text
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: The combined sorted array is [1,2,3,4], so the median is (2 + 3) / 2 = 2.5.
```
