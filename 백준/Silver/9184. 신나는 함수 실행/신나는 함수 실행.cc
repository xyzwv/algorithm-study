#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int dp[21][21][21] = {0};
    
    // dp 채워놓기
    for(int i=0; i<=20; i++) {
        for(int j=0; j<=20; j++) {
            for(int k=0; k<=20; k++) {
                if(i == 0 || j == 0 || k == 0) {
                    dp[i][j][k] = 1;
                }
            }
        }
    }

    for(int i=1; i<=20; i++) {
        for(int j=1; j<=20; j++) {
            for(int k=1; k<=20; k++) {
                if(i < j && j < k) {
                    dp[i][j][k] = dp[i][j][k-1] + dp[i][j-1][k-1] - dp[i][j-1][k];
                }
                else {
                    dp[i][j][k] = dp[i-1][j][k] + dp[i-1][j-1][k] + dp[i-1][j][k-1] - dp[i-1][j-1][k-1];
                }
            }
        }
    }
    
    int a, b, c;
    while(cin >> a >> b >> c) {
        if(a == -1 && b == -1 && c == -1) break;

        cout << "w(" << a << ", " << b << ", " << c << ") = ";
        if(a <= 0 || b <= 0 || c <= 0) {
            cout << 1;
        }
        else if(a > 20 || b > 20 || c > 20) {
            cout << dp[20][20][20];
        } else {
            cout << dp[a][b][c];
        }
        cout << '\n';
    }

    return 0;
}