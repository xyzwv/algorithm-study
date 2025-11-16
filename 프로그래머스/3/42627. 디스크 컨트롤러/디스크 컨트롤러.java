import java.util.*;

class Solution {
    
    class Node {
        int o;
        int s;
        int l;
        
        Node(int o, int s, int l) {
            this.o = o;
            this.s = s;
            this.l = l;
        }
    }
    public int solution(int[][] jobs) {
        int n = jobs.length;
        
        Node[] sorted = new Node[n];
        for(int i=0; i<n; i++) {
            sorted[i] = new Node(i, jobs[i][0], jobs[i][1]);
        }
        
        Arrays.sort(sorted, (a, b) -> Integer.compare(a.s, b.s));
        
        PriorityQueue<Node> pq = new PriorityQueue<>((a, b) -> {
            if(a.l != b.l) return Integer.compare(a.l, b.l);
            if(a.s != b.s) return Integer.compare(a.s, b.s);
            return Integer.compare(a.o, b.o);
        });
        
        int time = sorted[0].s;
        int idx = 0;
        int done = 0;
        int total = 0;
        
        while(done < n) {
            while(idx < n && sorted[idx].s <= time) {
                pq.offer(sorted[idx++]);
            }
            
            if(!pq.isEmpty()) {
                Node cur = pq.poll();
                time += cur.l;
                total += (time - cur.s);
                done++;
            } else {
                time = sorted[idx].s;
            }
        }
        
        return total / n;
    }
}