#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
    int a, b;
    while((cin >> a >> b) && a != 0 && b != 0){
        if(a%b == 0) cout<<"multiple"<<endl;
        else if(b%a == 0) cout<<"factor"<<endl;
        else cout<<"neither"<<endl;
    }
    
    return 0;
}