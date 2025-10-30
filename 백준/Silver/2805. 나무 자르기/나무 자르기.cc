#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> tree(N);
    for(int i=0; i<N; i++) cin >> tree[i];

    int answer = 0;
    int max_height = *max_element(tree.begin(), tree.end());
    int min_height = 0;
    while(min_height <= max_height) {
        int middle_height = (max_height + min_height) / 2;
        long long cut = 0;
        for(int i=0; i<N; i++) {
            if(tree[i] <= middle_height) continue;
            cut += tree[i] - middle_height;
        }
        if(cut >= M) {
            answer = middle_height;
            min_height = middle_height + 1;
        } else {
            max_height = middle_height - 1;
        }
    }
    
    cout << answer;

    return 0;
}