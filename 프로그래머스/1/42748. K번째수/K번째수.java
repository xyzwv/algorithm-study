import java.util.*;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        List<Integer> list = new ArrayList<>();
        
        for(int i=0; i<commands.length; i++) {
            int[] part = Arrays.copyOfRange(array, commands[i][0] - 1, commands[i][1]);
            int k = commands[i][2];
            
            PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
            for(int x : part) {
                pq.offer(x);
                if(pq.size() > k) pq.poll();
            }
            list.add(pq.peek());
        }
        
        return list.stream().mapToInt(Integer::intValue).toArray();
    }
}