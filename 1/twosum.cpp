#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(const std::vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;

        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            const int complement = target - nums[i];
            const auto it = seen.find(complement);

            if (it != seen.end()) {
                return {it->second, i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};
