#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        char s[300001];
        scanf("%d %s", &n, s);

        bool ok = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] > s[i + 1]) {
                for (int j = i; j < n - 1; j++) {
                    s[j] = s[j + 1];
                }
                s[n - 1] = '\0';
                ok = true;
                break;
            }
        }

        if (!ok) {
            s[n - 1] = '\0';
        }

        printf("%s\n", s);
    }

    return 0;
}