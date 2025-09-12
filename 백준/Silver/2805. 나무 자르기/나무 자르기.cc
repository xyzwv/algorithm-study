#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N;
    long long M;
    cin >> N >> M;

    vector<int> v(N);
    int low = 0, high = 0;
    for(int i=0; i<N; i++) {
        cin >> v[i];
        high = max(v[i], high);
    }

    int ans = 0;
    while(low <= high) {
        int height = (low + high) / 2;
        
        long long sum = 0;
        for(int i=0; i<N; i++) {
            if(v[i] <= height) continue;
            sum += v[i] - height;
        }

        if(sum >= M) {
            ans = height;
            low = height + 1;
        } else {
            high = height - 1;
        }
    }
    
    cout << ans;
    return 0;
}