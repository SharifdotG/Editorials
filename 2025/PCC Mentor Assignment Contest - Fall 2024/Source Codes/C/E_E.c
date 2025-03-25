#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        for (char i = 'a'; i <= 'z'; i++) {
            for (char j = 'a'; j <= 'z'; j++) {
                for (char k = 'a'; k <= 'z'; k++) {
                    if (i - 'a' + j - 'a' + k - 'a' + 3 == n) {
                        printf("%c%c%c\n", i, j, k);
                        goto end;
                    }
                }
            }
        }
        end:;
    }

    return 0;
}