# C - উল্টা-পুল্টা 🔄️ - Editorial

**Problem Origin:** [**Aizu - ITP1_6_A - Reversing Numbers**](https://onlinejudge.u-aizu.ac.jp/problems/ITP1_6_A)

## Problem Approach

The problem requires reversing a given array. The solution involves iterating through the array from the end to the start and printing its elements in reverse order.

## Code Explanation - C

```c
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
```

1. **Input Reading:**
   - `int arraySize; scanf("%d", &arraySize);`: Takes the size of the array as input.

2. **Array Population:**
   - `int numbers[arraySize];`: Creates an array `numbers` of size `arraySize`.
   - `for (int i = 0; i < arraySize; i++) { scanf("%d", &numbers[i]); }`: Reads `arraySize` integers and stores them in the `numbers` array.

3. **Array Reversal and Output:**
   - `for (int i = arraySize - 1; i >= 0; i--) { printf("%d%c", numbers[i], i == 0 ? '\n' : ' '); }`:
     - Iterates through the `numbers` array in reverse order.
     - Prints each element followed by a space character unless it's the last element, in which case it prints a newline character.

## Code Explanation - C++

```cpp
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
```

1. **Input Reading:**
   - `int arraySize; cin >> arraySize;`: Takes the size of the array as input.

2. **Array Population:**
   - `int numbers[arraySize];`: Creates an array `numbers` of size `arraySize`.
   - `for (int i = 0; i < arraySize; i++) { cin >> numbers[i]; }`: Reads `arraySize` integers and stores them in the `numbers` array.

3. **Array Reversal and Output:**
   - `for (int i = arraySize - 1; i >= 0; i--) { cout << numbers[i] << (i == 0 ? "\n" : " "); }`:
     - Iterates through the `numbers` array in reverse order.
     - Prints each element followed by a space character unless it's the last element, in which case it prints a newline character.

## Complexity Analysis

Both the C and C++ solutions have:

- **Time Complexity:** O(n), where n is the size of the array. They iterate through the entire array once.
- **Space Complexity:** O(n), as they use an array of size n to store the input elements.

These solutions effectively reverse the given array and print it in reverse order while handling the input and output constraints specified in the problem.

---

## Happy Coding! 🔄️
