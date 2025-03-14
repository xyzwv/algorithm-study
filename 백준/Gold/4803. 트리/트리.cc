#include <iostream>
#include <vector>
using namespace std;

void printResult(int cnt, int t) {
    cout << "Case " << t << ": ";
    switch(cnt) {
        case 0: cout << "No trees."; break;
        case 1: cout << "There is one tree."; break;
        default: cout << "A forest of " << cnt << " trees."; break;
    }
    cout << "\n";
    return;
}

void dfs(bool& cycle, int cur, int prev, vector<vector<int>>& graph, vector<bool>& visited) {
    if(visited[cur]) {
        cycle = true;
        return;
    }
    
    visited[cur] = true;
    for(int next : graph[cur]) {
        if(next == prev) continue;
        dfs(cycle, next, cur, graph, visited);
    }
    
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m, a, b, t=0;
    while(++t) {
        cin >> n >> m;
        if(!n && !m) break;
        
        vector<vector<int>> graph(n+1);
        for(int i=0; i<m; i++) {
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        
        int cnt = 0;
        vector<bool> visited(n+1, false);
        
        for(int i=1; i<=n; i++) {
            if(visited[i]) continue;
            
            bool cycle = false;
            dfs(cycle, i, 0, graph, visited);
            
            if(!cycle) cnt++;
        }
        
        printResult(cnt, t);
    }
    
    return 0;
}