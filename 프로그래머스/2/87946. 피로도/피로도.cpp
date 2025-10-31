#include <bits/stdc++.h>

using namespace std;

int ans;

void dfs(int cnt, vector<vector<int>> dungeons, vector<bool> visited, int k) {
    ans = max(ans, cnt);
    
    for(int i=0; i<visited.size(); i++) {
        if(visited[i]) continue;
        if(k < dungeons[i][0]) continue;
        
        visited[i] = true;
        dfs(cnt + 1, dungeons, visited, k - dungeons[i][1]);
        visited[i] = false;
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    vector<bool> visited(dungeons.size());
    dfs(0, dungeons, visited, k);
    return ans;
}