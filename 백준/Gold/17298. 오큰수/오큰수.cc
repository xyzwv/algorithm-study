#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int arr[1000005];
    stack<int> s;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
        while(1) {
            if(s.empty()) {
                s.push(i);
                break;
            } 

            if(arr[s.top()] < arr[i]) {
                arr[s.top()] = arr[i];
                s.pop();
            } else {
                s.push(i);
                break;
            }
        }
    }

    while(!s.empty()){
        arr[s.top()] = -1;
        s.pop();
    }

    for(int i=0; i<n; i++) cout << arr[i] << " ";
}