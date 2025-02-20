#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int k;
string str;
vector<string> ans;
vector<bool> is_less;
vector<bool> is_used(10);

void backtracking(int cnt) {
    if(cnt == k) {
        ans.push_back(str);
        return;
    }
    for(int i=0; i<10; i++) {
        if(is_used[i]) continue;
        
        int prev = str[cnt] - '0';
        if(is_less[cnt] && prev < i || !is_less[cnt] && prev > i) {
            str += to_string(i);
            is_used[i] = true;
            backtracking(cnt+1);
            
            str.pop_back();
            is_used[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> k;
    
    for(int i=0; i<k; i++) {
        char c;
        cin >> c;
        is_less.push_back(c == '<');
    }
    
    for(int i=0; i<10; i++) {
        is_used.assign(10, false);
        str = to_string(i);
        is_used[i] = true;
        backtracking(0);
    }
    
    cout << *max_element(ans.begin(), ans.end()) << "\n";
    cout << *min_element(ans.begin(), ans.end()) << "\n";
    
    return 0;
}