#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int d[] = {500, 100, 50, 10, 5, 1};

    int res[10000], res_size = 0;
    for (int i = 0; i < 6; i++) {
        while (n >= d[i]) {
            n -= d[i];
            res[res_size++] = d[i];
        }
    }

    for (int i = res_size - 1; i >= 0; i--) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}