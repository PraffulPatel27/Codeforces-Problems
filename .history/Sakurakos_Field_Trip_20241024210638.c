#include <stdio.h>
#include <stdlib.h>

const int N = 200005;
int n, m, a[N];

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int tc;
    scanf("%d", &tc);
    
    while (tc--) {
        int n;
        scanf("%d", &n);

        int *a = (int *)malloc((n + 1) * sizeof(int));

        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 2; i <= n / 2; i++) {
            if (a[i] == a[i - 1] || a[n - i + 1] == a[n - i + 2]) {
                swap(&a[i], &a[n - i + 1]);
            }
        }

        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i + 1]) {
                ans++;
            }
        }

        printf("%d\n", ans);
        free(a);
    }
    
    return 0;
}
