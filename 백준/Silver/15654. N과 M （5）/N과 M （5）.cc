#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> arr;
bool used[8];

void solution(vector<int>& v) {
    if(v.size() == M) {
        for(auto& e : v) cout << e << ' ';
        cout << '\n';
        return;
    }

    for(int i=0; i<N; i++) {
        if(used[i]) continue;
        
        v.push_back(arr[i]);
        used[i] = true;
        solution(v);
        v.pop_back();
        used[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    vector<int> ans;
    solution(ans);

    return 0;
}