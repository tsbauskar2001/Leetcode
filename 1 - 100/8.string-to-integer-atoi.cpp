/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {
        int ans = 0, sign = 1;
        int i = 0, n = s.length();

        while (i < n && s[i] == ' ')
            i++;

        if (i < n && (s[i] == '+' || s[i] == '-'))
        {
            sign = (s[i] == '+') ? 1 : -1;
            i++;
        }

        while (i < n && (s[i] >= '0' && s[i] <= '9'))
        {
            int unit = s[i] - '0';

            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && unit > INT_MAX % 10))
                return (sign == 1) ? INT_MAX : INT_MIN;

            ans = (ans * 10) + unit;
            i++;
        }

        return sign * ans;
    }
};
// @lc code=end
