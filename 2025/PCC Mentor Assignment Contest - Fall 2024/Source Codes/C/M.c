#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        long long s;
        scanf("%lld", &s);

        long long n = ceil(sqrt(s));
        long long x = n * n - s + 1;

        if (n % 2 == 0) {
            if (x <= n) {
                printf("Case %d: %lld %lld\n", i, n, x);
            } else {
                printf("Case %d: %lld %lld\n", i, n - (x - n), n);
            }
        } else {
            if (x <= n) {
                printf("Case %d: %lld %lld\n", i, x, n);
            } else {
                printf("Case %d: %lld %lld\n", i, n, n - (x - n));
            }
        }
    }

    return 0;
}