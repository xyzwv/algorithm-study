#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, target;
    
    cin >> n;
    vector<int> card(n);
    for(int i=0; i<n; i++) cin >> card[i];
    
    sort(card.begin(), card.end());
    
    cin >> m;
    while(m--) {
        cin >> target;
        cout << upper_bound(card.begin(), card.end(), target) 
                - lower_bound(card.begin(), card.end(), target) << " ";
    }
    
    return 0;
}