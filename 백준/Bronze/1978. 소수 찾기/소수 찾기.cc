#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[1001] = {1, 1, };
    for(int i=2; i*i<1001; i++){
        if(arr[i]) continue;
        for(int j=i*i; j<=1000; j+=i){
            arr[j] = 1;
        }
    }
    
    int n, x, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(arr[x] == 0) cnt++;
    }
    
    cout << cnt;
	
    return 0;
}