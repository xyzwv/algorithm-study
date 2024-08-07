//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[m];
        for(int j=0; j<m; j++) cin >> arr[i][j];
    }
    
    int k;
    cin >> k;
    int i, j, x, y;
    for(int t=0; t<k; t++){
        cin >> i >> j >> x >> y;
        int sum=0;
        for(int a=i-1; a<x; a++){
            for(int b=j-1; b<y; b++){
                sum += arr[a][b];
            }
        }
        cout << sum << "\n";
    }

    return 0;
}