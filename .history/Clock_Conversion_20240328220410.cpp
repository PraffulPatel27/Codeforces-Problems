#include <stdio.h>

void convertTime(int hh, int mm) {
    char period[] = "AM";
    if (hh >= 12) {
        strcpy(period, "PM");
        if (hh > 12) {
            hh -= 12;
        }
    }
    if (hh == 0) {
        hh = 12;
    }
    printf("%02d:%02d %s\n", hh, mm, period);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[6];
        scanf("%s", s);
        int hh = (s[0] - '0') * 10 + (s[1] - '0');
        int mm = (s[3] - '0') * 10 + (s[4] - '0');
        convertTime(hh, mm);
    }

    return 0;
}
