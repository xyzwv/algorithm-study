#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> pi;

int m, n;
vector<vector<bool>> graph;
vector<vector<bool>> visited;

vector<pi> neighbors(pi pos) {
    int dx[] = { -1, 0, 0, 1 };
    int dy[] = { 0, -1, 1, 0 };
    
    vector<pi> res;
    for(int i=0; i<4; i++) {
        int x = pos.first + dx[i];
        int y = pos.second + dy[i];
        
        if(x >= 0 && x < m && y >= 0 && y < n) res.push_back({x, y});
    }
    
    return res;
}

void bfs(int x, int y) {
    queue<pi> q;
    
    q.push({x, y});
    visited[x][y] = true;
    
    while(!q.empty()) {
        pi cur = q.front();
        q.pop();
        
        for(auto next : neighbors(cur)) {
            int a = next.first;
            int b = next.second;
            if(graph[a][b] && !visited[a][b]) {
                q.push({a, b});
                visited[a][b] = true;
            }
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int k, x, y;
        cin >> m >> n >> k;
        
        graph.assign(m, vector<bool>(n, false));
        visited.assign(m, vector<bool>(n, false));
        
        while(k--) {
            cin >> x >> y;
            graph[x][y] = true;
        }
        
        int ans = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(graph[i][j] && !visited[i][j]) {
                    bfs(i, j);
                    ans++;
                }
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}