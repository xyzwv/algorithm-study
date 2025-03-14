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
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    
    int m;
    cin >> m;
    while(m--) {
        int num;
        cin >> num;
        cout << binary_search(v.begin(), v.end(), num) << "\n";
    }
    
    
    
    
    return 0;
}