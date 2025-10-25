import java.util.*;
class Solution {
    public int[] solution(int[] num_list) {
        int len = num_list.length;
        int last = num_list[len - 1];
        int prev = num_list[len - 2];
        
        int[] answer = Arrays.copyOf(num_list, len + 1);
        if(last > prev) answer[len] = last - prev;
        else answer[len] = last * 2;
        
        return answer;
    }
}