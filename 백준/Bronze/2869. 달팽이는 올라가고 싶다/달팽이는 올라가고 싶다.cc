#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int ans = 0;
    int A, B, V;
    cin >> A >> B >> V;
    
    ans = ceil(double(V-A)/(A-B)) + 1;
    
    cout << ans;
    
    return 0;
}