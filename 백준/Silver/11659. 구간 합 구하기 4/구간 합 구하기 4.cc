#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, x, i, j;
    cin >> n >> m;
    
    vector<int> sum(n+1, 0);
    for(int i=1; i<=n; i++) {
        cin >> sum[i];
        sum[i] += sum[i-1];
    }
    
    while(m--) {
        cin >> i >> j;
        cout << sum[j] - sum[i-1] << "\n";
    }
    
    return 0;
}