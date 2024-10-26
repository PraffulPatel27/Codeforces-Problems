#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void solution() {
    long long n;
    scanf("%lld", &n);

    // Allocate memory for the 2D array
    long long **a = (long long **)malloc(n * sizeof(long long *));
    for (long long i = 0; i < n; i++) {
        a[i] = (long long *)malloc(n * sizeof(long long));
    }

    // Input the 2D array
    for (long long i = 0; i < n; ++i) {
        for (long long j = 0; j < n; ++j) {
            scanf("%lld", &a[i][j]);
        }
    }

    // Allocate memory for the 'd' array and initialize it with LLONG_MAX
    long long size_d = 2 * n - 1;
    long long *d = (long long *)malloc(size_d * sizeof(long long));
    for (long long i = 0; i < size_d; ++i) {
        d[i] = LLONG_MAX;
    }

    // Main logic
    for (long long i = 0; i < n; ++i) {
        for (long long j = 0; j < n; ++j) {
            long long index = i - j + n - 1;
            if (a[i][j] < d[index]) {
                d[index] = a[i][j];
            }
        }
    }

    // Count the sum of negative values in 'd'
    long long cnt = 0;
    for (long long i = 0; i < size_d; ++i) {
        if (d[i] < 0) {
            cnt -= d[i];
        }
    }

    // Output the result
    printf("%lld\n", cnt);

    // Free allocated memory
    for (long long i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);
    free(d);
}

int main() {
    
    return 0;
}