#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int v[n];
        int ma[n]; // Using array instead of map since map is not available in C
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            v[i] = x;
            ma[x]++;
        }

        int distinct_elements = 0;
        for (int i = 0; i < n; i++) {
            if (ma[i] > 0) {
                distinct_elements++;
            }
        }

        if (distinct_elements == 1) {
            printf("-1\n");
            continue;
        }

        int x = v[0];
        int ix = 0;
        int ans = n;

        for (int i = 0; i < n; i++) {
            if (v[i] == v[0]) {
                ix++;
            } else {
                if (ix < ans) {
                    ans = ix;
                }
                ix = 0;
            }
        }
        if (ix < ans) {
            ans = ix;
        }

        printf("%d\n", ans);
    }

    return 0;
}
