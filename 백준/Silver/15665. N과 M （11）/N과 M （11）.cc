#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int m;
set<int> s;
vector<int> ans;

void solution(int cnt) {
    if(cnt == m) {
        for(int i=0; i<m; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(auto& e : s) {
        ans[cnt] = e;
        solution(cnt+1);
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n >> m;
    
    while(n--) {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    ans.assign(m, 0);
    solution(0);
    
    return 0;
}