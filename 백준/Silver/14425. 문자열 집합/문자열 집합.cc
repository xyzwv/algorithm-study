#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    
    int count=0;
    for(int i=0; i<m; i++) {
        string s;
        cin >> s;
        if(binary_search(v.begin(), v.end(), s)) count++;
    }

    cout << count;
    return 0;
}