#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n, m;
    cin >> t;
    
    while(t--) {
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int i=n-1, j=m-1, ans=0;
        while(i>=0 && j>=0) {
            if(a[i] > b[j]) {
                ans += j+1;
                i--;
            } else {
                j--;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}