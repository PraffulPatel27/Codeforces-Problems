#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

// Function to initialize and count the required conditions
int init(int *a, int n) {
    int *mp = (int *)malloc(200001 * sizeof(int)); // Assuming the range of sums won't exceed 200000
    for (int i = 0; i < 200001; i++) {
        mp[i] = -2; // -2 indicates that the sum has not been seen yet
    }

    int ps = 0; // Prefix sum
    int cnt = 0; // Count of valid subarrays
    int lastS = -1; // Last index where a valid prefix sum was found

    mp[0] = -1; // Initialize for the case where the sum is zero

    for (int i = 0; i < n; i++) {
        ps += a[i]; // Update prefix sum

        // Check if the prefix sum has been seen before
        if (ps >= 0 && ps < 200001 && mp[ps] != -2) {
            int prevIdx = mp[ps];
            if (prevIdx >= lastS) {
                cnt++; // Increment the count
                lastS = i; // Update last index
            }
        }
        // Update the map with the current index
        if (ps >= 0 && ps < 200001) {
            mp[ps] = i;
        }
    }

    free(mp); // Free the allocated memory for the map
    return cnt; // Return the count
}

// Main function to read input and call the init function
void solution() {
    ll n; 
    scanf("%lld", &n); // Read the number of elements
    int *a = (int *)malloc(n * sizeof(int)); // Allocate memory for the array

    for (ll i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Read the array elements
    }

    ll ans = init(a, n); // Call the init function
    printf("%lld\n", ans); // Output the result

    free(a); 
}

int main() {
    solution(); 
    return 0;
}