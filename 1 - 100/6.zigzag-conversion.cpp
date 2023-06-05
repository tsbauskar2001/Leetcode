/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int rows)
    {
        if (rows == 1)
            return s;

        int n = s.length();
        int blocks = ceil((double)n / (2 * rows - 2));
        int cols = blocks * (rows - 1);

        vector<vector<char>> grid(rows, vector<char>(cols, '#'));

        int r = 0, c = 0;
        int dr = 1, dc = 0;

        for (char x : s)
        {
            grid[r][c] = x;

            if (r == 0)
            {
                dr = 1;
                dc = 0;
            }

            if (r == rows - 1)
            {
                dr = -1;
                dc = 1;
            }

            r += dr;
            c += dc;
        }

        string ans = "";

        for (int r = 0; r < rows; r++)
        {
            for (int c = 0; c < cols; c++)
            {
                if (grid[r][c] != '#')
                    ans.push_back(grid[r][c]);
            }
        }

        return ans;
    }
};
// @lc code=end
