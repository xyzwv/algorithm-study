
import java.util.*;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		List<Integer> numbers = new ArrayList<>();
        int sum=0, average=0, median=0;
        
        Scanner sc = new Scanner(System.in);
        
        for(int i=0; i<5; i++)
        	numbers.add(sc.nextInt());
		
        
        // average
        for(int i=0; i<numbers.size(); i++)
            sum+=numbers.get(i);
        average=sum/numbers.size();
        
        
        // median
        numbers.sort(Comparator.naturalOrder());
        int index = numbers.size()/2;
        if(numbers.size()%2==0){
            median = (numbers.get(index-1) + numbers.get(index))/2;
        }
        else {
            median = numbers.get(index);
        }
        
        
        //print
        System.out.println(average);
        System.out.println(median);
	}

}
