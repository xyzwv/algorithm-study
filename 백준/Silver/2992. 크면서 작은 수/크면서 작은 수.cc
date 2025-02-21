#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string x;
string ans;
vector<char> num;
vector<bool> is_used;
bool has_answer;

void backtracking(int cnt) {
    if(cnt == x.size()) {
        if(ans > x) {
            has_answer = true;
            cout << ans;
        }
        return;
    }
    
    for(int i=0; i<x.size(); i++) {
        if(is_used[i]) continue;
        ans += num[i];
        is_used[i] = true;
        
        backtracking(cnt+1);
        
        if(has_answer) return;
        
        ans.pop_back();
        is_used[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> x;
    
    for(char c : x) num.push_back(c);
    sort(num.begin(), num.end());

    is_used.resize(x.size(), false);
    
    backtracking(0);
    
    if(!has_answer) cout << 0;
    
    return 0;
}