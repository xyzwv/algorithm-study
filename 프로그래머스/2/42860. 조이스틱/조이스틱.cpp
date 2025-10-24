#include <bits/stdc++.h>

using namespace std;

int solution(string name) {
    vector<int> move = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 
                        12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    int answer = 0;
    for(char c : name) {
        answer += move[c - 'A'];
    }
    
    int n = name.size();
    int cnt = n - 1;
    for(int i=0; i<n-1; i++) {
        int j = i+1;
        while(j < n && name[j] == 'A') j++;
        cnt = min({cnt, i*2 + n-j, (n-j)*2 + i});
    }
    
    answer += cnt;
    return answer;
}