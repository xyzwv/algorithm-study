#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int result[26];
    fill(result, result+26, -1);
    
    cin >> word;
    
    for(int i=0; i<word.length(); i++){
        if(result[word[i]-'a'] == -1) {
            result[word[i]-'a'] = i;
        }
    }
    
    for(int i=0; i<26; i++){
        cout << result[i] << " ";
    }
    
    return 0;
}