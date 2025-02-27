#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> pos;

bool isValid(int height) {
    if(pos[0] > height) return false;
    
    int range = 2 * height;
    for(int i=1; i<m; i++) {
        if(pos[i] - pos[i-1] > range) return false;
    }
    
    if(n - pos[m-1] > height) return false;
    
    return true;
}

int binarySearch() {
    int start = 0;
    int end = n;
    int mid = (start + end) / 2;
    int ans = end;
    
    while(start <= end) {
        if(isValid(mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    pos.resize(m);
    for(int i=0; i<m; i++) cin >> pos[i];
    
    cout << binarySearch();
    
    return 0;
}