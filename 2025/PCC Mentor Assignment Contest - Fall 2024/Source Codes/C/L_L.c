#include <stdio.h>
#include <string.h>

int min(int a, int b) { return (a < b) ? a : b; }

int main() {
    char s[51];
    scanf("%s", s);

    int length = strlen(s);

    int cnt = 0;
    for (int i = 0; i < length; i++) {
        if (s[i] == 'a') {
            cnt++;
        }
    }

    printf("%d\n", min(cnt * 2 - 1, length));

    return 0;
}