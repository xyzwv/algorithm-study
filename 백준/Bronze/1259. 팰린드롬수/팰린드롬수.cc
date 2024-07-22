#include <bits/stdc++.h>
using namespace std;

int main() {
    while(true){
        string line;
        cin >> line;
        if(line == "0") break;
        
        bool res = true;
        int i, j=line.size()-1;
        for(i=0; i<line.size()/2; i++){
            if(line.at(i) != line.at(j)) res = false;
            j--;
        }
        
        if(res) cout << "yes" << endl;
        else cout << "no" << endl;
    }
	
    return 0;
}