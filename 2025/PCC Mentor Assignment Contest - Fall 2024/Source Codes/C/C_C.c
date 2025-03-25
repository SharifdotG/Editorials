#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[50], cnt = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);

            if (a[i] % 2 != 0) {
                cnt++;
            }
        }

        if (cnt % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}