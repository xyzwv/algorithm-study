#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    set<string> not_heard, both;
    string name;
    while(n--){
        cin >> name;
        not_heard.insert(name);
    }
    
    while(m--){
        cin >> name;
        if(not_heard.count(name)) both.insert(name);
    }
    
    cout << both.size() << "\n";
    for(auto& it : both) {
        cout << it << "\n";
    }
    
    return 0;
}