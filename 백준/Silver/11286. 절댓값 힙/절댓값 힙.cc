#include <iostream>
#include <queue>
using namespace std;

struct cmp {
    bool operator()(int &a, int &b){
        if(abs(a) != abs(b)) return abs(a) > abs(b);
        return a > b;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, x;
    cin >> n;
    
    priority_queue<int, vector<int>, cmp> heap;
    while(n--){
        cin >> x;
        
        if(x == 0) {
            if(heap.empty()) cout << "0\n";
            else {
                cout << heap.top() << "\n";
                heap.pop();
            }
        }
        else heap.push(x);
        
    }
    
    return 0;
}