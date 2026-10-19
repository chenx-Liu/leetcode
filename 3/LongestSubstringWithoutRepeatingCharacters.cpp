#include <algorithm>
#include <array>
#include <string>

class Solution {
public:
    int lengthOfLongestSubstring(const std::string& s) {
        std::array<int, 256> lastSeen;
        lastSeen.fill(-1);

        int left = 0;
        int longest = 0;

        for (int right = 0; right < static_cast<int>(s.size()); ++right) {
            const unsigned char ch = static_cast<unsigned char>(s[right]);
            left = std::max(left, lastSeen[ch] + 1);
            longest = std::max(longest, right - left + 1);
            lastSeen[ch] = right;
        }

        return longest;
    }
};
