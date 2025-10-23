#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    queue<int> q;
    for(int i=0; i<progresses.size(); i++) {
        int progress = progresses[i];
        int day = 0;
        while(progress < 100) {
            progress += speeds[i];
            day++;
        }
        q.push(day);
    }
    
    
    while(!q.empty()) {
        int prior = q.front();
        int cnt = 0;
        while(!q.empty() && q.front() <= prior) {
            cnt++;
            q.pop();
        }
        answer.push_back(cnt);
    }
    
    return answer;
}