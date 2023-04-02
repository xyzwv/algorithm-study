import java.util.*;

public class Main {
    static int white;
    static int blue;
    static int[][] paper;

    public static void countPaper(int x, int y, int n){
        for (int i=x; i<x+n; i++)
            for (int j=y; j<y+n; j++)
                if(paper[x][y] != paper[i][j]) {
                    n = n/2;
                    countPaper(x, y, n);
                    countPaper(x, y+n, n);
                    countPaper(x+n, y, n);
                    countPaper(x+n, y+n, n);
                    return;
                }

        if(paper[x][y] == 0)
            white++;
        else
            blue++;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        paper = new int[n][n];
        for (int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                paper[i][j] = sc.nextInt();

        countPaper(0, 0, n);

        System.out.println(white);
        System.out.println(blue);
    }
}
