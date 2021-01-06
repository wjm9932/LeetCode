#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(), nums.end());
        size_t vectorSize = nums.size();
        int closestValue = 0;
        bool flag = true;

        for (int i = 0; i < vectorSize; i++)
        {
            int left = 0;
            int right = vectorSize - 1;
            while (left < right && left != i && right != i)
            {
                if (left == i)
                {
                    left++;
                }
                else if (right == i)
                {
                    right--;
                }

                if (flag == true)
                {
                    flag = false;
                    closestValue = nums[i] + nums[left] + nums[right];
                    if (closestValue < target)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
                else
                {
                    int temp = nums[i] + nums[left] + nums[right];
                    if (std::abs(temp - target) < std::abs(closestValue - target))
                    {
                        closestValue = temp;
                    }
                    if (temp < target)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
            }
        }
        return closestValue;
    }
};

int main()
{
    Solution sol;
    vector<int> num = { 0,1,2 };
    int target = 0;
    int a = sol.threeSumClosest(num, target);


}