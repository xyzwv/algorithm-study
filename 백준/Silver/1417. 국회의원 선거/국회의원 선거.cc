#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, dasom, ans = 0;
    priority_queue<int> pq;
    
    cin >> n >> dasom;
    
    while(--n){
        int x;
        cin >> x;
        pq.push(x);
    }

    while(!pq.empty() && dasom <= pq.top()){
        int max = pq.top();
        pq.pop();
        pq.push(max-1);
        dasom++;
        ans++;
    }
    
    cout << ans;
    
    return 0;
}