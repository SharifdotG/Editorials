#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

// Custom comparator function for qsort
// Sorts in ascending order with even numbers before odd numbers
int compare(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x % 2 == 0 && y % 2 == 1) {
        return -1; // x comes before y
    } else if (x % 2 == 1 && y % 2 == 0) {
        return 1;  // y comes before x
    } else {
        return x - y; // ascending order within same parity
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), compare);

        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(a[i], 2 * a[j]) > 1) {
                    res++;
                }
            }
        }

        printf("%d\n", res);
    }

    return 0;
}