#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (a > b) {
            swap(&a, &b);
        }
        if (c > d) {
            swap(&c, &d);
        }

        int cnt = 0;
        for (int i = a; i <= b; i++) {
            if (i == c || i == d) {
                cnt++;
            }
        }

        if (cnt == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}