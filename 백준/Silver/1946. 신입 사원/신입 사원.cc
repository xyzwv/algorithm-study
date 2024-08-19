#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>& p1, pair<int, int>& p2){
    return p1.first < p2.first;
}

int main() {
    int t, n;
    cin >> t;
    
    while(t--){
        cin >> n;
        vector<pair<int, int>> v;
        int rank1, rank2;
        for(int i=0; i<n; i++){
            cin >> rank1 >> rank2;
            v.push_back(make_pair(rank1, rank2));
        }
        sort(v.begin(), v.end(), cmp);
        
        int count=1;
        int max=v[0].second;
        for(int i=1; i<n; i++){
            if(max > v[i].second) {
                count++;
                max = v[i].second;
            }
        }
        cout << count << "\n";
    }
    
    return 0;
}