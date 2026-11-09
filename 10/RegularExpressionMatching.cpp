#include <string>
#include <vector>

class Solution {
public:
    bool isMatch(const std::string& s, const std::string& p) {
        const int m = static_cast<int>(s.size());
        const int n = static_cast<int>(p.size());

        // dp[i][j] means the first i characters of s match the first j of p.
        std::vector<std::vector<bool>> dp(m + 1, std::vector<bool>(n + 1, false));
        dp[0][0] = true;

        // Patterns such as a* or a*b* can match an empty string.
        for (int j = 2; j <= n; ++j) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];
            }
        }

        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (p[j - 1] == '*' && j >= 2) {
                    // Use zero occurrences of the preceding element.
                    dp[i][j] = dp[i][j - 2];

                    // Or consume one character and keep the same pattern.
                    if (p[j - 2] == '.' || p[j - 2] == s[i - 1]) {
                        dp[i][j] = dp[i][j] || dp[i - 1][j];
                    }
                } else if (p[j - 1] == '.' || p[j - 1] == s[i - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                }
            }
        }

        return dp[m][n];
    }
};
