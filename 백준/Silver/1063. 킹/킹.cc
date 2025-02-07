#include <iostream>
using namespace std;
typedef pair<char, int> ci;

ci move(string dir, char col, int row) {
    for(char c : dir){
        switch(c){
            case 'R':
                col++; break;
            case 'L':
                col--; break;
            case 'B':
                row--; break;
            case 'T':
                row++; break;
        }
    }
    
    return {col, row};
}

bool isSame(ci king, ci stone) {
    return (king.first == stone.first && king.second == stone.second);
}

bool isValid(ci pos) {
    return (pos.first >= 'A' && pos.first <= 'H' && pos.second >= 1 && pos.second <= 8);
}

int main()
{
    int n;
    ci king, stone;
    string dir;
    
    cin >> king.first >> king.second >> stone.first >> stone.second >> n;
    
    for(int i=0; i<n; i++){
        cin >> dir;
        
        ci next_king, next_stone;
        
        next_king = move(dir, king.first, king.second);
        
        if(isSame(next_king, stone)){
            next_stone = move(dir, stone.first, stone.second);
        } else{
            next_stone = stone;
        }
        
        if(isValid(next_king) && isValid(next_stone)){
            king = next_king;
            stone = next_stone;
        }
    }
    
    cout << king.first << king.second << "\n" << stone.first << stone.second;

    return 0;
}