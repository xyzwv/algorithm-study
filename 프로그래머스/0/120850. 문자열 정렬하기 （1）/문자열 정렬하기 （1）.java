import java.util.*;
class Solution {
    public int[] solution(String my_string) {
        List<Integer> list = new ArrayList<>();
        for(int i=0; i<my_string.length(); i++) {
            char c = my_string.charAt(i);
            if(c >= '0' && c <= '9') list.add(c - '0');
        }
        Collections.sort(list);
        return list.stream().mapToInt(Integer::intValue).toArray();
    }
}