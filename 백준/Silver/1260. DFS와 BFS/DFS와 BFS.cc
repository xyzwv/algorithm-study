#include <iostream>
#include <queue>
using namespace std;

int n;
bool graph[1001][1001];
bool visited[1001];

void DFS(int start) {
    cout << start << " ";
    visited[start] = true;
    for(int i=1; i<=n; i++) {
        if(graph[start][i] && !visited[i]) {
            DFS(i);
        }
    }
    return;
}

void BFS(int start) {
    visited[start] = true;
    
    queue<int> q;
    q.push(start);
    
    while(!q.empty()){
        int cur = q.front();
        cout << cur << " ";
        q.pop();
        
        for(int i=1; i<=n; i++) {
            if(graph[cur][i] && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    
    return;
}

int main()
{
    int m, v, a, b;
    cin >> n >> m >> v;
    
    while(m--) {
        cin >> a >> b;
        graph[a][b] = graph[b][a] = true;
    }
    
    DFS(v);
    cout << "\n";
    
    for(int i=1; i<=n; i++) visited[i] = false;
    BFS(v);

    return 0;
}