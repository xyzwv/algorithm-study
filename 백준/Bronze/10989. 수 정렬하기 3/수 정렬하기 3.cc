#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, x;
    int cnt[10001] = {0};
    
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> x;
        cnt[x]++;
    }
    
    for(int i=1; i<10001; i++) {
        for(int j=0; j<cnt[i]; j++) {
            cout << i << "\n";
        }
    }
    
    return 0;
}