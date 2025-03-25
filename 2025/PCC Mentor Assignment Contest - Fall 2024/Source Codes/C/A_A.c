#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        if (n % 2 == 0) {
            while (n % 2 == 0) {
                n /= 2;
            }
        }

        if (n == 1) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}