#include <bits/stdc++.h>
using namespace std;

bool isMax(int* cnt, int p) {
    int max = 0;
    for(int i=9; i>0; i--) {
        if(cnt[i]) {
            max = i;
            break;
        }
    }
    return max == p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T, N, M;
    cin >> T;
    while(T--) {
        cin >> N >> M;
        int order = 0;
        int cnt[10] = {0};
        queue<pair<int, int>> q;
        for(int i=0; i<N; i++) {
            int p;
            cin >> p;
            cnt[p]++;
            q.push({p, i});
        }

        while(!q.empty()) {
            auto [p, i] = q.front();
            q.pop();
            if(isMax(cnt, p)) {
                cnt[p]--;
                order++;
                if(i == M) {
                    cout << order << "\n";
                    break;
                }
            }
            q.push({p, i});
        }
    }

    return 0;
}