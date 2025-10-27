import java.util.*;
class Solution {
    public int[] solution(int[] answers) {
        List<Integer> answer = new ArrayList<>();
        
        int[] s1 = {1, 2, 3, 4, 5};
        int[] s2 = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] s3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        
        int[] cnt = new int[3];
        for(int i=0; i<answers.length; i++) {
            int ans = answers[i];
            if(ans == s1[i % s1.length]) cnt[0]++;
            if(ans == s2[i % s2.length]) cnt[1]++;
            if(ans == s3[i % s3.length]) cnt[2]++;
        }
        
        int max = Arrays.stream(cnt).max().orElse(0);
        
        for(int i=0; i<3; i++) {
            if(cnt[i] == max) answer.add(i+1);
        }
        
        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
}