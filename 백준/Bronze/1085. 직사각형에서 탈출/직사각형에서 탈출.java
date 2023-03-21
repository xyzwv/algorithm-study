import java.util.Scanner;

public class Main {
	public static void main(String [] args) {
		int x, y, w, h;
		Scanner sc = new Scanner(System.in);
		x = sc.nextInt();
		y = sc.nextInt();
		w = sc.nextInt();
		h = sc.nextInt();
		
		if(x <= w/2 && y<= h/2) {
			if(x >= y)
				System.out.println(y);
			else
				System.out.println(x);
		}
		else if(x <= w/2 && y>= h/2) {
			if(x >= (h-y))
				System.out.println(h-y);
			else
				System.out.println(x);
		}
		else if(x >= w/2 && y<= h/2) {
			if((w-x) >= y)
				System.out.println(y);
			else
				System.out.println(w-x);
		}
		else if(x >= w/2 && y>= h/2) {
			if((w-x) >= (h-y))
				System.out.println((h-y));
			else
				System.out.println((w-x));
		}
		
	}
}
