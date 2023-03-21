import java.util.Scanner;


public class Main {


	public static void earlierAlarm(int H, int M) {
		int h = H;
		int m = 60 + M - 45;
		
		if(m >= 60) {
			m -= 60;
		}
		else {
			if(h == 0) {
				h = 23;
			}
			else
				h -= 1;
		}
		
		System.out.println(h + " " + m);	
		
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		int H = sc.nextInt();
		int M = sc.nextInt();
				
		earlierAlarm(H, M);
	}

}