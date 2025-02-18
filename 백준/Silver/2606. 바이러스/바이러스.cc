#include <iostream>
using namespace std;

int n;
int ans;
bool graph[101][101];
bool visited[101];

void DFS(int start) {
    visited[start] = true;
    ans++;
    for(int i=1; i<=n; i++) {
        if(graph[start][i] && !visited[i]) {
            DFS(i);
        }
    }
    return;
}

int main()
{
    int m, a, b;
    cin >> n >> m;
    
    while(m--) {
        cin >> a >> b;
        graph[a][b] = graph[b][a] = true;
    }
    
    DFS(1);
    
    cout << ans-1;
    
    return 0;
}