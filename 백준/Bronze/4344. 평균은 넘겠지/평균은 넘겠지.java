import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		int [][] ar = new int[1001][1001];
		int [] sum = new int[1001];
		double [] average = new double[1001];
		double [] rateOver = new double[1001];
		int i, j, count = 0;
		
		for(i=0; i<ar.length; i++)
			for(j=0; j<ar[i].length; j++)
				ar[i][j] = 0;
		
		ar[0][0] = sc.nextInt();
		
		for(i=1; i<=ar[0][0]; i++) {
			ar[i][0] = sc.nextInt();
			for(j=1; j<=ar[i][0]; j++) {
				ar[i][j] = sc.nextInt();
			}
		}
		
		for(i=1; i<=ar[0][0]; i++) {
			for(j=1; j<=ar[i][0]; j++) {
				sum[i] += ar[i][j];
			}
			
			average[i] = sum[i] / ar[i][0];
					
		}
		
		
		for(i=1; i<=ar[0][0]; i++) {
			for(j=1; j<=ar[i][0]; j++) {
				if(ar[i][j] > average[i]) {
					count++;
				}
			}
			rateOver[i] = ( (double)count/(double)ar[i][0] ) * 100;
			
			System.out.printf("%.3f", rateOver[i]);
			System.out.println("%");
			
			count = 0;
		}
	}

}