#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    if(a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    set<string> s;
    string str;
    for(int i=0; i<N; i++) {
        cin >> str;
        s.insert(str);
    }

    vector<string> v;
    for(auto word : s) {
        v.push_back(word);
    }

    sort(v.begin(), v.end(), comp);
    
    for(auto& word : v) {
        cout << word << "\n";
    }

    return 0;
}