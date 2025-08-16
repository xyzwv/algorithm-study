#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, T, P;
    int tsize[6];
    int tmin = 0, pd = 0, pr = 0;
    
    cin >> N;
    for(int i=0; i<6; i++) cin >> tsize[i];
    cin >> T >> P;
    
    for(int i=0; i<6; i++) {
        tmin += ceil((double)tsize[i]/T);
    }
    pd = N / P;
    pr = N % P;
    
    cout << tmin << "\n" << pd << " " << pr;

    return 0;
}