import java.util.Scanner;

public class Main {
	public static void main(String [] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int [] lev = new int[3]; //난이도
		for(int i=0; i<3; i++) {
			lev[i] = sc.nextInt();
		}
		
		int club = sc.nextInt(); //동아리수
		
		int [] score = new int[3*club]; //한줄당 점수
		int [] clubScore = new int[club]; //동아리당 점수
		
		int [][] skill = new int[3*club][3]; //기술사용정보		
		
		int k=0; 
		
		for(int i=0; i<3*club; i++) {
			for(int j=0; j<3; j++) {
				skill[i][j] = sc.nextInt();
				score[i] += skill[i][j]*lev[j];
			}
			if(i%3 == 2) {
				for(int j=i-2; j<=i; j++) {
					clubScore[k] += score[j];
				}
				k++;
			}
			
		}
		
		int max = clubScore[0];
		
		for(int i=1; i<club; i++) {
			if(max < clubScore[i]) {
				max = clubScore[i];
			}
		}
		
		System.out.println(max);
	}
}