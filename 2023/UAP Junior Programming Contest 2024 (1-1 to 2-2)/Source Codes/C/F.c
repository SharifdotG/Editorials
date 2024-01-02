// F - শেষ অঙ্ক 🔢

#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int number;
        scanf("%d", &number);

        int factorial = 1;

        for (int j = 1; j <= number; j++) {
            factorial *= j;
        }

        int lastFactorialDigit = factorial % 10;

        printf("%d\n", lastFactorialDigit);
    }

    return 0;
}
