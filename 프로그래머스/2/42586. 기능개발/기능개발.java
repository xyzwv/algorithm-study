import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        List<Integer> answer = new ArrayList<>();
        Queue<Integer> q = new LinkedList<>();
        
        for(int i=0; i<progresses.length; i++) {
            int progress = progresses[i];
            int speed = speeds[i];
            int j=0;
            while(progress < 100) {
                progress += speed;
                j++;
            }
            q.offer(j);
            
        }
        
        while(!q.isEmpty()) {
            int front = q.peek();
            q.poll();
            int cnt = 1;
            
            while(!q.isEmpty() && q.peek() <= front) {
                q.poll();
                cnt++;
            }
            
            answer.add(cnt);
        }
        
        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
}