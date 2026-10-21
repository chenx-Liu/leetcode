#include <algorithm>
#include <string>

class Solution {
public:
    std::string longestPalindrome(const std::string& s) {
        if (s.empty()) {
            return "";
        }

        int start = 0;
        int longest = 1;
        const int n = static_cast<int>(s.size());

        for (int center = 0; center < n; ++center) {
            const int oddLength = expandAroundCenter(s, center, center);
            const int evenLength = expandAroundCenter(s, center, center + 1);
            const int length = std::max(oddLength, evenLength);

            if (length > longest) {
                start = center - (length - 1) / 2;
                longest = length;
            }
        }

        return s.substr(start, longest);
    }

private:
    int expandAroundCenter(const std::string& s, int left, int right) {
        const int n = static_cast<int>(s.size());

        while (left >= 0 && right < n && s[left] == s[right]) {
            --left;
            ++right;
        }

        // Both pointers have moved one position beyond the palindrome.
        return right - left - 1;
    }
};
