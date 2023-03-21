import java.util.Scanner;

public class Main {

	public static void smallerthanX(int n, int x, int [] ar) {
		int [] array = new int [n];
		int j=0, count=0;
		
		for(int i=0; i<n; i++)
			if(x > ar[i]) {
				array[j] = ar[i];
				j++;
				count++;
			}
		
		for(j=0; j<count; j++)
			System.out.print(array[j] + " ");
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int x = sc.nextInt();
		int [] ar = new int[n];
		int i;
		
		for(i=0; i<n; i++) {
			ar[i] = sc.nextInt();
		}
		
		smallerthanX(n, x, ar);
		
	}

}
