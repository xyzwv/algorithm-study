#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int cnt = 0;
    while(cnt != commands.size()) {
        vector<int> v = commands[cnt];
        int i = v[0];
        int j = v[1];
        int k = v[2];
        
        vector<int> new_arr;
        for(int x=i-1; x<j; x++) {
            new_arr.push_back(array[x]);
        }
        sort(new_arr.begin(), new_arr.end());
        answer.push_back(new_arr[k-1]);
        cnt++;
    }
    return answer;
}