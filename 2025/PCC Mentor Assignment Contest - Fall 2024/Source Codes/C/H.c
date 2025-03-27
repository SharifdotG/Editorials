#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int res = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        res += n / i;
    }

    printf("%d\n", res);

    return 0;
}