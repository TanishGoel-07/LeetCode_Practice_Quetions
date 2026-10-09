class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n = grid.size(), m = grid[0].size();

        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(n, vector<int>(m, -1));

        q.push({{0, 0}, health - grid[0][0]});
        vis[0][0] = health - grid[0][0];

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            int r = curr.first.first;
            int c = curr.first.second;
            int h = curr.second;

            if (r == n - 1 && c == m - 1 && h >= 1)
                return true;

            for (int k = 0; k < 4; k++) {
                int nr = r + delrow[k];
                int nc = c + delcol[k];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                    int nh = h - grid[nr][nc];

                    if (nh >= 1 && nh > vis[nr][nc]) {
                        vis[nr][nc] = nh;
                        q.push({{nr, nc}, nh});
                    }
                }
            }
        }

        return false;
    }
};