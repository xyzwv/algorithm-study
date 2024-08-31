#include <iostream>
using namespace std;

int getGcd(int a, int b) {
    int r = a % b;
    if(r == 0) return b;
    return getGcd(b, r);
}

int main() {
    int a, b;
    cin >> a >> b;
    if(a < b) swap(a, b);

    int gcd = getGcd(a, b);
    int lcm = a*b/gcd;

    cout << gcd << "\n" << lcm;
}