#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n;
bool visited[25][25];
vector<bool> input[25];
vector<int> answer;

vector<pair<int, int>> neighbors(pair<int, int> pos) {
    int dx[] = { -1, 1, 0, 0 };
    int dy[] = { 0, 0, -1, 1 };
    
    vector<pair<int, int>> v;
    for(int i=0; i<4; i++) {
        int x = pos.first + dx[i];
        int y = pos.second + dy[i];
        if(x >= 0 && x < n && y >= 0 && y < n) {
            v.push_back({x, y});
        }
    }
    
    return v;
}

int bfs(int x, int y) {
    int cnt = 0;
    
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    
    while(!q.empty()) {
        auto cur = q.front();
        q.pop();
        cnt++;
        
        for(auto nb : neighbors(cur)) {
            int r = nb.first;
            int c = nb.second;
            
            if(!visited[r][c] && input[r][c]) {
                q.push({r, c});
                visited[r][c] = true;
            }
        }
    }
    
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        for(int j=0; j<n; j++) {
            input[i].push_back(s[j] - '0');
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(input[i][j] && !visited[i][j]) {
                answer.push_back(bfs(i, j));
            }
        }
    }
    
    sort(answer.begin(), answer.end());
    cout << answer.size() << "\n";
    for(auto& e : answer) {
        cout << e << "\n";
    }
    
    return 0;
}