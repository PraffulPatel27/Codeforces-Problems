#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char shach[] = "##";
        char sdot[] = "..";
        char sthach[100] = "";
        char stdot[100] = "";
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                strcat(sthach, shach);
                strcat(stdot, sdot);
            } else {
                strcat(sthach, sdot);
                strcat(stdot, shach);
            }
        }
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                printf("%s\n", sthach);
                printf("%s\n", sthach);
            } else {
                printf("%s\n", stdot);
                printf("%s\n", stdot);
            }
        }
    }
    
    return 0;
}