import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		int [][] arr = new int [300][300];
		int n, m, row, col, num, sum;

		n = sc.nextInt();
		m = sc.nextInt();
		
		for(row=0; row<n; row++) {
			for(col=0; col<m; col++) {
				arr[row][col] = sc.nextInt();
			}
		}
		
		int k = sc.nextInt();
			
		
		for(num=0; num<k; num++) {
			sum = 0;
			
			int i = sc.nextInt();
			int j = sc.nextInt();
			int x = sc.nextInt();
			int y = sc.nextInt();
			
			for(row=i-1; row<=x-1; row++) {
				for(col=j-1; col<=y-1; col++) {					
					sum += arr[row][col];					
				}
			}
			
			System.out.println(sum);
		}
	}

}
