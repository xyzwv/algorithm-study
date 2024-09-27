#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    
    for(int i=0; i<moves.size(); i++){
        int current_order = moves[i] - 1;
        
        int doll;
        for(int j=0; j<board.size(); j++){
            doll = board[j][current_order];
            if(doll) {
                board[j][current_order] = 0;
                break;
            }
        }
        if(doll == 0) continue;
        
        if(!s.empty() && (s.top() == doll)) {
            s.pop();
            answer += 2;
        } else {
            s.push(doll);
        }
        
    }
    
    return answer;
}