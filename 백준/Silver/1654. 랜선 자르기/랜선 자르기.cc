#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> k >> n;

    vector<int> line(k);
    for(int i=0; i<k; i++) {
        cin >> line[i];
    }

    long long lo = 1;
    long long hi = *max_element(line.begin(), line.end());
    int ans = 0;
    while(lo <= hi) {
        long long mid = (lo + hi) / 2;

        int cnt = 0;
        for(int i=0; i<k; i++) {
            cnt += line[i] / mid;
        }
        
        if(cnt >= n) {
            ans = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }

    cout << ans;

    return 0;
}