#include <iostream>
using namespace std;

typedef long long ll;
const int MAX = 60;

pair<int, int> findPair(ll m) {
    // 1. x = y
    // m이 2의 제곱수: m을 이진수로 표현했을 때 1이 1개 
    // 10^18 ~= 2^60
    for(int i=0; i<60; i++){
        if(m == ((ll)1 << i)) return {i-1, i-1};
    }
    
    // 2. x < y
    // m이 2의 제곱수가 아님: m을 이진수로 표현했을 때 1이 2개
    int x, y;
    for(x=0; x<MAX; x++){
        if(m & (ll)1 << x){
            m -= ((ll)1 << x);
            break;
        }
    }
    for(y=0; y<MAX; y++){
        if(m & (ll)1 << y){
            break;
        }
    }
    return {x, y};
}

int main()
{
    int n;
    cin >> n;
    ll m;
    while(n--){
        cin >> m;
        pair<int, int> answer = findPair(m);
        cout << answer.first << " " << answer.second << "\n";
    }
    return 0;
}