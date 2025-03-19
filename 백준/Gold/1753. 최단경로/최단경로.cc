#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> pi;
const int INF = 2e5;

vector<int> dijkstra(int start, int v, vector<vector<pi>>& graph) {
    vector<int> dist(v+1, INF);
    
    priority_queue<pi, vector<pi>, greater<>> pq;
    
    dist[start] = 0;
    pq.push({0, start});
    while(!pq.empty()) {
        int weight = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        
        if(weight > dist[node]) continue;
        
        for(int i=0; i<graph[node].size(); i++) {
            int next_node = graph[node][i].first;
            int next_weight = weight + graph[node][i].second;
            if(next_weight < dist[next_node]) {
                dist[next_node] = next_weight;
                pq.push({next_weight, next_node});
            }
        }
    }
    
    return dist;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int v, e, k;
    cin >> v >> e >> k;
    
    vector<vector<pi>> graph(v+1, vector<pi>(0));
    for(int i=0; i<e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    
    vector<int> dist = dijkstra(k, v, graph);
    
    for(int i=1; i<=v; i++) {
        if(dist[i] == INF) cout << "INF";
        else cout << dist[i];
        cout << "\n";
    }
    
    return 0;
}