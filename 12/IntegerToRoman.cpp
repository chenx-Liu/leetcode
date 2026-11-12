#include <string>

class Solution {
public:
    std::string intToRoman(int num) {
        // Include subtractive pairs and process values from largest to smallest.
        const int values[] = {
            1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
        };
        const std::string symbols[] = {
            "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
        };

        std::string result;

        for (int i = 0; i < 13 && num > 0; ++i) {
            // Use the current symbol as many times as the remaining value allows.
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }

        return result;
    }
};
