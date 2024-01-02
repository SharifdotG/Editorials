// C - উল্টা-পুল্টা 🔄️

#include <bits/stdc++.h>

using namespace std;

int main() {
    int arraySize;
    cin >> arraySize;

    int array[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }

    for (int i = arraySize - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }

    return 0;
}