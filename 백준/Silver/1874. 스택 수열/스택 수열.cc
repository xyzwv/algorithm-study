#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    stack<int> s;
    vector<char> v;
    int cnt = 0;

    s.push(cnt++);

    while(n--) {
        int x;
        cin >> x;

        if(s.top() == x) {
            s.pop();
            v.push_back('-');
        }

        else if(s.top() < x) {
            while(cnt <= x) {
                s.push(cnt++);
                v.push_back('+');
            }
            
            s.pop();
            v.push_back('-');
        }

        else {
            cout << "NO";
            return 0;
        }
    }

    for(auto e : v) cout << e << '\n';
    
    return 0;
}