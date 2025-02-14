#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    priority_queue<int> pq;
    int n, a;
    cin >> n;
    
    while(n--){
       cin >> a;
       if(!a) {
           if(pq.empty()) cout << "-1\n";
           else {
               cout << pq.top() << "\n";
               pq.pop();
           }
       } else {
           int x;
           while(a--){
               cin >> x;
               pq.push(x);
           }
       }
    }
    
    return 0;
}