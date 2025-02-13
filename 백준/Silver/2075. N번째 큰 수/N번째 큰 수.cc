#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> arr(n * n);
    for (int i = 0; i < n * n; i++) cin >> arr[i];

    nth_element(arr.begin(), arr.begin() + (n * n - n), arr.end());
    cout << arr[n * n - n];
    
    return 0;
}