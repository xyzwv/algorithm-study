#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int k, dir, len;
    vector<pair<int, int>> hexagon;
    
    cin >> k;
    for(int i=0; i<6; i++) {
        cin >> dir >> len;
        hexagon.push_back({dir, len});
    }
    
    int twice;
    for(int i=0; i<6; i++) {
        int a1 = hexagon[i].first;
        int a2 = hexagon[(i + 2) % 6].first;
        int b1 = hexagon[(i + 1) % 6].first;
        int b2 = hexagon[(i + 3) % 6].first;
        if(a1 == a2 && b1 == b2) {
            twice = i;
            break;
        }
    }
    
    int big_area = hexagon[(twice + 4) % 6].second * hexagon[(twice + 5) % 6].second;
    int small_area = hexagon[(twice + 1) % 6].second * hexagon[(twice + 2) % 6].second;
    cout << k * (big_area - small_area);
    
    return 0;
}