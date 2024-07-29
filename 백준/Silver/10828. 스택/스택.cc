#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    string cmd;
    stack<int> st;
    
    cin >> n;
    
    while(n--){
        cin >> cmd;
        if(cmd == "push"){
            int x;
            cin >> x;
            st.push(x);
        } else if(cmd == "pop"){
            if(!st.empty()) {
                cout << st.top() << "\n";
                st.pop();
            } else {
                cout << "-1\n";
            }
        } else if(cmd == "size"){
            cout << st.size() << "\n";
        } else if(cmd == "empty"){
            cout << st.empty() << "\n";
        } else if(cmd == "top"){
            if(!st.empty()) {
                cout << st.top() << "\n";
            } else {
                cout << "-1\n";
            }
        }
    }
    return 0;
}