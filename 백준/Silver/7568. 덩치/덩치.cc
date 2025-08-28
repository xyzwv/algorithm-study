#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<pi> body(N);
    for(int i=0; i<N; i++) {
        cin >> body[i].first >> body[i].second;
    }
    
    vector<int> ranking(N, 1);
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            if(body[i].first < body[j].first && body[i].second < body[j].second) {
                ranking[i]++;
            }
            else if(body[i].first > body[j].first && body[i].second > body[j].second) {
                ranking[j]++;
            }
        }
    }
    
    for(auto& e : ranking) cout << e << " ";
    
    return 0;
}