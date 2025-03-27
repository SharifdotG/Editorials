#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;
    while (n) {
        cnt += n & 1;
        n >>= 1;
    }

    printf("%d\n", (1 << cnt) - 1);

    return 0;
}