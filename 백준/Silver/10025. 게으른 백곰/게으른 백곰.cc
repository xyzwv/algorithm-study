#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    int g, x;
    while(n--){
        cin >> g >> x;
        arr[x] = g;
    }

    int res = 0, sum = 0;
    for(int i=0; i<=1000000; i++){
        if(i > 2*k) sum -= arr[i-2*k-1];
        sum += arr[i];
        res = max(res, sum);
    }

    cout << res;
    
    return 0;
}