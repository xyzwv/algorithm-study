#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, ans;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    vector<int> dp(n, 1);
    if(n == 1) cout << 1;
    else {
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(v[i] > v[j]) {
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
        }
        cout << *max_element(dp.begin(), dp.end());
    }
    return 0;
}