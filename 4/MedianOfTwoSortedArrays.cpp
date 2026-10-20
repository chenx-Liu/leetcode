#include <algorithm>
#include <limits>
#include <stdexcept>
#include <vector>

class Solution {
public:
    double findMedianSortedArrays(const std::vector<int>& nums1,
                                  const std::vector<int>& nums2) {
        // Always binary-search the shorter array.
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        const int m = static_cast<int>(nums1.size());
        const int n = static_cast<int>(nums2.size());

        if (m + n == 0) {
            throw std::invalid_argument("At least one array must be non-empty.");
        }

        const int leftSize = (m + n + 1) / 2;
        int low = 0;
        int high = m;

        while (low <= high) {
            const int cut1 = low + (high - low) / 2;
            const int cut2 = leftSize - cut1;

            // Sentinel values handle partitions at the ends of an array.
            const int left1 = cut1 == 0 ? std::numeric_limits<int>::lowest()
                                       : nums1[cut1 - 1];
            const int right1 = cut1 == m ? std::numeric_limits<int>::max()
                                        : nums1[cut1];
            const int left2 = cut2 == 0 ? std::numeric_limits<int>::lowest()
                                       : nums2[cut2 - 1];
            const int right2 = cut2 == n ? std::numeric_limits<int>::max()
                                        : nums2[cut2];

            if (left1 <= right2 && left2 <= right1) {
                if ((m + n) % 2 != 0) {
                    return std::max(left1, left2);
                }

                // Convert before addition to avoid integer overflow.
                return (static_cast<double>(std::max(left1, left2))
                        + std::min(right1, right2)) / 2.0;
            }

            if (left1 > right2) {
                high = cut1 - 1;
            } else {
                low = cut1 + 1;
            }
        }

        throw std::invalid_argument("No valid partition found.");
    }
};
