import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        String[] strarr = s.split(" ");
        int[] arr = new int[strarr.length];
        
        for(int i=0; i<strarr.length; i++) arr[i] = (Integer.parseInt(strarr[i]));
        
        int max = Arrays.stream(arr).max().getAsInt();
        int min = Arrays.stream(arr).min().getAsInt();
        
        return min + " " + max;
    }
}