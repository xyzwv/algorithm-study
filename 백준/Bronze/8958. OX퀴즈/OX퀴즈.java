import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);		
		
		int num = sc.nextInt();
		
		String [] quiz = new String [num];
		
		
		String temp;
		if(sc.hasNextLine())
			temp = sc.nextLine();
		
		
	
		for(int i=0; i<num; i++) {
			quiz[i] = sc.nextLine();
		}
		
		
		for(int i=0; i<num; i++) {
			
			int count = 0;
			int sum = 0;
			
			for(int j=0; j<quiz[i].length(); j++) {
				if(quiz[i].charAt(j) == 'O')
					count++;
				else
					count = 0;
				
				sum += count;
			}
			
			System.out.println(sum);
			
			
		}
		
		
	}

}
