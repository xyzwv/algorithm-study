#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<char>> arr;

vector<int> moves(int pos) {
    vector<int> res;
    int x = pos / M;
    int y = pos % M;

    int dx[] = {-1, 0, 0, 1};
    int dy[] = {0, -1, 1, 0};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < N && ny >= 0 && ny < M && arr[nx][ny] == '1') {
            res.push_back(nx * M + ny);
        }
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0;
    cin >> N >> M;

    arr.assign(N, vector<char>(M));
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> arr[i][j];
        }
        cin.ignore();
    }

    queue<pair<int, int>> q;
    vector<bool> visited(N * M);

    int dest = N * M - 1;
    q.push({0, 1});
    while(!q.empty()) {
        int pos = q.front().first;
        int cnt = q.front().second;
        q.pop();
        visited[pos] = true;

        if(pos == dest) {
            ans = cnt;
            break;
        }

        for(int next : moves(pos)) {
            if(visited[next]) continue;
            q.push({next, cnt + 1});
            visited[next] = true;
        }
    }

    cout << ans;
    return 0;
}