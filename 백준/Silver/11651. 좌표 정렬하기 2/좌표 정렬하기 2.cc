#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> pi;

bool comp(pi a, pi b) {
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    int N;
    vector<pi> coord;
    
    cin >> N;
    for(int i=0; i<N; i++) {
        int x, y;
        cin >> x >> y;
        coord.push_back({x, y});
    }
    
    sort(coord.begin(), coord.end(), comp);
    
    for(int i=0; i<N; i++) {
        cout << coord[i].first << " " << coord[i].second << "\n";
    }
    
    return 0;
}