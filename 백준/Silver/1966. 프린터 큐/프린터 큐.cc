#include <bits/stdc++.h>
using namespace std;

int getMax(int* priority) {
    for(int i=9; i>0; i--) {
        if(priority[i] > 0) return i;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T;
    cin >> T;
    
    while(T--) {
        int N, M;
        cin >> N >> M;

        int ans = 0;
        int priority[10] = {0};
        queue<pair<int, int>> q;
        for(int i=0; i<N; i++) {
            int num;
            cin >> num;
            q.push({num, i});
            priority[num]++;
        }

        while(!q.empty()) {
            auto [p, o] = q.front();
            q.pop();  
            
            if(p == getMax(priority)) {
                priority[p]--;
                ans++;
                if(o == M) {
                    cout << ans << "\n";
                }
            } else {
                q.push({p, o});
            }

        }
    }
    
    return 0;
}