// E - ফয়সালের আংটি খোজা 💍

#include <stdio.h>
#include <string.h>

int main() {
    char text[101], pattern[101], ring[101];
    scanf("%s %s", text, pattern);

    strcpy(ring, pattern);
    strcat(ring, pattern);

    if (strstr(ring, pattern) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
