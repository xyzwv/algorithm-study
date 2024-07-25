#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a < b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    int r = b;
    int gcd;
    int lcm = a*b;
    
    while(a % b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    
    gcd = r;
    lcm /= r;
    
    cout << gcd << endl << lcm;
    
    return 0;
}