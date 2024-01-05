// B - খেলা হবে ✊

#include <stdio.h>

int main() {
    int dieThrows, pickedNumber;

    scanf("%d %d", &dieThrows, &pickedNumber);

    if (dieThrows <= pickedNumber && pickedNumber <= dieThrows * 6) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
