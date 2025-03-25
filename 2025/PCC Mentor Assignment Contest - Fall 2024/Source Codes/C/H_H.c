#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n], freq[n + 1];

        for (int i = 0; i <= n; i++) {
            freq[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            freq[a[i]]++;
        }

        int res = 0;
        for (int i = 1; i <= n; i++) {
            res += freq[i] / 2;
        }

        printf("%d\n", res);
    }

    return 0;
}