#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, K;
    int sequence[100];  // 전기용품 사용 순서
    int tab[101] = {0}; // 멀티탭에 꽂힌 전기용품 (0은 빈자리)

    cin >> N >> K;
    for(int i=0; i<K; i++) {
        cin >> sequence[i];
    }

    int ans = 0;
    
    for(int i=0; i<K; i++) {
        int cur = sequence[i];  // 현재 사용하려는 전기용품
        bool used = false;
        int j = 0;

        // 플러그를 빼지 않음
        for(j=0; j<N; j++) {
            if(tab[j] == cur) {  // 이미 꽂혀 있음
                used = true;
                break;
            } 
            if(!tab[j]) {  // 새로 꽂아야 하고, 꽂을 자리 있음
                tab[j] = cur; 
                used = true;
                break;
            }
        }
        if(used) continue;

        // 당분간 사용하지 않을 플러그 하나 빼고 cur 꽂기
        int last = 0;  // 가장 나중에 사용할 전기용품의 사용 순서
        int removed = -1;  // 가장 나중에 사용할(플러그 제거할) 전기용품
        for(j=0; j<N; j++) {  // 멀티탭에 꽂혀있는 전기용품들이 다시 사용될 시점 확인
            int x = i + 1;
            for(; x < K; x++) {
                if(tab[j] == sequence[x]) break;
            }

            if(last < x) {
                last = x;
                removed = j;
            }
        }
        tab[removed] = cur;
        ans++;
    }

    cout << ans;
    
    return 0;
}