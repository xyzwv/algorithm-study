#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> count(3, 0);
    for(int i=0; i<answers.size(); i++) {
        int a = answers[i];
        
        // 1번 수포자
        if(a == i % 5 + 1) count[0]++;
        
        // 2번 수포자
        if(i % 2 == 0 && a == 2) count[1]++;
        if(i % 8 == 1 && a == 1) count[1]++;
        if(i % 8 == 3 && a == 3) count[1]++;
        if(i % 8 == 5 && a == 4) count[1]++;
        if(i % 8 == 7 && a == 5) count[1]++;
        
        // 3번 수포자
        if(i % 10 < 2 && a == 3) count[2]++;
        else if(i % 10 >= 2 && i % 10 < 4 && a == 1) count[2]++;
        else if(i % 10 >= 4 && i % 10 < 6 && a == 2) count[2]++;
        else if(i % 10 >= 6 && i % 10 < 8 && a == 4) count[2]++;
        else if(i % 10 >= 8 && i % 10 < 10 && a == 5) count[2]++;
    }

    vector<int> answer;
    int max = *max_element(count.begin(), count.end());
    for(int i=0; i<3; i++) {
        if(count[i] == max) answer.push_back(i+1);
    }
    return answer;
}