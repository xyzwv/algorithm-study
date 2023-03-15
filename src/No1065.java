import java.util.*;

public class No1065 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        if(num<100)
            System.out.println(num);
        else {
            int count=0;
            for(int i=100; i<=num; i++){
                int a = i/100;
                int b = (i%100)/10;
                int c = i%10;

                if((a-b) == (b-c))
                    count++;
            }

            System.out.println(count + 99);
        }
    }
}
