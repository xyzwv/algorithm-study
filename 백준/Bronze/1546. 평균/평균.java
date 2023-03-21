import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		double [] arr = new double[n];
		
		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
		}
		
		double max = arr[0];
		for(int i=0; i<n; i++) {
			if(max < arr[i])
				max = arr[i];
		}
		
		for(int i=0; i<n; i++) {
			arr[i] = arr[i]/max*100;
		}
		
		double sum=0;
		for(int i=0; i<n; i++) {
			sum += arr[i];
		}
		
		System.out.println(sum/n);
	}

}
