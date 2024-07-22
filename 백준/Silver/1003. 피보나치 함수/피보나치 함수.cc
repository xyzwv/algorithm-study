#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    int first = 0, second = 1, sum;
    if(n == 0) return second;
    while(n--){
        sum = first + second;
        first = second;
        second = sum;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, k;
    cin >> t;
    while(t--){
        cin >> k;
        int zero = 0, one = 0;
        
        if(k == 0){
            zero = 1;
        } else if(k == 1){
            one = 1;
        } else {
            zero = fibonacci(k-2);
            one = fibonacci(k-1);
        }
        
        cout << zero << " " << one << "\n";
    }
	
    return 0;
}