#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int i;
    queue<int> q;
    vector<int> res;
    for(i=0; i<n; i++){
        q.push(i+1);
    }

    while(!q.empty()){
        for(int i=0; i<k-1; i++){
            q.push(q.front());
            q.pop();
        }
        res.push_back(q.front());
        q.pop();
    }


    cout << '<';
    for(i=0; i<res.size()-1; i++){
        cout << res[i] << ", ";
    }
    cout << res[i] << '>';

    return 0;
}