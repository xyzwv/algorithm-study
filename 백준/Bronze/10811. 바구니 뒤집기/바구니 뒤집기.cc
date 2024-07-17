#include <iostream>
using namespace std;

int main() {
    int n, m, x, y, temp;
    cin >> n >> m;
    int* arr = new int[n+1];
    for(int i=1; i<=n; i++){
        arr[i] = i;
    }
    
    for(int i=0; i<m; i++){
        cin >> x >> y;
        int z = (x+y)/2;
        for(int j=x; j<=z; j++){
            temp = arr[j];
            arr[j] = arr[y];
            arr[y--] = temp;
        }
    }
    
    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;

}