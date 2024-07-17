#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, k;
    cin >> n >> m;
    int* arr = new int[n]{};
    for(int x=0; x<m; x++){
        cin >> i >> j >> k;
        for(int y=i; y<=j; y++){
            arr[y-1] = k;
        }
    }
    
    for(int x=0; x<n; x++){
        cout << arr[x] << " ";
    }
    return 0;
}