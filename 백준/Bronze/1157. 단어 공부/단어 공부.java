import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		String str = sc.next();
		int [] ar = new int [26];
		int i;
		
		for(i=0; i<str.length(); i++) {  //대소문자 구별 안 함
			if('A'<=str.charAt(i) && str.charAt(i)<='Z')  //대문자일 때
				ar[str.charAt(i) - 'A']++;  //(해당 대문자-A) = 배열 인덱스
			else  //소문자일 때
				ar[str.charAt(i) - 'a']++;  //(해당 소문자-a) = 배열 인덱스
		}
		
		int max = -1;
		char ch = '?';
		
		for(i=0; i<26; i++) {
			if(max < ar[i]) {
				max = ar[i];
				ch = (char)(i+65);
			}
			else if(max == ar[i]) {
				ch = '?';
			}
		}
		
		System.out.println(ch);
	}

}
