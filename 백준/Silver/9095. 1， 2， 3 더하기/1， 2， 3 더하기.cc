#include <iostream>
using namespace std;

int ans;

void backtracking(int x) {
    if(x == 0) {
        ans++;
        return;
    }
    for(int i=1; i<4; i++) {
        if(x < i) continue;
        backtracking(x-i);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        
        ans=0;
        for(int i=1; i<4; i++) {
            backtracking(n-i);
        }
        
        cout << ans << "\n";
    }

    return 0;
}