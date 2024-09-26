#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, ans=0;
    cin >> n >> k;
    
    vector<bool> p(n, false);
    vector<bool> h(n, false);
    
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        (c == 'P') ? p[i]=true : h[i]=true;
    }
    
    for(int i=0; i<n; i++){
        if(!p[i]) continue;
        
        for(int j=i-k; j<=i+k; j++){
            if(h[j]){
                ans++;
                h[j] = false;
                break;
            }
        }
    }

    cout << ans;
    
    return 0;
}