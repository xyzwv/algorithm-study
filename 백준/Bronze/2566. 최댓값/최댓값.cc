#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[9][9];
    int x, y, max=0;
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> arr[i][j];
            if(max <= arr[i][j]) {
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    
    cout << max << endl << x+1 << " " << y+1;
    
    return 0;
}