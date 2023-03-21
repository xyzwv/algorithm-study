import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int paperNumber = sc.nextInt();

		int[][] locations = new int[paperNumber][2];
		for (int i = 0; i < paperNumber; i++) {
			locations[i][0] = sc.nextInt();
			locations[i][1] = sc.nextInt();
		}

		boolean[][] base = new boolean[100][100];
		Integer answer = 0;

		Integer count = 0;
		while (count < paperNumber) {
			int x = locations[count][0];
			int y = locations[count][1];
			for (int i = x; i < x + 10; i++)
				for (int j = y; j < y + 10; j++)
					if (!base[i][j]) {
						base[i][j] = true;
						answer++;
					}
			count++;
		}

		System.out.println(answer);
	}
}