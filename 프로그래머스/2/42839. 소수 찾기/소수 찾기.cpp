#include <bits/stdc++.h>

using namespace std;

int cnt[10];

bool isPrime(int num) {
    if(num < 2) return false;
    for(int i=2; i<=sqrt(num); i++) {
        if(num % i == 0) return false;
    }
    return true;
}

void makestring(vector<string>& v, string s, int len) {
    for(int i=0; i<10; i++) {
        if(cnt[i]) {
            s.push_back('0' + i);
            v.push_back(s);
            cnt[i]--;
            
            makestring(v, s, len+1);
            s.pop_back();
            cnt[i]++;
        }
    }
}

int solution(string numbers) {
    int answer = 0;
    
    for(char c : numbers) {
        cnt[c - '0']++;
    }
    
    // 숫자 조합
    vector<string> v;
    for(int i=1; i<10; i++) { //첫번째 자리수는 0 불가
        string s = "";
        if(cnt[i]) {
            s += ('0' + i);
            
            v.push_back(s);
            cnt[i]--;
            
            makestring(v, s, 1);
            cnt[i]++;
        }
    }
    
    // 소수 판별
    for(string s : v) {
        if(isPrime(stoi(s))) answer++;
    }
    
    return answer;
}