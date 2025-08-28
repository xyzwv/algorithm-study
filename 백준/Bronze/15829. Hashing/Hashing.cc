#include <iostream>

using namespace std;

int main()
{
    int L;
    string s;
    cin >> L >> s;
    
    long long ans = 0, r = 1, m = 1234567891;
    
    for(int i=0; i<L; i++) {
        ans = (ans + (s[i] - 'a' + 1) * r) % m;
        r = r * 31 % m;
    }
    
    cout << ans;
    
    return 0;
}