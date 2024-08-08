#include <iostream>
using namespace std;

int main()
{
    string input;
    string ascending = "12345678";
    string descending = "87654321";
    
    for(int i=0; i<8; i++){
        string s;
        cin >> s;
        input.append(s);
    }
    
    if(input == ascending) cout << "ascending";
    else if(input == descending) cout << "descending";
    else cout << "mixed";
    
    return 0;
}