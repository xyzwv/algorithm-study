#include <vector>
using namespace std;

int backtracking(int row, int n, vector<bool>& column, vector<bool>& diag_up, vector<bool>& diag_down) {
    if(row == n) return 1;
    
    int ans = 0;
    for(int col=0; col<n; col++){
        // 퀸 놓을 수 없음
        if(column[col] || diag_up[row+col] || diag_down[row-col + n-1]) {
            continue;
        }
        
        // 퀸 배치
        column[col] = true;
        diag_up[row+col] = true;
        diag_down[row-col + n-1] = true;
        
        ans += backtracking(row+1, n, column, diag_up, diag_down);
        
        // 다음 탐색을 위해 퀸 회수
        column[col] = false;
        diag_up[row+col] = false;
        diag_down[row-col + n-1] = false;
    }
    return ans;
}

int solution(int n)
{
    vector<bool> column(n, false);
    vector<bool> diag_up(2*n-1, false);
    vector<bool> diag_down(2*n-1, false);

    return backtracking(0, n, column, diag_up, diag_down);
}