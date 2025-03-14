#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    vector<int> ans;
    
    queue<int> q;
    for(int i=1; i<=n; i++) q.push(i);
    
    while(!q.empty()) {
        int t;
        for(int i=0; i<k-1; i++) {
            t = q.front();
            q.pop();
            q.push(t);
        }
        t = q.front();
        q.pop();
        
        ans.push_back(t);
    }
    
    cout << "<";
    for(int i=0; i<n-1; i++) cout << ans[i] << ", ";
    cout << ans[n-1] << ">";
    
    return 0;
}