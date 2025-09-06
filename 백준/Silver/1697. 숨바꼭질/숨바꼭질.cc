#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;

vector<int> moves(int pos) {
    int dx[] = {-1, 1, pos};
    vector<int> res;
    for(int i=0; i<3; i++) {
        int x = dx[i] + pos;
        if(x >= 0 && x <= MAX) res.push_back(x);
    } 
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, ans = 0;
    cin >> N >> K;

    queue<pair<int, int>> q;
    q.push({N, 0});

    vector<bool> visited(MAX + 1, false);

    while(!q.empty()) {
        int pos = q.front().first;
        int sec = q.front().second;
        q.pop();
        visited[N] = true;

        if(pos == K) {
            ans = sec;
            break;
        }

        for(int next : moves(pos)) {
            if(visited[next]) continue;
            q.push({next, sec + 1});
            visited[next] = true;
        }
    }

    cout << ans;
    return 0;
}