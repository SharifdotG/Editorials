#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int cakewalk = 0, simple = 0, easy = 0, medium = 0, hard = 0;
        char s[20];

        for (int i = 0; i < n; i++) {
            scanf("%s", s);

            if (strcmp(s, "cakewalk") == 0) {
                cakewalk++;
            } else if (strcmp(s, "simple") == 0) {
                simple++;
            } else if (strcmp(s, "easy") == 0) {
                easy++;
            } else if (strcmp(s, "easy-medium") == 0 ||
                       strcmp(s, "medium") == 0) {
                medium++;
            } else if (strcmp(s, "medium-hard") == 0 ||
                       strcmp(s, "hard") == 0) {
                hard++;
            } else {
                i++;
            }
        }

        if (cakewalk > 0 && simple > 0 && easy > 0 && medium > 0 && hard > 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}