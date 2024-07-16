#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, a, b;
    vector<int> v;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        v.push_back(a+b);
    }
    for(int i=0; i<t; i++){
        cout << v[i] << endl;
    }
    
    return 0;
}