#include <bits/stdc++.h>
using namespace std;

struct Room {
    int x, y, broken;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<string> grid(N);

    for(int i=0; i<N; i++) {
        cin >> grid[i];
    }

    vector<vector<vector<int>>> dist(N, vector<vector<int>>(M, vector<int>(2, -1)));
    queue<Room> q;

    q.push({0, 0, 0});
    dist[0][0][0] = 1;

    const int dx[] = {-1, 1, 0, 0};
    const int dy[] = {0, 0, -1, 1};

    while(!q.empty()) {
        auto [x, y, broken] = q.front();
        q.pop();

        int d = dist[x][y][broken];

        if(x == N-1 && y == M-1) {
            cout << d;
            return 0;
        }

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(grid[nx][ny] == '0') {
                if(dist[nx][ny][broken] == -1) {
                    dist[nx][ny][broken] = d + 1;
                    q.push({nx, ny, broken});
                }
            } else {
                if(broken == 0 && dist[nx][ny][1] == -1) {
                    dist[nx][ny][1] = d + 1;
                    q.push({nx, ny, 1});
                }
            }
        }
    }
    
    cout << -1;
    
    return 0;
}