#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 4 && n > 1) {
        printf("NO SOLUTION\n");
    } else {
        for (int i = 2; i <= n; i += 2) {
            printf("%d ", i);
        }

        for (int i = 1; i <= n; i += 2) {
            printf("%d ", i);
        }
    }

    return 0;
}