// C - উল্টা-পুল্টা 🔄️

#include <stdio.h>

int main() {
    int arraySize;
    scanf("%d", &arraySize);

    int numbers[arraySize];
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = arraySize - 1; i >= 0; i--) {
        printf("%d%c", numbers[i], i == 0 ? '\n' : ' ');
    }
    
    return 0;
}
