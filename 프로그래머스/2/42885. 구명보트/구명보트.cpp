#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;

    sort(people.begin(), people.end());

    int i=0, j=people.size() - 1;
    while(i < people.size() && i < j) {
        if(people[i] + people[j] <= limit) {
            answer++;
            people[i++] = 0;
            people[j--] = 0;
        } else {
            j--;
        }
    }
    
    for(int p : people) {
        if(p) answer++;
    }
    
    return answer;
}