#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(1){
        cin >> a >> b;
        if(cin.eof() == 1) break;
        cout << a + b << endl;
    }
    return 0;
}