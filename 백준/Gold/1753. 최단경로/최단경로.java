import java.util.*;
import java.io.*;

public class Main
{
    static class Node {
        int to;
        int w;
        Node(int to, int w) {
            this.to = to;
            this.w = w;
        }
    }
    
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        int V = Integer.parseInt(st.nextToken());
        int E = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(br.readLine());
        
        List<List<Node>> graph = new ArrayList<>();
        for(int i=0; i <= V; i++) {
            graph.add(new ArrayList<>());
        }
        int u, v, w;
        for(int i=0; i<E; i++) {
            st = new StringTokenizer(br.readLine());
            u = Integer.parseInt(st.nextToken());
            v = Integer.parseInt(st.nextToken());
            w = Integer.parseInt(st.nextToken());
            graph.get(u).add(new Node(v, w));
        }
        
        final int INF = Integer.MAX_VALUE;
        int[] dist = new int[V+1];
        Arrays.fill(dist, INF);
        dist[K] = 0;
        
        // (정점, 정점과 시작점 사이의 거리)
        PriorityQueue<Node> pq = new PriorityQueue<>((a, b) -> Integer.compare(a.w, b.w));
        pq.offer(new Node(K, 0));
        
        while(!pq.isEmpty()) {
            Node cur = pq.poll();
            int now = cur.to;
            int d = cur.w;
            
            if(d > dist[now]) continue;
            
            for(Node next : graph.get(now)) {
                int nd = d + next.w;
                if(nd < dist[next.to]) {
                    dist[next.to] = nd;
                    pq.offer(new Node(next.to, nd));
                }
            }
        }
        
        StringBuilder sb = new StringBuilder();
        for(int i=1; i<=V; i++) {
            if(dist[i] == INF) sb.append("INF\n");
            else sb.append(dist[i]).append("\n");
        }
        System.out.print(sb.toString());
        
	}
}
