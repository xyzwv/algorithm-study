#include <iostream>
#include <queue>
using namespace std;

int makePos(int x, int y, int m) {
    return x + y * m;
}

vector<int> way(int pos, int l) {
    int x = pos % l;
    int y = pos / l;
    
    vector<int> v;
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, 2, 1, 1, 2, -2, -1};
    for(int i=0; i<8; i++) {
        int xx = x+dx[i];
        int yy = y+dy[i];
        if(xx >= 0 && xx < l && yy >= 0 && yy < l) {
            v.push_back(makePos(xx, yy, l));
        }
    }
    
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, l, cur_x, cur_y, goal_x, goal_y;
    cin >> t;
    
    while(t--) {
        cin >> l >> cur_x >> cur_y >> goal_x >> goal_y;
        
        int ans = 0;
        int cur = makePos(cur_x, cur_y, l);
        int goal = makePos(goal_x, goal_y, l);
        vector<bool> visited(l*l);
        
        queue<pair<int, int>> q;
        q.push({cur, 0});
        visited[cur] = true;
    
        while(!q.empty()) {
            int pos = q.front().first;
            int depth = q.front().second;
            q.pop();
            
            if(pos == goal) {
                ans = depth;
                break;
            }
            
            for(int w : way(pos, l)) {
                if(!visited[w]) {
                    q.push({w, depth+1});
                    visited[w] = true;
                }
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}