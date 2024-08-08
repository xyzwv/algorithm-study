#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i : v) cin >> i;
    int k;
    cin >> k;

    long long ans = 0;
    int r=0, sum=0;
    for(int l=0; l<n; l++){
        while(r<n && sum <= k){
            sum += v[r++];
        }
        if(sum > k) ans += n-r+1;
        sum -= v[l];
    }
    cout << ans;
}