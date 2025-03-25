#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a1, a2, a4, a5;
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);

        int a = a1 + a2, b = a4 - a2, c = a5 - a4;

        if (a == b && b == c) {
            printf("3\n");
        } else if (a == b || b == c || a == c) {
            printf("2\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}