import java.util.*;

public class Main {
	public static void main(String[] args) {
		List<Integer> a = new ArrayList<>();
		List<Integer> b = new ArrayList<>();
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		for (int i = 0; i < n; i++)
			a.add(sc.nextInt());
		for (int i = 0; i < n; i++)
			b.add(sc.nextInt());

		a.sort(Comparator.naturalOrder());
		b.sort(Comparator.reverseOrder());

		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += a.get(i) * b.get(i);
		
		System.out.println(sum);
	}

}
