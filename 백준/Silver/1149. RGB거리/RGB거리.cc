#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    int cost[3];
    vector<vector<int>> dp(N, vector<int>(3));
    for(int j=0; j<3; j++) cin >> dp[0][j];
    for(int i=1; i<N; i++) {
        for(int j=0; j<3; j++) cin >> cost[j];

        for(int j=0; j<3; j++) {
            int a = (j+1) % 3, b = (j+2) % 3;
            dp[i][j] = min(dp[i-1][a], dp[i-1][b]) + cost[j];
        }
    }

    cout << min(min(dp[N-1][0], dp[N-1][1]), dp[N-1][2]);

    return 0;
}