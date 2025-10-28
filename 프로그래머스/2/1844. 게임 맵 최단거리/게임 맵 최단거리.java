import java.util.*;

class Node {
    int x;
    int y;
    
    Node(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

class Solution {
    public int solution(int[][] maps) {
        int answer = -1;
        int n = maps.length, m = maps[0].length;
        int[][] dist = new int[n][m];
        
        int[] dx = {-1, 0, 0, 1};
        int[] dy = {0, -1, 1, 0};
        
        Queue<Node> q = new LinkedList<>();
        q.offer(new Node(0, 0));
        dist[0][0] = 1;
        
        while(!q.isEmpty()) {
            int x = q.peek().x;
            int y = q.peek().y;
            q.poll();
            
            if(x == n - 1 && y == m - 1) {
                answer = dist[x][y];
                break;
            }
            
            for(int i=0; i<4; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                if(nx < 0 || nx >= n || ny < 0 || ny >= m || maps[nx][ny] == 0 || dist[nx][ny] != 0) continue;
                q.offer(new Node(nx, ny));
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
        
        return answer;
    }
}