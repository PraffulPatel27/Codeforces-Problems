#include <stdio.h>
#include <stdlib.h>
int init(int *a, int n) {
    int *mp = (int *)malloc((2 * n + 1) * sizeof(int)); 
    for (int i = 0; i < 2 * n + 1; i++) 
        mp[i] = -2;  

    int ps = 0;
    int cnt = 0;
    int lastS = -1;
    mp[n] = -1;  

    for (int i = 0; i < n; i++) {
        ps += a[i];

        if (mp[ps + n] != -2) {  
            int prevIdx = mp[ps + n];
            if (prevIdx >= lastS) {
                cnt++;
                lastS = i;
            }
        }
        mp[ps + n] = i;
    }

    free(mp); 
    return cnt;
}
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

    int *a = (int *)malloc(n * sizeof(int));
    for (long long i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long ans = init(a, n);
    printf("%lld\n", ans);

    free(a);
    }
    return 0;
}
