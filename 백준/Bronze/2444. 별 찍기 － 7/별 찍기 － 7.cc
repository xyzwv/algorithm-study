#include <bits/stdc++.h>
using namespace std;

int n;

void printStars(int i) {
    for(int j=0; j<n-i; j++){
        cout << " ";
    }
    for(int j=0; j<2*i-1; j++){
        cout << "*";
    }
    cout << endl;
}

int main() {
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        printStars(i);
    }
    for(int i=n-1; i>0; i--) {
        printStars(i);
    }
    
    return 0;
}