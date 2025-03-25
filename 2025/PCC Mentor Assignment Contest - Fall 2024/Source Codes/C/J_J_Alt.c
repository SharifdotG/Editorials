#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0 0 0\n");
    } else {
        int a = 0, b = 1, c = 1;
        while (c != n) {
            a = b;
            b = c;
            c = a + b;
        }

        printf("%d %d 0\n", a, b);
    }

    return 0;
}