#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char wheel[25];
    for (int i = 0; i < 25; i++){
        wheel[i] = '?';
    }
    vector<pair<int, char>> data;

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        int s;
        char c;
        cin >> s >> c;
        data.push_back(make_pair(s, c));
    }

    int current = 0;
    wheel[current] = data[k - 1].second;
    for (int i = k - 1; i > 0; i--){
        int idx = (data[i].first + current) % n;
        char alphabet = data[i - 1].second;

        if (wheel[idx] != '?' && wheel[idx] != alphabet){
            cout << "!";
            return 0;
        }

        wheel[idx] = data[i - 1].second;
        current = idx;
    }

    for(int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (wheel[i] == wheel[j] && wheel[i] != '?'){
                cout << "!";
                return 0;
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << wheel[i];
    }

    return 0;
}