#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    vector<vector<int>> graph(N);
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            int x;
            cin >> x;
            if(x) graph[i].push_back(j);
        }
    }

    vector<vector<int>> ans(N, vector<int>(N, 0));
    queue<int> q;
    for(int i=0; i<N; i++) {
        vector<int> visited(N, false);
        q.push(i);

        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            visited[cur] = true;
                
            for(int j : graph[cur]) {
                ans[i][j] = 1;
                if(visited[j]) continue;
                q.push(j);
                visited[j] = true;
            }
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}