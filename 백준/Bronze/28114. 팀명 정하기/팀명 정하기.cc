#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);

    int year[3];
    map<int, char, greater<int>> m;
    int p, y;
    string s;
    for(int i=0; i<3; i++){
        cin >> p >> y >> s;
        m.insert(pair<int, char>(p, s.at(0)));
        year[i] = y;
    }

    sort(year, year+3);
    for(int &i: year) cout << i%100;
    cout << "\n";

    for(auto it : m) cout << it.second;
}