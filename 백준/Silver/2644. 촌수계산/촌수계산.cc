#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, m, a, b, x, y;
    int ans = -1;
    bool graph[101][101] = {};
    bool visited[101] = {};
    queue<pair<int, int>> q;
    
    cin >> n >> a >> b >> m;
    
    while(m--) {
        cin >> x >> y;
        graph[x][y] = graph[y][x] = true;
    }
    
    q.push({a, 0});
    visited[a] = true;
    
    while(!q.empty()) {
        int p = q.front().first;
        int d = q.front().second;
        q.pop();
        
        if(p == b) {
            ans = d;
            break;
        }
        
        for(int i=1; i<=n; i++) {
            if(graph[p][i] && !visited[i]) {
                visited[i] = true;
                q.push({i, d+1});
            }
        }
    }
    
    cout << ans;
    return 0;
}