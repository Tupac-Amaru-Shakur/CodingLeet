#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     std::ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     return 0;
// }

class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> visit(m, vector<int>(n, 0));
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));

        queue<pair<int, int>> q;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)
                {
                    q.push({i, j});
                    visit[i][j] = 1;
                    dist[i][j] = 0;
                }
            }
        }

        int arry[] = {-1, 0, 1, 0};
        int arrx[] = {0, 1, 0, -1};

        int x, y, newx, newy;
        while (!q.empty())
        {
            x = q.front().first;
            y = q.front().second;

            q.pop();

            for (int i = 0; i < 4; i++)
            {
                newx = x + arry[i];
                newy = y + arrx[i];

                if (newx >= 0 && newx < m && newy >= 0 && newy < n && visit[newx][newy] == 0)
                {
                    visit[newx][newy] = 1;
                    dist[newx][newy] = dist[x][y] + 1;
                    q.push({newx, newy});
                }
            }
        }
        return dist;
    }
};