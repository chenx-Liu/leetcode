# Container With Most Water

## Problem Description

You are given an array `height` of non-negative integers. At each index `i`, a vertical line extends from the horizontal axis to a height of `height[i]`.

Choose two lines to form the sides of a container, with the horizontal axis as its base. Return the largest amount of water that any such container can hold.

The shorter of the two lines determines the water level. The distance between their indices determines the width:

```text
water = min(height[left], height[right]) * (right - left)
```

The container must remain upright. Lines between the two selected boundaries do not affect its capacity.

## Examples

### Example 1

```text
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: Choose indices 1 and 8 (zero-based). Their heights are 8 and 7,
so the water level is 7 and the width is 8 - 1 = 7. The capacity is 7 * 7 = 49.
```

### Example 2

```text
Input: height = [1,1]
Output: 1
Explanation: The only pair forms a container with height 1 and width 1.
```
