import java.util.*;

class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int[] answer = new int[2];
        int max = 0, min = 0;
        
        for(int num : win_nums) {
            if(Arrays.stream(lottos).anyMatch(x -> x == num)) min++; 
        }
        
        int zerocnt = (int) Arrays.stream(lottos).filter(x -> x == 0).count();
        
        max = min + zerocnt;
        
        answer[0] = (max >= 2) ? 7 - max : 6;
        answer[1] = (min >= 2) ? 7 - min : 6;
        
        return answer;
    }
}