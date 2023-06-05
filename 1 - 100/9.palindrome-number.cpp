/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        return (long long)x == reverse((long long)x);
    }

    long long reverse(long long x)
    {
        long long ans = 0LL;

        while (x)
        {
            int unit = x % 10;
            ans = ans * 10 + unit;

            x /= 10;
        }

        return ans;
    }
};
// @lc code=end
