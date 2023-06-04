/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        int ans = 0;
        int l = 0, r = 0;

        map<char, int> count;

        while (r < n)
        {
            char x = s[r];
            count[x]++;

            while (count[x] > 1)
            {
                char y = s[l];
                count[y]--;

                l++;
            }

            ans = max(ans, r - l + 1);
            r++;
        }

        return ans;
    }
};
// @lc code=end
