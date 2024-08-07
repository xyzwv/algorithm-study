#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    int s[100005] = {0};
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        s[i] += s[i-1] + x;
    }
    
    int i, j;
    while(m--){
        cin >> i >> j;
        cout << s[j] - s[i-1] << "\n";
    }

    return 0;
}