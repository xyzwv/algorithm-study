#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, bool> pp;

string rotate_clockwise(string s){
    string result = s;
    char temp = s[s.size()-1];
    for(int i=0; i<s.size()-1; i++){
        result[i+1] = s[i];
    }
    result[0] = temp;
    return result;
}

string rotate_anticlockwise(string s){
    string result = s;
    char temp = s[0];
    for(int i=1; i<s.size(); i++){
        result[i-1] = s[i];
    }
    result[s.size()-1] = temp;
    return result;
}

string rotate(string s, bool clockwise){
    if(clockwise) return rotate_clockwise(s);
    else return rotate_anticlockwise(s);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t, k;
    vector<string> wheel;
    vector<pp> rotation;
    
    // 입력
    cin >> t;
    while(t--){  // N극은 0, S극은 1
        string s;
        cin >> s;
        wheel.push_back(s);
    }
    cin >> k;
    while(k--){
        int num, d;
        cin >> num >> d;
        bool clockwise = (d == 1) ? true : false;
        rotation.push_back({num, clockwise});
    }
    
    // 연산
    for(int i=0; i<rotation.size(); i++){
        int wheel_num = rotation[i].first - 1;
        
        string current = wheel[wheel_num];
        string left, right;
        
        char current_rc = current[2], current_lc = current[6];
        
        // current 회전
        bool is_clockwise = rotation[i].second;
        
        current = rotate(current, is_clockwise);
        wheel[wheel_num] = current;
        
        // right 회전
        int j = wheel_num + 1;
        bool right_clockwise = is_clockwise;
        while(j != wheel.size()) {
            right = wheel[j];
            
            if(current_rc == right[6]) break;
            
            current_rc = right[2];
            right = rotate(right, !right_clockwise);
            wheel[j++] = right;
            
            right_clockwise = !right_clockwise;
        }
        
        // left 회전
        j = wheel_num - 1;
        bool left_clockwise = is_clockwise;
        while(j >= 0) {
            left = wheel[j];
            
            if(current_lc == left[2]) break;
            
            current_lc = left[6];
            left = rotate(left, !left_clockwise);
            wheel[j--] = left;
            
            left_clockwise = !left_clockwise;
        }
    }
    
    // 출력
    int answer = 0;
    for(int i=0; i<wheel.size(); i++) {
        if(wheel[i][0] == '1') answer++;
    }
    cout << answer;
    
    return 0;
}