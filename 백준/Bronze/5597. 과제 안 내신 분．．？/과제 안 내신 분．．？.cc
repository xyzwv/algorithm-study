#include <iostream>
using namespace std;

int main() {
    bool arr[30] = {false};
    int n;
    for(int i=0; i<28; i++){
        cin >> n;
        arr[n-1] = true;
    }
    for(int i=0; i<30; i++){
        if(arr[i] == false) cout << i+1 << endl;
    }
    return 0;
}