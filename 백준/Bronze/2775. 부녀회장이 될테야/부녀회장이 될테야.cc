#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> apartment(15, vector<int>(15));

int dp(int x, int y) {
    if(x == 0) return apartment[x][y] = y;
    
    if(apartment[x][y] > 0) return apartment[x][y];
    
    for(int i=1; i<=y; i++) {
        apartment[x][y] += dp(x-1, i);
    }
    return apartment[x][y];
}

int main()
{
    int T, cnt = 0;
    cin >> T;
    
    while(cnt < T) {
        cnt++;
        
        int k, n;
        cin >> k >> n;
        
        apartment.assign(15, vector<int>(15, 0));
        cout << dp(k, n) << "\n";
    }
    
    
    return 0;
}