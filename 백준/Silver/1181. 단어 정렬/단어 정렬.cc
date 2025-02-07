#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool comp(string a, string b){
    if(a.size() < b.size()) {
        return true;
    }
    else if(a.size() == b.size()) {
        return a < b;
    }
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    string input;
    set<string> s;
    vector<string> v;
    
    cin >> n;
    
    while(n--){
        cin >> input;
        s.insert(input);
    }
    
    for(auto& e : s){
        v.push_back(e);
    }
    
    sort(v.begin(), v.end(), comp);
    
    for(auto& e : v) {
        cout << e << "\n";
    }
    
    return 0;
}