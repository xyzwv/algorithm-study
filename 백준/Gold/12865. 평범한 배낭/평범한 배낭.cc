#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, K, W, V;
    cin >> N >> K;
    vector<pair<int, int>> item(N);
    for(int i=0; i<N; i++) {
        cin >> W >> V;
        item[i] = {W, V};
    }

    // dp[n]: 용량이 n인 배낭의 최대 가치합
    vector<int> dp(K+1, 0);
    // 무게가 w인 물건을 넣었을 때 v의 가치가 추가됨, 남은 용량은 n - w
    // dp[n] = dp[n - w] +  v
    for(int i=0; i<N; i++) {
        int w = item[i].first, v = item[i].second;
        for(int c = K; c >= w; c--) {
            dp[c] = max(dp[c], dp[c - w] + v);
        }
    }

    cout << dp[K];

    return 0;
}