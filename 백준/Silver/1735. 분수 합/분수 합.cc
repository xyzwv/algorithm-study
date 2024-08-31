#include <iostream>
using namespace std;

int getGcd(int a, int b) {
    int r = a % b;
    if(r == 0) return b;
    return getGcd(b, r);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(b < d) {
        swap(b, d);
        swap(a, c);
    }

    int lcm_bd = b*d/getGcd(b, d);

    int mul_a = lcm_bd / b;
    int mul_c = lcm_bd / d;
    int top = a * mul_a + c * mul_c;

    int res_gcd = getGcd(lcm_bd, top);

    cout << top/res_gcd << " " << lcm_bd/res_gcd;
}