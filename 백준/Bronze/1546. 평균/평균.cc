#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> vec;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int max = *max_element(vec.begin(), vec.end());
    double sum = 0;
    for(auto& v : vec){
        sum += (double)v/max*100;
    }
    cout << sum/n;

    return 0;
}