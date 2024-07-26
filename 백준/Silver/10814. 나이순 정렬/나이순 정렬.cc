#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    pair<int, string> p;
    vector<pair<int, string>> member;
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> p.first >> p.second;
        member.push_back(p);
    }
    
    stable_sort(member.begin(), member.end(), comp);
    
    
    for(int i=0; i<n; i++){
        cout << member[i].first << " " << member[i].second << "\n";
    }
    
    return 0;
}