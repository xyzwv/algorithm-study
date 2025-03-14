#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, s, b, ans=1000000000;
    cin >> n;
    
    vector<pair<int, int>> ing;
    for(int i=0; i<n; i++) {
        cin >> s >> b;
        ing.push_back({s, b});
    }
    
    for(int i=1; i<(1<<n); i++) {
        int ss=1, bb=0;
        for(int k=0; k<n; k++) {
            if(i & (1<<k)) {
                ss *= ing[k].first;
                bb += ing[k].second;
            }
        }
        ans = min(ans, abs(ss-bb));
    }
    
    cout << ans;
    return 0;
}