#include <iostream>
#include <vector>
using namespace std;

int oneFlower(vector<vector<int>> p, int r, int c) {
    return p[r-1][c] + p[r][c-1] + p[r][c] + p[r][c+1] + p[r+1][c];
}

int solution(vector<vector<int>> p) {
    int ans = 200*10*10;
    int n = p.size();
    
    for(int i=1; i<n-1; i++){
        for(int j=1; j<n-1; j++){
            for(int a=1; a<n-1; a++){
                for(int b=1; b<n-1; b++){
                    if(abs(i-a) + abs(j-b) < 3) continue;
                    
                    for(int x=1; x<n-1; x++){
                        for(int y=1; y<n-1; y++){
                            if(abs(x-a) + abs(y-b) < 3 || abs(x-i) + abs(y-j) < 3) continue;
                            
                            ans = min(ans, oneFlower(p, i, j) + oneFlower(p, a, b) + oneFlower(p, x, y));
                        }
                    }
                }
            }
        }
    }
    
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<vector<int>> price(n, vector<int>(n,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> price[i][j];
        }
    }
    
    cout << solution(price);
    
    return 0;
}