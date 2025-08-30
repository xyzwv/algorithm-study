#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, ans = 0;
    cin >> n;

    if(n == 0) {
        cout << ans;
        return 0;
    }
    
    vector<int> opinion(n);
    for(int i=0; i<n; i++) {
        cin >> opinion[i];
    }
    
    sort(opinion.begin(), opinion.end());
    
    int up_trim = round(n * 0.15);
    int down_trim = n - up_trim;
    
    for(int i=up_trim; i<down_trim; i++) {
        ans += opinion[i];
    }
    
    ans = round((double)ans / (down_trim - up_trim));
    
    cout << ans;
    
    return 0;
}