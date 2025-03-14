#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int x, ans=0;
    cin >> x;
    for(int i=0; i<=6; i++) {
        if(x & (1 << i)) ans++;
    }
    cout << ans;
    
    return 0;
}