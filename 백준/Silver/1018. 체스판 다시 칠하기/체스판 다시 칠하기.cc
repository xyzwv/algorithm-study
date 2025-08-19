#include <iostream>
#include <vector>

using namespace std;

vector<string> board;

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

int diffBW(int r, int c) {
    int diff = 0;
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(board[r+i][c+j] != BW[i][j]) diff++;
        }
    }
    return diff;
}

int diffWB(int r, int c) {
    int diff = 0;
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(board[r+i][c+j] != WB[i][j]) diff++;
        }
    }
    return diff;
}

int main()
{
    int N, M;
    cin >> N >> M;
    cin.ignore();
    
    for(int i=0; i<N; i++) {
        string s;
        cin >> s;
        board.push_back(s);
    }
    
    int minDiff = 100;
    for(int i=0; i+8<=N; i++) {
        for(int j=0; j+8<=M; j++) {
            int diff = min(diffBW(i, j), diffWB(i, j));
            if(diff < minDiff) minDiff = diff;
        }
    }
    
    cout << minDiff;
    
    return 0;
}