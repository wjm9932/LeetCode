#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        size_t arraySize = nums.size();
        std::sort(nums.begin(), nums.end());
        if (nums[0] >= 0)
        {
            return result;
        }
        else if (nums[arraySize - 1] <= 0)
        {
            return result;
        }
        else if (arraySize < 3)
        {
            return result;
        }
        else 
        {
            for (int i = 0; i < arraySize; i++)
            {
                int left = 0;
                int right = arraySize - 1;

                while (left < right)
                {
                    if (&nums[i] == &nums[left])
                    {
                        ++left;
                    }
                    else if (&nums[i] == &nums[right])
                    {
                        --right;
                    }
                    else
                    {
                        if (nums[i] + nums[left] + nums[right] == 0)
                        {
                            std::vector<int> temp = { nums[i], nums[left], nums[right] };
                            result.push_back(temp);
                            break;
                        }
                        else
                        {
                            if (nums[i] + nums[left] + nums[right] > 0)
                            {
                                --right;
                            }
                            else
                            {
                                ++left;
                            }
                        }
                    }
                }
            }
            return result;
        }
        
    }
};


int main()
{
    Solution sol;
    std::vector<int> test = { -1,0,1,2,-1,-4 };
    std::vector<std::vector<int>> result;

    result = sol.threeSum(test);
}