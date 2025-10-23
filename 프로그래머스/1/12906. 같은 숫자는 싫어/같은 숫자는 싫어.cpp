#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    int curr = arr[0];
    answer.push_back(curr);
    for(int i=1; i<arr.size(); i++) {
        if(curr == arr[i]) continue;
        
        curr = arr[i];
        answer.push_back(curr);
    }

    return answer;
}