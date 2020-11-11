#include <iostream>
#include <string>
#include <map>

class Solution {
public:
    int romanToInt(std::string s) {
        int result = 0;
        size_t stringSize = s.size();
        std::map<char, int> romanUnit = { {'M', 1000}, {'D', 500}, {'C', 100}
        ,  {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1} };

        for (int i = 0; i < stringSize; )
        {
            if (romanUnit[s[i]] < romanUnit[s[i + 1]])
            {
                result += romanUnit[s[i + 1]] - romanUnit[s[i]];
                i += 2;
            }
            else
            {
                result += romanUnit[s[i]];
                i++;
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;
    int a = sol.romanToInt("III");
}