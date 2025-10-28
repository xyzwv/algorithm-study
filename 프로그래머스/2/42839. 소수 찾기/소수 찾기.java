import java.util.*;

class Solution {
    public int solution(String numbers) {
        int answer = 0;
        Set<Integer> made = new HashSet<>();
        boolean[] used = new boolean[numbers.length()];
        
        dfs("", numbers, used, made);
        
        for(int x : made) {
            if(isPrime(x)) answer++;
        }
        
        return answer;
    }
    
    void dfs(String cur, String numbers, boolean[] used, Set<Integer> made) {
        if(!cur.isEmpty()) made.add(Integer.parseInt(cur));
        
        for(int i=0; i<numbers.length(); i++) {
            if(used[i]) continue;
            used[i] = true;
            dfs(cur + numbers.charAt(i), numbers, used, made);
            used[i] = false;
        }
    }
    
    boolean isPrime(int num) {
        if(num < 2) return false;
        if(num == 2) return true;
        if(num % 2 == 0) return false;
        for(int i=3; i<=(int)Math.sqrt(num); i++) {
            if(num % i == 0) return false;
        }
        return true;
    }
}