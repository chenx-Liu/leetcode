#include <algorithm>
#include <vector>

class Solution {
public:
    int maxArea(const std::vector<int>& height) {
        int left = 0;
        int right = static_cast<int>(height.size()) - 1;
        int maxWater = 0;

        while (left < right) {
            // The shorter line limits the water level.
            const int waterHeight = std::min(height[left], height[right]);
            const int width = right - left;
            maxWater = std::max(maxWater, waterHeight * width);

            // Move the shorter boundary inward to look for a taller line.
            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return maxWater;
    }
};
