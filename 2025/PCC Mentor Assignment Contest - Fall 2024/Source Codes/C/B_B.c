#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[101];
        scanf("%s", s);

        int n = strlen(s);

        if (n % 2) {
            printf("NO\n");
        } else {
            int is_equal = 1;
            for (int i = 0; i < n / 2; i++) {
                if (s[i] != s[i + n / 2]) {
                    is_equal = 0;
                    break;
                }
            }

            if (is_equal) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}