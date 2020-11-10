#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::vector<std::string> roman = { "M", "CM", "D", "CD", "C", "XC",
        "L", "XL", "X", "IX", "V", "IV", "I" };

    int unitNumber[13] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5,4, 1 };
    int digit = 0;

    std::string intToRoman(int num) {
        std::string result;

        while (num > 0)
        {
            int unit = num / unitNumber[digit];
            for (int i = 0; i < unit; i++)
            {
                result += roman[digit];
                num -= unitNumber[digit];
            }
            ++digit;
        }
        return result;
    }

};

int main()
{
    Solution sol;
    std::string test = sol.intToRoman(123);
}