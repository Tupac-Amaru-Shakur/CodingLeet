class Solution
{
    public:
        int minimumTotal(vector<vector < int>> &triangle)
        {
            int minSum = triangle[0][0];
            int m = triangle.size();
            int n = 0;
            int j = 0;
            int s1 = 0;
            for (int i = m - 2; i >= 0; i--)
            {
                for (int j = 0; j < triangle[i].size(); j++)
                {
                    triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
                }
            }

            return triangle[0][0];
        }
};