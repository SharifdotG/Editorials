// C - উল্টা-পুল্টা 🔄️

#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize;
    cin >> arraySize;

    int numbers[arraySize];
    for (int i = 0; i < arraySize; i++) {
        cin >> numbers[i];
    }

    for (int i = arraySize - 1; i >= 0; i--) {
        cout << numbers[i] << (i == 0 ? "\n" : " ");
    }
    
    return 0;
}