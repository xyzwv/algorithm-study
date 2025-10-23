#include <bits/stdc++.h>

using namespace std;

bool comp(string a, string b) {
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    vector<string> v;
    for(int n : numbers) v.push_back(to_string(n));
    
    sort(v.begin(), v.end(), comp);
    
    if(v.front() == "0") return "0";
    
    string answer = "";
    for(string s : v) answer += s;
    return answer;
}