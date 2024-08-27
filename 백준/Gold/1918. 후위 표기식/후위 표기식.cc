#include <iostream>
#include <stack>
using namespace std;

int getPriority(char c) {
    if(c == '+' || c == '-') return 1;
    else if(c == '*' || c == '/') return 2;
    else return 0;
}

int main() {
    string str;
    cin >> str;

    stack<char> s;
    string res = "";
    for(int i=0; i<str.size(); i++){
        char c = str.at(i);

        switch(c){
            case '(':
                s.push(c);
                break;
            case ')':
                while(!s.empty() && s.top() != '('){
                    res += s.top();
                    s.pop();
                }
                s.pop();
                break;
            case '+':
            case '-':
            case '*':
            case '/':
                while(!s.empty() && getPriority(s.top()) >= getPriority(c)){
                    res += s.top();
                    s.pop();
                }
                s.push(c);
                break;
            default: res += c;
        }
    }

    while(!s.empty()){
        res += s.top();
        s.pop();
    }
    
    cout << res;

    return 0;
}