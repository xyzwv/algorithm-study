#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, count=0;
	vector<int> v;
	
	cin >> n >> k;
	
	for(int i=0; i<n; i++){
	    int x;
	    cin >> x;
	    v.push_back(x);
	}
	
    for(int i=n-1; i>=0; i--){
        count += k / v.at(i);
        k %= v.at(i);
    }
    
    cout << count;
    
    return 0;
}