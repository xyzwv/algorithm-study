#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, x;
    cin >> n;
    
    priority_queue<int> heap;
    while(n--){
        cin >> x;
        if(x) heap.push(x);
        else if(heap.empty()) cout << "0\n";
        else{
            cout << heap.top() << "\n";
            heap.pop();
        }
    }
    
    return 0;
}