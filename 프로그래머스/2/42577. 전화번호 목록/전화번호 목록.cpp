#include <bits/stdc++.h>

using namespace std;

bool isPrefix(string a, string b) {
    return equal(a.begin(), a.end(), b.begin());
}

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    
    for(int i=0; i<phone_book.size()-1; i++) {
        string s1 = phone_book[i];
        string s2 = phone_book[i+1];
        if(s1.size() < s2.size() && s1[0] == s2[0] && isPrefix(s1, s2)) {
           return false;
        }
    }
    
    return true;
}