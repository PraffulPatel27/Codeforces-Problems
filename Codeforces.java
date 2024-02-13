import java.util.*;

public class Codeforces {
    public static void solve() {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int k = scanner.nextInt();
        int[] a = new int[n];
        int[] b = new int[m];
        
        for (int i = 0; i < n; i++)
            a[i] = scanner.nextInt();
        for (int i = 0; i < m; i++)
            b[i] = scanner.nextInt();

        Arrays.sort(a);
        Arrays.sort(b);

        Set<Integer> st1 = new HashSet<>();
        Set<Integer> st2 = new HashSet<>();

        for (int i = 0; i < n; i++) {
            if (a[i] <= k)
                st1.add(a[i]);
        }

        for (int j = 0; j < m; j++) {
            if (b[j] <= k)
                st2.add(b[j]);
        }

        if (st1.size() < k / 2 || st2.size() < k / 2)
            System.out.println("NO");
        else {
            boolean f = true;
            Set<Integer> s = new HashSet<>(st1);
            s.addAll(st2);

            for (int i = 1; i <= k; i++) {
                if (!s.contains(i)) {
                    f = false;
                    break;
                }
            }

            if (f)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            solve();
        }
    }
}
