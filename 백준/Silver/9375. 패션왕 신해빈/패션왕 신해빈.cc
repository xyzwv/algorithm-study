#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    
    while(t--){
        cin >> n;
        map<string, int> m;
        vector<int> v(n, 0);
        
        int idx=0;
        for(int i=0; i<n; i++){
            string name, type;
            cin >> name >> type;
            if(m.find(type) == m.end()) {
                m.insert(make_pair(type, idx));
                v[idx++]++;
            }
            else {
                v[m[type]]++;
            }
        }
        
        int total=1;
        for(int i=0; i<idx; i++){
            total *= v[i]+1;
        }
        cout << total - 1 << "\n";
        
    }
    
    return 0;
}