#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int average = 0, median = 0, mode = 0, range = 0;
    int sum = 0, max = 0;

    vector<int> cnt(N);
    for(int i=0; i<N; i++) {
        sum += v[i];

        if(i == N/2) median = v[i];

        if(v[max] < v[i]) {
            max = i;
            cnt[max]++;
        }
        else if(v[max] == v[i]) {
            cnt[max]++;
        }
    }

    int m = N-1, p = 0;
    for(int i=N-1; i>=0; i--) {
        if(cnt[m] < cnt[i]) {
            m = i;
            p = 0;
        }
        else if(cnt[m] == cnt[i]) {
            p = m;
            m = i;
        }
    }

    mode = (p == 0) ? v[m] : v[p];
    range = v[N-1] - v[0];
    average = round((double)sum / N);

    cout << average << "\n" << median << "\n" << mode << "\n" << range;
    
    return 0;
}