import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		List<String> values = new ArrayList<>();
		for(int i=0; i<5; i++)
			values.add(sc.nextLine());
		
		int max = values.get(0).length();
        for(int i = 1; i < values.size(); i++)
            if(max < values.get(i).length())
                max = values.get(i).length();

        String answer = "";

        for(int j = 0; j < max; j++) {
            for (int i = 0; i < values.size(); i++) {
                if(values.get(i).length() <= j)
                    continue;

                answer = answer.concat(values.get(i).substring(j, j + 1));
            }
        }
        
        System.out.println(answer);
	}
}
