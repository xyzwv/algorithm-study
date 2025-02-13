#include <iostream>
using namespace std;

const int MAX = 5000;
int dp[5001];

int main()
{
    int n, weight;
    cin >> n;
    
    for(int i=0; i<=n; i++) dp[i] = MAX;
    
    for(int i=0; i*3<=n; i++){
        for(int j=0; j*5<=n; j++){
            weight = i*3 + j*5;
            if(weight > n) break;
            dp[weight] = min(dp[weight], i+j);
        }
    }
    
    if(dp[n] == MAX) cout << -1;
    else cout << dp[n];
    
    return 0;
}