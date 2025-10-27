class Solution {
    public int[][] solution(int n) {
        int[][] answer = new int[n][n];
        
        int cur = 0, max = n * n;
        int x = 0, y = 0, dir = 0;
        int[] dx = {0, 1, 0, -1};
        int[] dy = {1, 0, -1, 0};
        
        while(cur < max) {
            answer[x][y] = ++cur;
            
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= n || answer[nx][ny] != 0) {
                dir = (dir + 1) % 4;
                nx = x + dx[dir];
                ny = y + dy[dir];
            }
            
            x = nx;
            y = ny;
        }
        
        return answer;
    }
}