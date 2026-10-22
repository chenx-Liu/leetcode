#include <string>
#include <vector>

class Solution {
public:
    std::string convert(const std::string& s, int numRows) {
        if (numRows <= 1 || numRows >= static_cast<int>(s.size())) {
            return s;
        }

        std::vector<std::string> rows(numRows);
        int currentRow = 0;
        int direction = 1;

        for (char ch : s) {
            rows[currentRow].push_back(ch);

            // Reverse direction at the first and last rows.
            if (currentRow == 0) {
                direction = 1;
            } else if (currentRow == numRows - 1) {
                direction = -1;
            }

            currentRow += direction;
        }

        std::string result;
        result.reserve(s.size());

        for (const std::string& row : rows) {
            result += row;
        }

        return result;
    }
};
