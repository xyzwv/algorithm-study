import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner scanner = new Scanner(System.in);
		String word = scanner.next();;
		
		for(int i=0; i<word.length(); i++) {
			System.out.print(word.charAt(i));
			if(i%10 == 9)
				System.out.println();
		}
		
	}

}
