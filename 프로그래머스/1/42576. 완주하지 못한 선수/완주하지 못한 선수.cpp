#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> m;
    for(string& s : participant) m[s]++;
    for(string& s : completion) m[s]--;
    for(auto& [s, n] : m) {
        if(n > 0) return s;
    }
}