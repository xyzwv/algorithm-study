#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;
    
    vector<vector<int>> bc(N+1, vector<int>(N+1, 1));
    for(int i=2; i<=N; i++) {
        for(int j=1; j<i; j++) {
            bc[i][j] = bc[i-1][j-1] + bc[i-1][j];
        }
    }

    cout << bc[N][K];

    return 0;
}