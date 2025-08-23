#include <iostream>

using namespace std;

int main()
{
    int sum = 0, idx, mul, ans;
    string s;
    cin >> s;
    
    for(int i=0; i<s.size()-1; i++) {
        if(s[i] == '*') {
            idx = i;
            continue;
        }
        (i%2 == 0) ? mul = 1 : mul = 3;
        sum += (s[i] - '0') * mul;
    }
    sum += s[s.size()-1] - '0';

    (idx%2 == 0) ? mul = 1 : mul = 3;
    
    for(ans=0; ans<10; ans++) {
        int res = sum + ans*mul;
        if(res % 10 == 0) break;
    }

    cout << ans;
    
    return 0;
}