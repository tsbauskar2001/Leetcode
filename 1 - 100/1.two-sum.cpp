/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        map<int, int> position;

        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];

            if (position.find(complement) != position.end())
                return {position[complement], i};
            else
                position[nums[i]] = i;
        }

        return {-1, -1};
    }
};
// @lc code=end
