#include <iostream>

using namespace std;

int getSum(int num) {
    int sum = num;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    string s;
    cin >> s;
    
    int num = stoi(s);
    int start = num - s.size() * 9;
    int ans = 0;
    for(int i=start; i<=num; i++) {
        if(getSum(i) == num) {
            ans = i;
            break;
        }
    }
    
    cout << ans;
    
    return 0;
}