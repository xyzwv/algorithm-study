class Solution {
    public int solution(int a, int b) {        
        String x = String.valueOf(a) + String.valueOf(b);
        String y = String.valueOf(b) + String.valueOf(a);
        int ab = Integer.parseInt(x);
        int ba = Integer.parseInt(y);
        return (ab >= ba) ? ab : ba;
    }
}