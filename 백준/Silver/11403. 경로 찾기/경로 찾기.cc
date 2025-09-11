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

    queue<int> q;
    for(int i=0; i<N; i++) {
        vector<bool> visited(N, false);
        q.push(i);

        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            
            for(int next : graph[cur]) {
                if(visited[next]) continue;
                q.push(next);
                visited[next] = true;
            }
        }

        for(int j=0; j<N; j++) {
            cout << visited[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}