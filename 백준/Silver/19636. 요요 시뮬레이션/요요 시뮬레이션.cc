#include <iostream>
#include <cmath>
using namespace std;

int w0, l0, t, d, l, a;
int wn, wc, lc;

bool dietWithNoChange(int day, bool death){
    while(day++ < d){
        wn += (l-l0-a);
        if(wn <= 0) {
            death = true;
            break;
        }
    }
    
    return death;
}

bool dietWithChange(int day, bool death){
    lc = l0;

    while(day++ < d){
        int diff = l-lc-a;
        wc += diff;
        
        if(abs(diff) > t) {
            lc += floor((float)diff/2);
        }

        if(wc <= 0 || lc <= 0) {
            death = true;
            break;
        }
    }

    return death;
}

void diet(){
    wn = wc = w0;

    if(dietWithNoChange(0, false)) cout << "Danger Diet\n";
    else cout << wn << " " << l0 << "\n";

    if(dietWithChange(0, false)) cout << "Danger Diet\n";
    else {
        cout << wc << " " << lc << " ";
        if(l0 > lc) cout << "YOYO";
        else cout << "NO";
    }

}

int main() {
    cin >> w0 >> l0 >> t >> d >> l >> a;
    diet();
    return 0;
}