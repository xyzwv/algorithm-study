#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> pi;

int main()
{
    int n, t, p;
    vector<pi> v;
    vector<int> dp;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t >> p;
        v.push_back({t, p});
    }
    
    dp.assign(n+1, 0);
    for(int i=0; i<n; i++){
        for(int j=i+v[i].first; j<=n; j++){
            if(dp[j] < dp[i] + v[i].second){
                dp[j] = dp[i] + v[i].second;
            }
        }
    }
    
    cout << dp[n];
    
    return 0;
}