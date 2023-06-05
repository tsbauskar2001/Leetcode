/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution
{
    vector<vector<string>> roman = {
        {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
        {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
        {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
        {"", "M", "MM", "MMM"}};

public:
    string
    intToRoman(int num)
    {
        string ans = "";
        int i = 0;

        while (num)
        {
            int unit = num % 10;
            ans = roman[i][unit] + ans;

            num /= 10;
            i++;
        }

        return ans;
    }
};
// @lc code=end
