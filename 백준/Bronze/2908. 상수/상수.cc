#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    int aa, bb;
    aa = stoi(a);
    bb = stoi(b);
    
    cout << max(a, b);
    
    return 0;
}