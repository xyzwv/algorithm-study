#include <iostream>

using namespace std;

int factorial(int num) {
    int mul = 1;
    for(int i=1; i<=num; i++) mul *= i;
    return mul;
}

int main()
{
    int N, K;

    cin >> N >> K;

    if(K == 0 || N == K) cout << 1;
    else cout << factorial(N) / (factorial(K) * factorial(N-K));

    return 0;
}