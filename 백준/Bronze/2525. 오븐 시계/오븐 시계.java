import java.util.Scanner;

public class Main {
	public static void main(String [] args) {
		
		int h, m, time, min=0;
		
		Scanner sc = new Scanner(System.in);
		h = sc.nextInt();
		m = sc.nextInt();
		time = sc.nextInt();
		
		min = m+time;
		
		while(min >= 60) {
			min -= 60;
			h+=1;
		}
		
		while(h>=24)
			h-=24;
		
		System.out.print(h + " " + min);
		
	}
}