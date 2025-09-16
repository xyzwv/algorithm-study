#include <bits/stdc++.h>
using namespace std;

int N, M;

void solution(int cur, int len, string s) {
    if(len == M) {
        for(auto e : s) cout << e << ' ';
        cout << '\n';
        return;
    }

    for(int i=cur; i<=N; i++) {
        s.push_back(i + '0');
        solution(i, len+1, s);
        s.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    
    solution(1, 0, "");

    return 0;
}