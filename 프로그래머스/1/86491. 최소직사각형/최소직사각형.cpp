#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    vector<int> width, height;
    for(int i=0; i<sizes.size(); i++) {
        int w = sizes[i][0];
        int h = sizes[i][1];
        if(w >= h) {
            width.push_back(w);
            height.push_back(h);
        } else {
            width.push_back(h);
            height.push_back(w);
        }
    }
    
    int mw = *max_element(width.begin(), width.end());
    int mh = *max_element(height.begin(), height.end());
    answer = mw * mh;
    return answer;
}