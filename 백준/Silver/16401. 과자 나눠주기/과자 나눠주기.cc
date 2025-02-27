#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int m, n;
vector<int> snack;

int binarySearch() {
    int start = 1;
    int end = snack[n-1];
    int ans = 0;
    
    while(start <= end) {
        int mid = (start+end)/2;
        int cnt = 0;
        for(int i=0; i<n; i++) {
            cnt += snack[i] / mid;
        }
        
        if(cnt >= m) {
            ans = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> m >> n;
    
    snack.resize(n);
    for(int i=0; i<n; i++) cin >> snack[i];
    
    sort(snack.begin(), snack.end());
    
    cout << binarySearch();
    
    return 0;
}