import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int [] num1 = new int[9];
		int [] num2 = new int[9];
		
		for(int i=0; i<9; i++) {
			num1[i] = sc.nextInt();
		}
		
		for(int i=0; i<9; i++) {
			num2[i] = num1[i];
		}
		
		int max = num1[0];
		for(int i=0; i<9; i++) {
			if(max < num1[i])
				max = num1[i];
		}
		
		System.out.println(max);
		
		for(int i=0; i<9; i++) {
			if(max == num2[i]) {
				System.out.println(i+1);
				break;
			}
		}
	}

}
