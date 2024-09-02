#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void setPrime(bool* arr) {
    for(int i=3; i<sqrt(1000001); i++){
        if(arr[i]){
            for(int j=i*i; j<=1000001; j+=i){
                arr[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    const int size = 1000001;
    bool arr[size];
    for(int i=3; i<size; i++) arr[i] = true;
    setPrime(arr);

    while(true){
        int n;
        cin >> n;
        if(n == 0) break;
        
        int i;
        for(i=3; i<=n/2; i+=2){
            if(arr[i] && arr[n-i]) {
                cout << n << " = " << i << " + " << n-i << "\n";
                break;
            }
        }

        if(i > n/2) cout << "Goldbach's conjecture is wrong.";
    }
    return 0;
}