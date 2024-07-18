#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, j;
    cin >> n >> m;
    int* arrA = new int[n*m];
    int* arrB = new int[n*m];
    for(i=0; i<n*m; i++){
        cin >> arrA[i];
    }    
    for(i=0; i<n*m; i++){
        cin >> arrB[i];
    }
    for(i=0; i<n*m; i++){
        cout << arrA[i] + arrB[i] << " ";
        if((i+1)%m == 0) cout << endl;
    }
    
    return 0;
}