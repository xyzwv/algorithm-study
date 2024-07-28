#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alphabet[26] = {0};
    string word;
    cin >> word;
    for(int i=0; i<word.size(); i++){
        word[i] = tolower(word[i]);
        alphabet[word[i] - 97]++;
    }
    
    int max = -1;
    char res = '?';
    for(int i=0; i<26; i++){
        if(max < alphabet[i]) {
            max = alphabet[i];
            res = (char)(i + 65);
        }
        else if(max == alphabet[i]) {
            res = '?';
        }
    }
    
    cout << res;

    return 0;
}