class Solution {
    public int solution(int a, int b, int c, int d) {
        int[] cnt = new int[7];
        int num = 0, max = 0;
        int p = 0, q = 0;
        
        cnt[a]++; cnt[b]++; cnt[c]++; cnt[d]++;
        
        for(int i=1; i<7; i++) {
            if(cnt[i] > 0) num++;
            if(num > cnt[max]) max = i;
        }
        
        if(num == 1) return 1111 * max;
        if(num == 2 && cnt[max] == 3) {
            p = max;
            for(int i=1; i<7; i++) {
                if(cnt[i] == 1) {
                    q = i;
                    break;
                }
            }
            return (10 * p + q) * (10 * p + q);
        }
        if(num == 2 && cnt[max] == 2) {
            p = max;
            for(int i=1; i<7; i++) {
                if(cnt[i] == 2 && i != p) {
                    q = i;
                    break;
                }
            }
            return (p + q) * Math.abs(p - q); 
        }
        if(num == 3) {
            int answer = 1;
            for(int i=1; i<7; i++) {
                if(cnt[i] == 1) answer *= i;
            }
            return answer;
        }
        if(num == 4) {
            for(int i=1; i<7; i++) {
                if(cnt[i] == 1) return i;
            }
        }
        return 0;
    }
}