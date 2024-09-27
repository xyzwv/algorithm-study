#include <iostream>
#include <vector>
#include <algorithm> // for min and max
using namespace std;

int solution(vector<vector<int>> board) {
    int ans = 0;
    int rows = board.size();
    int cols = board[0].size();

    // DP 테이블 초기화
    vector<vector<int>> dp(rows+1, vector<int>(cols+1, 0));

    // DP 계산
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (board[i - 1][j - 1]) {
                dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
            }
            ans = max(ans, dp[i][j]);
        }
    }

    // 최대 정사각형의 넓이 반환
    return ans * ans;
}