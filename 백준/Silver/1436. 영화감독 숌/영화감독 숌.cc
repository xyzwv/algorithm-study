#include <iostream>
using namespace std;

int main()
{
    int n;
    int cnt = 0, ans = 665;
    
    cin >> n;
    
    while(cnt != n){
        ans++;
        int temp = ans;
        while(temp >= 666){
            if(temp % 1000 == 666) {
                cnt++;
                break;
            } else {
                temp /= 10;
            }
        }
    }
    
    cout << ans;
    return 0;
}