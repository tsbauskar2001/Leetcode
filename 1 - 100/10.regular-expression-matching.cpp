/*
 * @lc app=leetcode id=10 lang=cpp
 *
 * [10] Regular Expression Matching
 */

// @lc code=start
class Solution
{
    vector<vector<int>> dp;

public:
    bool isMatch(string s, string p)
    {
        int n = s.length();
        int m = p.length();

        dp.assign(n + 1, vector<int>(m + 1, -1));

        return check(s, p, 0, 0, n, m);
    }

    bool check(string s, string p, int i, int j, int n, int m)
    {
        if (dp[i][j] != -1)
            return dp[i][j];

        if (j == m)
            return dp[i][j] = (i == n);

        bool match = (i < n && (s[i] == p[j] || p[j] == '.'));

        if (j + 1 < m && p[j + 1] == '*')
        {
            return dp[i][j] = (check(s, p, i, j + 2, n, m) ||
                               match && check(s, p, i + 1, j, n, m));
        }

        if (match)
            return dp[i][j] = check(s, p, i + 1, j + 1, n, m);

        return dp[i][j] = false;
    }
};
// @lc code=end
