#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, r;
    string s;
    string p;
    
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> r;
        cin >> s;
        for(int j=0; j<s.size(); j++){
            p.append(r, s[j]);
        }
        cout << p << endl;
        p.clear();
    }
    
    return 0;
}