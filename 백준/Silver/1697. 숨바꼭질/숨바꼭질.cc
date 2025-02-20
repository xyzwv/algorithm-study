#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100000;

vector<int> ways(int pos) {
    vector<int> v;
    int dx[] = { -1, 1, pos };
    
    for(int i=0; i<3; i++) {
        int x = pos + dx[i];
        if(x >= 0 && x <= MAX ) {
            v.push_back(x);
        }
    }
    
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k, ans;
    bool visited[MAX+1] = {};
    cin >> n >> k;
    
    queue<pair<int, int>> q;
    q.push({n, 0});
    visited[n] = true;
    
    while(!q.empty()) {
        int pos = q.front().first;
        int sec = q.front().second;
        q.pop();
        
        if(pos == k) {
            ans = sec;
            break;
        }
        
        visited[pos] = true;
        
        for(auto w : ways(pos)) {
            if(!visited[w]) {
                q.push({w, sec+1});
                visited[w] = true;
            }
        }
    }
    
    cout << ans;
    
    return 0;
}