#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 1, b = 2, c;
    
    cin >> n;
    
    if(n == 1) cout << a;
    else if(n == 2) cout << b;
    else {
        for(int i=3; i<=n; i++){
            c = (a + b) % 10007;
            a = b;
            b = c;
        }
        cout << c;
    }
    
    return 0;
}