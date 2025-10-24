#include <string>
#include <vector>

using namespace std;

int n;
int answer;

void dfs(int cur, int sum, int target, vector<int>& v) {
    if(cur == n) {
        if(sum == target) answer++;
    } else {
        dfs(cur+1, sum + v[cur], target, v);
        dfs(cur+1, sum - v[cur], target, v);
    }
}

int solution(vector<int> numbers, int target) {
    n = numbers.size();
    dfs(0, 0, target, numbers);
    return answer;
}