#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int>& card, int idx, int M) {
    int sum = 0, max = 0;
    
    for(int i=idx; i>=2; i--) {
        sum += card[i];
        for(int j=i-1; j>=1; j--) {
            sum += card[j];
            for(int k=j-1; k>=0; k--) {
                sum += card[k];
                if(sum <= M && sum > max) max = sum;
                
                sum -= card[k];
            }
            sum -= card[j];
        }
        sum -= card[i];
    }
    
    return max;
}

int main()
{
    int N, M;
    int idx = 0;
    const int INF = 300005;
    
    vector<int> card;
    
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        card.push_back(x);
    }
    
    sort(card.begin(), card.end());
    card.push_back(INF);
    
    idx = lower_bound(card.begin(), card.end(), M) - card.begin() - 1;

    cout << solution(card, idx, M);

    return 0;
}