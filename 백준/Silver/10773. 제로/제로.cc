#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    int k, data, sum = 0;
    cin >> k;
    for(int i=0; i<k; i++){
        cin >> data;
        if(data == 0) {
            if(s.empty()) break;
            else s.pop();
        }
        else {
            s.push(data);
        }
    }
    
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    
    cout << sum << endl;
	
    return 0;
}