#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    map<string, int> m;
    vector<string> v(N+1);
    string s;
    for(int i=1; i<=N; i++) {
        cin >> s;
        m.insert({s, i});
        v[i] = s;
    }

    while(M--) {
        cin >> s;
        if(s[0] > '0' && s[0] <= '9') {
            int num = stoi(s);
            cout << v[num] << "\n";
        } else cout << m[s] << "\n";
    }

    return 0;
}