#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[101], max = 0, min = 101, max_idx = 0, min_idx = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > max) {
            max = a[i];
            max_idx = i;
        }

        if (a[i] <= min) {
            min = a[i];
            min_idx = i;
        }
    }

    if (max_idx > min_idx) {
        printf("%d\n", max_idx - 1 + n - min_idx - 1);
    } else {
        printf("%d\n", max_idx + n - min_idx - 1);
    }

    return 0;
}