#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    map<string, int> m1;
    map<int, string> m2;
    string s;
    for(int i=1; i<=N; i++) {
        cin >> s;
        m1.insert({s, i});
        m2.insert({i, s});
    }

    while(M--) {
        cin >> s;
        if(s[0] > '0' && s[0] <= '9') {
            int num = stoi(s);
            cout << m2[num] << "\n";
        } else cout << m1[s] << "\n";
    }

    return 0;
}