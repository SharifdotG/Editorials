#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        char s[101];
        scanf("%d %s", &n, s);

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                cnt = 0;
                continue;
            } else {
                cnt++;

                if (cnt == 4) {
                    break;
                }
            }
        }

        if (cnt < 4) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}