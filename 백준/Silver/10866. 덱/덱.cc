#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    string cmd;
    deque<int> dq;
    
    cin >> n;
    
    while(n--){
        cin >> cmd;
        if(cmd == "size"){
            cout << dq.size() << "\n";
        } else if(cmd == "empty"){
            cout << dq.empty() << "\n";
        } else if(cmd == "front" || cmd == "back"){
            if(dq.empty()) {
                cout << "-1\n";
            } else {
                if(cmd == "front") cout << dq.front() << "\n";
                else cout << dq.back() << "\n";
            }
        } else if(cmd == "push_front" || cmd == "push_back"){
            int x;
            cin >> x;
            if(cmd == "push_front") dq.push_front(x);
            else dq.push_back(x);
        } else{
            if(dq.empty()) cout << "-1\n";
            else{
                if(cmd == "pop_front") {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                } else {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
            }
        }
    }
    return 0;
}