import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char [] vowel = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
        List<Integer> list = new ArrayList<>();
        String msg;
        while(!(msg=sc.nextLine()).equals("#")){
            int count=0;
            for(int i=0; i<msg.length(); i++){
                for(int j=0; j<vowel.length; j++)
                    if(msg.charAt(i)==vowel[j])
                        count++;
            }
            list.add(count);
        }

        for(int i=0; i<list.size(); i++)
            System.out.println(list.get(i));
    }
}
