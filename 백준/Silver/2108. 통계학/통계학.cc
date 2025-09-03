#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int sum = 0;
    for(int x : v) sum += x;
    int average = round(sum / (double)N);

    int median = v[N/2];
    int range = v.back() - v.front();

    int maxFreq = 0;
    vector<int> f;
    int i = 0;
    while(i < N) {
        int j = i + 1;
        while(j < N && v[j] == v[i]) j++;

        int freq = j - i;
        if(freq > maxFreq) {
            maxFreq = freq;
            f.clear();
            f.push_back(v[i]);
        } else if(freq == maxFreq) {
            f.push_back(v[i]);
        }

        i = j;
    }

    int mode = (f.size() == 1) ? f[0] : f[1];

    cout << average << "\n" << median << "\n" << mode << "\n" << range;
    
    return 0;
}