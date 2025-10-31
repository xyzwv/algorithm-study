#include <bits/stdc++.h>

using namespace std;

bool comp(string a, string b) {
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> v;
    for(int& num : numbers) v.push_back(to_string(num));
    
    sort(v.begin(), v.end(), comp);
    if(v.front() == "0") return "0";
    
    for(string& s : v) answer += s;
    return answer;
}