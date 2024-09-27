#include <vector>
#include <algorithm>
#include <sstream>
#include <map>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int n = friends.size();
    
    map<string, int> m;
    
    vector<vector<int>> record(n, vector<int> (n, 0));
    vector<int> score(n, 0);
    vector<int> next_month(n, 0);
    
    for(int i=0; i<n; i++){
        m[friends[i]] = i;
    }
    
    for(string g: gifts){
        stringstream ss(g);
        string sender, receiver;
        
        ss >> sender >> receiver;
        
        record[m[sender]][m[receiver]]++;
        score[m[sender]]++;
        score[m[receiver]]--;
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(record[i][j] == record[j][i]){
                if(score[i] > score[j]) next_month[i]++;
                else if(score[i] < score[j]) next_month[j]++;
            } else if(record[i][j] > record[j][i]){
                next_month[i]++;
            } else {
                next_month[j]++;
            }
        }
    }
    
    int answer = *max_element(next_month.begin(), next_month.end());
    return answer;
}