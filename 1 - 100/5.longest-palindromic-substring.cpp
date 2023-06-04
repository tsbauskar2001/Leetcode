/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.length();
        int l = 0, r = 0;

        for (int i = 0; i < n; i++)
        {
            int ol = palindromeLength(s, i, i);
            int el = palindromeLength(s, i, i + 1);
            int len = max(ol, el);

            if (len > r - l + 1)
            {
                l = i - (len - 1) / 2;
                r = i + (len / 2);
            }
        }

        return s.substr(l, r - l + 1);
    }

    int palindromeLength(string s, int l, int r)
    {
        while (l >= 0 && r < s.length() && s[l] == s[r])
        {
            l--;
            r++;
        }

        return r - l - 1;
    }
};
// @lc code=end
