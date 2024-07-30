#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a+b-c << endl;
    
    string s = to_string(a).append(to_string(b));
    cout << stoi(s) - c;

    return 0;
}