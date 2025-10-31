#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> phone_book) {
    set<string> s;
    for(auto& phno : phone_book) s.insert(phno);
    for(auto& phno : phone_book) {
        string prefix;
        for(int i=0; i<phno.size() - 1; i++) {
            prefix.push_back(phno[i]);
            if(s.count(prefix)) return false;
        }
    }
    return true;
}