#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    string cmd;
    
    for(int i=0; i<t; i++){
        getline(cin, cmd);
        
        if(cmd.size() == 3){
            if(s.empty()) cout << -1 <<"\n";
            else if(cmd.compare("top") == 0) cout << s.top() << "\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if(cmd.size() == 4){
            cout << s.size() << "\n";
        }
        else if(cmd.size() == 5){
            cout << (int)s.empty() << "\n";
        }
        else {
            s.push(stoi(cmd.substr(5)));
        }
        
    }
	
    return 0;
}