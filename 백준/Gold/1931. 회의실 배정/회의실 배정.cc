#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int>> v;
    for(int i=0; i<N; i++) {
        int s, e;
        cin >> s >> e;
        v.push_back({e, s});
    }
    
    sort(v.begin(), v.end());

    int end = v[0].first;
    int cnt = 1;
    for(int i=1; i<N; i++) {
        if(end > v[i].second) continue;
        end = v[i].first;
        cnt++;
    }

    cout << cnt;
    return 0;
}