#include <bits/stdc++.h>

using namespace std;

string solution(string number, int k) {
    int len = number.size() - k;
    
    vector<int> v;
    for(int i=0; i<number.size(); i++) {
        v.push_back(number[i] - '0');
    }
    
    string answer = "";
    int idx = 0;
    int max = 0;
    int left = number.size() - k;
    while(left > 0) {
        auto iter = max_element(v.begin() + idx, v.end() - left + 1);
        max = *iter;
        answer += '0' + max;
        idx = iter - v.begin() + 1;
        left--;
    }
    
    if(answer.size() < number.size() - k) {
        for(int i=idx; i<number.size(); i++) answer += '0' + number[i];
    }
    
    return answer;
}