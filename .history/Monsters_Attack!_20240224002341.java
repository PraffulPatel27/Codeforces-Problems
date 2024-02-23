import java.util.*;
import java.io.*;
 
public class Monsters_Attack! {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
 
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt() {
            return Integer.parseInt(next());
        }
 
        long nextLong() {
            return Long.parseLong(next());
        }
 
        double nextDouble() {
            return Double.parseDouble(next());
        }
 
        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
 
    public static void main(String[] args) {
        FastReader reader = new FastReader();
        int t = reader.nextInt();
 
        while (t-- > 0) {
            solution(reader);
        }
    }
 
    static void solution(FastReader reader) {
        long n = reader.nextLong();
        long k = reader.nextLong();
        List<Long> arr1 = new ArrayList<>();
        List<Long> arr2 = new ArrayList<>();
        Map<Long, Long> mp = new HashMap<>();
 
        for (int i = 0; i < n; i++) {
            arr1.add(reader.nextLong());
        }
        for (int i = 0; i < n; i++) {
            arr2.add(reader.nextLong());
            mp.put(Math.abs(arr2.get(i)), mp.getOrDefault(Math.abs(arr2.get(i)), 0L) + arr1.get(i));
        }
 
        long health = k;
        for (long i = 1; i <= n; i++) {
            if (health < mp.getOrDefault(i, 0L)) {
                System.out.println("NO");
                return;
            }
            health -= mp.getOrDefault(i, 0L);
            health += k;
        }
        System.out.println("YES");
    }
}