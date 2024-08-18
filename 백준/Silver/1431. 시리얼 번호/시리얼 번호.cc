#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string s1, string s2){
    if(s1.size() != s2.size()) return s1.size() < s2.size();
    
    int sum1=0, sum2=0;
    for(int i=0; i<s1.size(); i++){
        if(isdigit(s1[i])) sum1 += s1[i] - '0';
        if(isdigit(s2[i])) sum2 += s2[i] - '0';
    }
    if(sum1 != sum2) return sum1 < sum2;

    return s1 < s2;
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end(), cmp);

    for(auto i : v) cout << i << "\n";
    return 0;
}