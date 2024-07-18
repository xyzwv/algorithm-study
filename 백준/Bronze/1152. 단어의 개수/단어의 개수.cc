#include <iostream>
#include <string>
using namespace std;

int main() {
    int c=0;
    string s;
    getline(cin, s);
    
    if(s.size() == 1 && s.at(0) == ' ') {
        cout << 0;
        return 0;
    }
    
    for(int i=1; i<s.size()-1; i++){
        if(s.at(i) == ' ') c++;
    }
    
    cout << c+1;
    
    return 0;
}