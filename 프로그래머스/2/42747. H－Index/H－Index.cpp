#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end(), greater<>());
    
    int n = citations.size();
    int answer = 0;
    for(int i=0; i<n; i++) {
        if(citations[i] > i) answer++;
    }
    
    return answer;
}