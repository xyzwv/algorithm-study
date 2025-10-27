import java.lang.Math;

class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        int i = 1, j = 1;
        for(int k = num_list.length - 1; k >= 0; k--) {
            int x = num_list[k];
            if(x % 2 == 0) {
                answer += x * i;
                i *= 10;
            } else {
                answer += x * j;
                j *= 10;
            }
        }
        return answer;
    }
}