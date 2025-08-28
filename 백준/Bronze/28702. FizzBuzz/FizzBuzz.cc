#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num = 0;
    string ans;
    string s[3];
    for(int i=0; i<3; i++) cin >> s[i];
    
    for(int i=0; i<3; i++) {
        if(s[i][0] != 'F' && s[i][0] != 'B') {
            num = stoi(s[i]) + 3 - i;
        }
    }
    
    if(num % 15 == 0) ans = "FizzBuzz";
    else if(num % 3 == 0) ans = "Fizz";
    else if(num % 5 == 0) ans = "Buzz";
    else ans = to_string(num);
    
    cout << ans;
    
    return 0;
}