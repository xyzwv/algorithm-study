#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> M >> N;
    vector<vector<int>> box(N, vector<int>(M));

    int left = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> box[i][j];
            if(box[i][j] == 0) left++;
        }
    }

    int ans = 0;
    vector<vector<int>> dist(N, vector<int>(M, -1));
    queue<pair<int, int>> q;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(box[i][j] == 1) {
                q.push({i, j});
                dist[i][j] = 0;
            }
        }
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(box[nx][ny] != 0) continue;
            if(dist[nx][ny] != -1) continue;

            
            box[nx][ny] = 1;
            left--;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});

            ans = max(ans, dist[nx][ny]);
        }
    }

    if(left != 0) ans = -1;

    cout << ans;
    return 0;
}