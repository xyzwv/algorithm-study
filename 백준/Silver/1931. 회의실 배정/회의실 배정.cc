#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> pi;

int main()
{
    int n, cnt=0;
    vector<pi> v;
    
    cin >> n;
    for(int i=0; i<n; i++) {
        int start, end;
        cin >> start >> end;
        v.push_back({end, start});
    }
    
    sort(v.begin(), v.end());
    
    int finish_time=0;
    for(int i=0; i<n; i++){
        if(finish_time > v[i].second) continue;
        finish_time = v[i].first;
        cnt++;
    }
    
    cout << cnt;
    
    return 0;
}