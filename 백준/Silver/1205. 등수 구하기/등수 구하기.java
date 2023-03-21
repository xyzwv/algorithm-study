import java.util.*;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int tsScore = sc.nextInt();
		int p = sc.nextInt();
		
		if(n==0)
			System.out.println(1);
		else {
			List<Integer> list = new ArrayList<Integer>();
			int i;
			for(i=0; i<n; i++)
				list.add(sc.nextInt());
			
			if(p == n) {
				List<Integer> count = new ArrayList<Integer>();
				for(i=0; i<list.size(); i++) {
					if(list.get(i) == tsScore) {
						count.add(i);
					}
					if(list.get(i) < tsScore) {
						if(count.size() == 0) {
							System.out.println(i+1);
							return;
						}
						else {
							System.out.println(count.get(0)+1);
							return;
						}
							
					}
				}			
				
				System.out.println(-1);
			}
			
			else {
				for(i=0; i<list.size(); i++) {
					if (list.get(i) <= tsScore) {
						System.out.println(i+1);
						return;
					}
				}				
				
				System.out.println(i+1);
				
			}
			
				
		}

	}

}
