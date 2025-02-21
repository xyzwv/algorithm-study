#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> arr;
vector<bool> is_used;

void backtracking(int len) {
    if(len == n) {
        for(auto& e : arr) {
            cout << e << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i=1; i<=n; i++) {
        if(is_used[i]) continue;
        
        arr[len] = i;
        is_used[i] = true;
        backtracking(len + 1);
        is_used[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    
    arr.resize(n);
    is_used.resize(n, false);
    
    backtracking(0);
    
    return 0;
}