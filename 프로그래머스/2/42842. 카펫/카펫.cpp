#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int size = brown + yellow;
    for(int h = 3; h * h <= size; h++) {
        int w = size / h;
        if(size % h == 0 && (w - 2) * (h - 2) == yellow) {
            answer.push_back(w);
            answer.push_back(h);
            break;
        }
    }
    return answer;
}