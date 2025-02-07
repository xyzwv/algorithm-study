#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    string op;
    int m, x, ans = 0;
    cin >> m;
    while(m--){
        cin >> op;
        if(op == "all"){
            ans = ~(1 << 21);
        } else if(op == "empty"){
            ans = 0;
        } else{
            cin >> x;
            if(op == "add") {
                ans |= (1 << x);
            } else if(op == "remove"){
                ans &= ~(1 << x);
            } else if(op == "toggle"){
                ans ^= (1 << x);
            } else if(op == "check"){
                cout << ((ans & (1 << x)) ? 1 : 0) << "\n";
            }
        }
    }
    
    return 0;
}