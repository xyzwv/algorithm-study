#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> a, b, res;
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=0; i<s1.size(); i++){
        a.push(s1.at(i));
    }
    for(int i=0; i<s2.size(); i++){
        b.push(s2.at(i));
    }

    while(!a.empty() || !b.empty()){
        int val_a = 0, val_b = 0, sum, temp = 0;
        if(!a.empty()) {
            val_a = a.top() - '0';
            a.pop();
        }
        if(!b.empty()) {
            val_b = b.top() - '0';
            b.pop();
        }
        if(!res.empty()) {
            temp = res.top() - '0';
            res.pop();
        }
        sum = val_a + val_b + temp;
        if(sum >= 10) {
            sum -= 10;
            temp = 1;
        }
        else {
            temp = 0;
        }
        res.push(sum + '0');
        res.push(temp + '0');
    }

    if(res.top() == '0' && res.size() != 1) res.pop();

    while(!res.empty()){
        cout << res.top();
        res.pop();
    }

    return 0;
}