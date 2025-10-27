class Solution {
    public String solution(String a, String b) {
        if(a.length() < b.length()) {
            String tmp = a;
            a = b;
            b = tmp;
        }
        
        String ra = new StringBuilder(a).reverse().toString();
        String rb = new StringBuilder(b).reverse().toString();
        
        StringBuilder answer = new StringBuilder();
        int i = 0, sum = 0, carry = 0;
        for(; i<ra.length(); i++) {
            sum = carry + (ra.charAt(i) - '0');
            if(i < rb.length()) sum += rb.charAt(i) - '0';
            
            carry = (sum > 9) ? 1 : 0;
            sum %= 10;
            
            answer.append(sum);
        }
        
        if(carry > 0) answer.append(carry);
        
        return new StringBuilder(answer).reverse().toString();
    }
}