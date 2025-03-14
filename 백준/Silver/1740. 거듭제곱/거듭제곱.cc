#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    long long n, ans=0;
    cin >> n;
    
    long long power=1;
    while(n) {
        if(n & 1) ans += power;
        power *= 3;
        n >>= 1;
    }
    
    cout << ans;
    return 0;
}