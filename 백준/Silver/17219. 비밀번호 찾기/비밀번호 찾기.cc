#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    map<string, string> memo;
    while(N--) {
        string site, pw;
        cin >> site >> pw;
        memo.insert({site, pw});
    }

    while(M--) {
        string site;
        cin >> site;
        cout << memo[site] << "\n";
    }

    return 0;
}