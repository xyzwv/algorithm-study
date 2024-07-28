#include <iostream>
using namespace std;
int main()
{
    int n, res=1;
    cin >> n;
    for(int i=n; i>1; i--) res *= i;
    cout << res;

    return 0;
}