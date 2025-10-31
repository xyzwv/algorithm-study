#include <bits/stdc++.h>

using namespace std;

int backtracking(vector<int> numbers, int target, int index, int sum) {
    if(index == numbers.size()) {
        return target == sum;
    }
    
    return backtracking(numbers, target, index + 1, sum + numbers[index])
        + backtracking(numbers, target, index + 1, sum - numbers[index]);
}

int solution(vector<int> numbers, int target) {
    return backtracking(numbers, target, 0, 0);
}