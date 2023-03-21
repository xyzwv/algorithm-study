import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n1, n2, n3, num, i;
		int [] ar = new int[10];
		
		n1 = sc.nextInt();
		n2 = sc.nextInt();
		n3 = sc.nextInt();
		
		num = n1*n2*n3;
		
		for(i=num; i>0; i/=10) {
			ar[i%10]++;
		}
		
		for(i=0; i<10; i++)
			System.out.println(ar[i]);
	}

}
