#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int> p;
    
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        p.push_back(x);
    }
    
    sort(p.begin(), p.end());
    
    int sum = 0;
    for(int i=0; i<p.size(); i++){
        for(int j=i; j<p.size(); j++){
            sum += p[i];
        }
    }
    
    cout << sum;
    
    return 0;
}