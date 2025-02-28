#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, x, sum = 0;
    cin >> n >> x;
    
    vector<int> visitors(n, 0);
    for(int i=0; i<x; i++) {
        cin >> visitors[i];
        sum += visitors[i];
    }
    
    int max = sum;
    int ans = 1;

    for(int i=x; i<n; i++) {
        cin >> visitors[i];
        sum += visitors[i] - visitors[i-x];
        if(max < sum) {
            max = sum;
            ans = 1;
        } else if(max == sum) {
            ans++;
        }
    }
    
    if(!max) cout << "SAD";
    else cout << max << "\n" << ans;
    
    return 0;
}