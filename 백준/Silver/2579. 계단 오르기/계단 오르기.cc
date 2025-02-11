#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> step(n+1, 0);
    vector<vector<int>> dp(n+1, vector<int> (2, 0));
    
    for(int i=1; i<=n; i++){
        cin >> step[i];
    }
    
    dp[1][0] = step[1];
    for(int i=2; i<=n; i++){
        dp[i][0] = max(dp[i-2][0], dp[i-2][1]) + step[i];
        dp[i][1] = dp[i-1][0] + step[i];
    }
    
    cout << max(dp[n][0], dp[n][1]);

    return 0;
}