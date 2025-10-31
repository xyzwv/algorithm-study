#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    queue<int> q;
    
    for(int i=0; i<progresses.size(); i++) {
        int day = 1;
        while(progresses[i] + day * speeds[i] < 100) {
            day++;
        }
        q.push(day);
    }
    
    while(!q.empty()) {
        int day = q.front();
        q.pop();
        int cnt = 1;
        
        while(!q.empty() && q.front() <= day) {
            q.pop();
            cnt++;
        }
        
        answer.push_back(cnt);
    }
    
    return answer;
}