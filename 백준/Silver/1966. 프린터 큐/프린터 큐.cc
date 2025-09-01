#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pi;

int getMax(int* cnt) {
    for(int i=9; i>0; i--) {
        if(cnt[i]) return i;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        queue<pi> q;
        int cnt[10] = {0};
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            q.push({x, i});
            cnt[x]++;
        }

        int turn = 0;
        while(!q.empty()) {
            pi curr = q.front();
            q.pop();
            if(curr.first == getMax(cnt)) {
                cnt[curr.first]--;
                turn++;
                if(curr.second == m) {
                    cout << turn << "\n";
                    break;
                }
            } else {
                q.push(curr);
            }
        }
    }
    
    return 0;
}