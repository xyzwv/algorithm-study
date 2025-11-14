import java.util.*;
import java.io.*;

public class Main
{
	public static void main(String[] args) throws Exception {
		int ans = 0;
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        
        int[][] schedule = new int[N][2];
        for(int i=0; i<N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            schedule[i][0] = Integer.parseInt(st.nextToken());
            schedule[i][1] = Integer.parseInt(st.nextToken());
        }
        
        Arrays.sort(schedule, (x, y) -> (x[0] - y[0]));
        
        // min heap
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.offer(schedule[0][1]); // 끝나는 시간
        
        for(int i=1; i<N; i++) {
            if(pq.peek() <= schedule[i][0]) {
                pq.poll();
            }
            pq.offer(schedule[i][1]);
        }
        
        System.out.println(pq.size());
	}
}
