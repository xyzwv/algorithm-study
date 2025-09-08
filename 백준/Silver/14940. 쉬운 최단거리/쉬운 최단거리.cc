#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    vector<vector<int>> dist(n, vector<int>(m, -1));

    int sx = 0, sy = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 2) {
                sx = i;
                sy = j;
            }
            if(grid[i][j] == 0) {
                dist[i][j] = 0;
            }
        }
    }

    
    queue<pair<int, int>> q;

    q.push({sx, sy});
    dist[sx][sy] = 0;

    const int dx[] = {-1, 1, 0, 0};
    const int dy[] = {0, 0, -1, 1};

    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(grid[nx][ny] != 1) continue;
            if(dist[nx][ny] != -1) continue;
            
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}