import java.util.*;

public class Main {
    static int count = 0;
    static int input = 0;

    public static void selectSubsequence(int sum, int[] arr, int i){
        for(int j=i+1; j<arr.length; j++){
            sum+=arr[j];
            selectSubsequence(sum, arr, j);
            if(sum==input)
                count++;
            sum-=arr[j];
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        input = sc.nextInt();

        int [] arr = new int[size];
        for(int i=0; i<size; i++)
            arr[i] = sc.nextInt();

        //size C i
        for(int i=0; i<arr.length; i++){
            int sum=arr[i];
            selectSubsequence(sum, arr, i);
            if(sum==input)
                count++;
        }

        System.out.println(count);
    }
}
