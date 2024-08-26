#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL);
    while(true){
        string str;
        getline(cin, str);
        if(str == ".") break;

        stack<char> s;
        bool is_valid = true;
        for(int i=0; i<str.size(); i++){
            if(str.at(i) == '(' || str.at(i) == '[') s.push(str.at(i));
            if(str.at(i) == ')') {
                if(s.empty() || s.top() != '(') {
                    is_valid = false; 
                    break;
                }
                s.pop();
            }
            if(str.at(i) == ']') {
                if(s.empty() || s.top() != '[') {
                    is_valid = false; 
                    break;
                }
                s.pop();
            }
        }

        is_valid && s.empty() ? cout << "yes\n" : cout << "no\n";
    }
    
    return 0;
}