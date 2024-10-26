#include <stdio.h>
#include <stdlib.h>
typedef long long ll;
int init(int *a, int n) {
    int *mp = (int *)malloc(200001 * sizeof(int)); 
    for (int i = 0; i < 200001; i++) {
        mp[i] = -2; 
    }

    int ps = 0; 
    int cnt = 0; 
    int lastS = -1;

    mp[0] = -1;

    for (int i = 0; i < n; i++) {
        ps += a[i];

        if (ps >= 0 && ps < 200001 && mp[ps] != -2) {
            int prevIdx = mp[ps];
            if (prevIdx >= lastS) {
                cnt++; 
                lastS = i; 
        }
        if (ps >= 0 && ps < 200001) {
            mp[ps] = i;
        }
    }

    free(mp); 
    return cnt; 
}
void solution() {
    
}

int main() {
    ll t;
    scanf("%lld", &t);

    while (t--) {
        ll n; 
        scanf("%lld", &n);
        int *a = (int *)malloc(n * sizeof(int));

        for (ll i = 0; i < n; i++) {
           scanf("%d", &a[i]); 
        }

       ll ans = init(a, n); 
       printf("%lld\n", ans); 

    free(a); 
    }
    return 0;
}