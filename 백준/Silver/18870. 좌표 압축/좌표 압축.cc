#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> v1(n);
    for(int i=0; i<n; i++) cin >> v1[i];
    
    vector<int> v2 = v1;
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());
    
    for(int i=0; i<n; i++) {
        cout << lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin() << " ";
    }
    
    return 0;
}