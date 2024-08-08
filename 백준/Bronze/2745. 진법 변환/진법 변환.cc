#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    int b;
    cin >> s >> b;

    int n;
    int sum=0;
    for(int i=0; i<s.size(); i++){
        char c = s.at(i);
        if(c >= '0' && c <= '9') n = (int)c - 48;
        else n = (int)c - 55;

        int mul = 1;
        int j=i;
        while(s.size()-1 - j){
            mul *= b;
            j++;
        }
        sum += n * mul;
    }
    cout << sum;
}