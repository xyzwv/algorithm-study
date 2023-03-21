import java.util.*;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		Integer number = sc.nextInt();
		String str = number.toString();
		
		Integer answer = 0;
        
        List<Integer> list = new ArrayList<>();

        for(int i=0; i<str.length(); i++){
            list.add(Integer.parseInt(str.substring(i,i+1)));
        }

        list.sort(Comparator.naturalOrder());

        for(int i=0; i<list.size(); i++){
            answer += (int)(list.get(i)*Math.pow(10, i));
        }
        
        System.out.println(answer);
	}

}
