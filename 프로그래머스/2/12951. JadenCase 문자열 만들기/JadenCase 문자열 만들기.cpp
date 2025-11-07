#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    bool firstChar = true;
    for(char& ch : s) {
        if(ch == ' ') {
            firstChar = true;
        } else {
            if(firstChar) {
                ch = islower(ch) ? toupper(ch) : ch;
                firstChar = false;
            } else {
                ch = isupper(ch) ? tolower(ch) : ch;
            }
        }
    }
    
    return s;
}