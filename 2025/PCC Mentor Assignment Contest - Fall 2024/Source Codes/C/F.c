#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, s;
        scanf("%d %d %d", &n, &x, &s);

        for (int i = 0; i < s; i++) {
            int a, b;
            scanf("%d %d", &a, &b);

            if (a == x) {
                x = b;
            } else if (b == x) {
                x = a;
            }
        }

        printf("%d\n", x);
    }

    return 0;
}