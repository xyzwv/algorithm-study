#include <bits/stdc++.h>
using namespace std;

void dfs(int cur, vector<vector<int>>& graph, vector<bool>& visited) {
    if(visited[cur]) return;

    visited[cur] = true;
    for(int next : graph[cur]) dfs(next, graph, visited);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> graph(N+1);

    while(M--) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int cnt = 0;
    vector<bool> visited(N+1, false);
    for(int i=1; i<=N; i++) {
        if(visited[i]) continue;

        dfs(i, graph, visited);
        cnt++;
    }
    
    cout << cnt;
    return 0;
}