// G - ইমনের অদ্ভুত প্যাটার্ন 👀

#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number == 1) {
        printf("1\n");
    } else if (number < 4) {
        printf("NO SOLUTION\n");
    } else if (number == 4) {
        printf("2 4 1 3\n");
    } else {
        for (int i = 1; i <= number; i += 2) {
            printf("%d ", i);
        }

        for (int i = 2; i <= number; i += 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
