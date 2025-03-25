#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[a[i] - 1]);
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", i + 1);
        }
        printf("\n");

        for (int i = 0; i < n; i++) {
            printf("%d ", b[i]);
        }
        printf("\n");
    }

    return 0;
}