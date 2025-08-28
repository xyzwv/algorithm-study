#include <iostream>

using namespace std;

int main()
{
    int dp[15][15] = {0};
    
    for(int j=1; j<15; j++) dp[0][j] = j;
    for(int i=1; i<15; i++) {
        dp[i][1] = 1;
        for(int j=1; j<15; j++) {
            dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }
    }
    
    int T;
    cin >> T;
    
    while(T--) {
        int k, n;
        cin >> k >> n;
        cout << dp[k][n] << "\n";
    }
    
    return 0;
}