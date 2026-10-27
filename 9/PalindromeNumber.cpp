class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and non-zero numbers ending in 0 cannot be palindromes.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;

        // Reverse only the second half of the digits to avoid integer overflow.
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // Odd-length numbers have one middle digit, which is ignored.
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
