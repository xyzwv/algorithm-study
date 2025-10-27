class Solution {
    public int solution(String before, String after) {
        int[] cnt_before = new int[27];
        int[] cnt_after = new int[27];
        for(int i=0; i<before.length(); i++) {
            cnt_before[before.charAt(i) - 'a']++;
            cnt_after[after.charAt(i) - 'a']++;
        }
        
        for(int i=1; i<27; i++) {
            if(cnt_before[i] != cnt_after[i]) return 0;
        }
        return 1;
    }
}