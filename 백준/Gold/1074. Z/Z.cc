#include <bits/stdc++.h>

using namespace std;

int solution(int n, int r, int c) {
    if(n == 0) return 0;

    int half = 1 << (n - 1);
    int size = half * half;

    if(r < half && c < half) { //좌상
        return solution(n - 1, r, c);
    } else if(r < half && c >= half) { //우상
        return size + solution(n - 1, r, c - half);
    } else if(r >= half && c < half) { //좌하
        return 2 * size + solution(n - 1, r - half, c);
    } else { //우하
        return 3 * size + solution(n - 1, r - half, c - half);
    }
}

int main() {
    int N, r, c;
    cin >> N >> r >> c;
    cout << solution(N, r, c);
}