#include <bits/stdc++.h>

using namespace std;

int N, M;

void solution(int cur, int len, string s) {
    s += cur + '0';

    if(len == 1) {
        for(char c : s) cout << c << " ";
        cout << "\n"; 
        return;
    }
    
    for(int i = 1; cur + i <= N; i++) {
        solution(cur + i, len - 1, s);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //int N, M;
    cin >> N >> M;

    string s = "";
    for(int i = 1; i <= N - M + 1; i++) {
        solution(i, M, s);
    }
    
    return 0;
}