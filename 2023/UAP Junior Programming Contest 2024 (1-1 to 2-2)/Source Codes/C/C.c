// C - উল্টা-পুল্টা 🔄️

#include <stdio.h>

int main() {
    int arraySize;
    scanf("%d", &arraySize);

    int array[arraySize];

    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = arraySize - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}
