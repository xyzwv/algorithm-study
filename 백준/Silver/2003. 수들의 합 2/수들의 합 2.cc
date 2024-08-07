#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> s(n+1, 0);
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        s[i] += s[i-1] + x;
    }
    
    int c=0;
    for(int j=0; j<=n; j++){
        for(int i=0; i<=j; i++){
            if(s[j] == s[i] + m) c++;
        }
    }
    cout << c;

    return 0;
}