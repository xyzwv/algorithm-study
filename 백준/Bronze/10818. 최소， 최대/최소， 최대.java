import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		int num, max, min;
		int [] ar = new int[1000001];
		
		num = sc.nextInt();
		for(int i=0; i<num; i++)
			ar[i] = sc.nextInt();
		
		min = ar[0];
		for(int i=0; i<num; i++) {
			if(min > ar[i])
				min = ar[i];
		}
		System.out.print(min);
		System.out.print(" ");
				
		max = ar[0];
		for(int i=0; i<num; i++) {
			if(max < ar[i])
				max = ar[i];
		}
		System.out.print(max);
		
	}

}
