#include <climits>
#include <string>

class Solution {
public:
    int myAtoi(const std::string& s) {
        std::size_t index = 0;

        // Skip leading spaces.
        while (index < s.size() && s[index] == ' ') {
            ++index;
        }

        // Read an optional sign.
        int sign = 1;
        if (index < s.size() && (s[index] == '+' || s[index] == '-')) {
            if (s[index] == '-') {
                sign = -1;
            }
            ++index;
        }

        int result = 0;

        // Convert consecutive digits, checking for overflow before each update.
        while (index < s.size() && s[index] >= '0' && s[index] <= '9') {
            const int digit = s[index] - '0';

            if (result > INT_MAX / 10 ||
                (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            ++index;
        }

        return sign * result;
    }
};
