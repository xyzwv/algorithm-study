#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string makeNewHalf(int* alphabet) {
    string result = "";
    
    for(int i = 0; i < 26; i++) {
        if(alphabet[i] == 0) continue;
        
        for(int j = 0; j < alphabet[i] / 2; j++){
            result += (char)('A' + i);
        }
    }
    
    return result;
}

string makeRestHalf(string str, bool is_odd) {
    int start = (is_odd) ? str.size() - 2 : str.size() - 1;
    for(int i = start; i >= 0; i--) {
        str += str[i];
    }
    return str;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int i;
    string input, answer="";
    int alphabet[26];
    for(i=0; i<26; i++) {
        alphabet[i] = 0;
    }
    
    // 입력
    cin >> input;
    
    // 연산
    i=0;
    while(i < input.size()) {
        alphabet[input[i++] - 'A']++;
    }
    
    int odd_count = 0;
    int odd_idx = 0;
    for(i=0; i<26; i++) {
        if(alphabet[i] % 2 == 1) {
            odd_count++;
            odd_idx = i;
        }
    }
    
    if(odd_count >= 2) { // 홀수개인 알파벳이 2개 이상
        cout << "I'm Sorry Hansoo";
        return 0;
    } else if(odd_count == 1) { // 홀수개인 알파벳이 1개
        alphabet[odd_idx]--;
        answer += makeRestHalf(makeNewHalf(alphabet) + (char)('A' + odd_idx), true);
    } else { // 모든 알파벳이 짝수개
        answer = makeRestHalf(makeNewHalf(alphabet), false);
    }
    
    // 출력
    cout << answer;
    
    return 0;
}