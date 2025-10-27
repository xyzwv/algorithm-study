import java.util.*;

class Solution {
    public int[] solution(int[] numbers) {
        int[] answer = Arrays.copyOf(numbers, numbers.length);
        return Arrays.stream(answer).map(x -> x * 2).toArray();
    }
}