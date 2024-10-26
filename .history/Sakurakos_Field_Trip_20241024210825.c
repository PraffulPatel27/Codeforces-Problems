#include <stdio.h>
#include <stdlib.h>

typedef long long II;
const int N = 200005; // 2e5 + 5

int main() {
    int tc;
    scanf("%d", &tc); // Read the number of test cases

    while (tc--) {
        int n;
        scanf("%d", &n); // Read the size of the array

        int *a = (int *)malloc((n + 1) * sizeof(int)); // Dynamic allocation for array
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]); // Read the array elements
        }

        for (int i = 2; i <= n / 2; i++) {
            if (a[i] == a[i - 1] || a[n - i + 1] == a[n - i + 2]) {
                // Swap elements
                int temp = a[i];
                a[i] = a[n - i + 1];
                a[n - i + 1] = temp;
            }
        }

        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i + 1]) {
                ans++; 
            }
        }

        printf("%d\n", ans); // Output the result
        free(a); // Free the allocated memory
    }

    return 0;
}