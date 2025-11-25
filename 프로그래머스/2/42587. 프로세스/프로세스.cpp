#include <bits/stdc++.h>

using namespace std;

int cnt[10];

int getMax() {
    for(int i=9; i>0; i--) {
        if(cnt[i]) return i;
    }
    return 0;
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    queue<pair<int, int>> q;
    for(int i=0; i<priorities.size(); i++) {
        q.push({priorities[i], i});
        cnt[priorities[i]]++;
    }
    
    while(!q.empty()) {
        auto [p, i] = q.front();
        q.pop();
        
        int h = getMax();
        
        if(p == getMax()) {
            cnt[p]--;
            answer++;
            if(i == location) {
                return answer;
            }
        } else {
            q.push({p, i});
        }
    }
    
    return answer;
}