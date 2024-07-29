#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    string line;
    cin >> n;
    
    while(n--){
        int res=0;
        bool valid=1;
        cin >> line;
        for(int i=0; i<line.size(); i++){
            if(line[i] == '(') res++;
            else if(res == 0) valid=0;
            else res--;
        }
        if(res > 0) valid=0;
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}