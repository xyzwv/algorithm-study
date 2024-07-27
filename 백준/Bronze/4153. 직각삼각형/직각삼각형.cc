#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, max, total;
    while(true){
        vector<int> vec;
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;
        if(a == 0 || b == 0 || c == 0) {
            cout << "wrong" << endl;
            continue;
        }
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
        
        total = a*a + b*b + c*c;
        max = *max_element(vec.begin(), vec.end());
        
        if(2*max*max == total) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    
    return 0;
}