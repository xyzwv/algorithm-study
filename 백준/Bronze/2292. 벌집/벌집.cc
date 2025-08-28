#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int ring = 1, sum = 1;
    while(N > sum) {
        sum += ring * 6;
        ring++;
    }
    
    cout << ring;

    return 0;
}