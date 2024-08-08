#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int h, w, n;
        cin >> h >> w >> n;

        int floor, room;
        floor = (n % h) == 0 ? h : (n % h);
        room = (n - 1) / h + 1;

        cout << floor * 100 + room << "\n";
    }
}