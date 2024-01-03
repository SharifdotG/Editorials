# C - উল্টা-পুল্টা 🔄️ - Editorial

**Problem Origin:** [**Aizu - ITP1_6_A - Reversing Numbers**](https://onlinejudge.u-aizu.ac.jp/problems/ITP1_6_A)

## Problem Approach

The problem requires reversing a given sequence of integers. To achieve this, we need to read the sequence, store it in an array, and then print the elements in reverse order.

### Code Explanation

#### C Implementation

```c
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
```

**Explanation:**

- `arraySize` is input for the size of the sequence.
- An array `array` of size `arraySize` is declared to store the sequence.
- Elements of the sequence are read into the array.
- The elements of the array are printed in reverse order.

#### C++ Implementation

```cpp
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
```

**Explanation:**

- Similar to the C implementation, it reads the size of the sequence and the elements into an array.
- The elements of the array are then printed in reverse order.

### Complexity Analysis

- **Time Complexity:** Both implementations traverse the array once for input and once again for output, leading to a time complexity of O(n), where n is the size of the array.
- **Space Complexity:** Both implementations use an array to store the sequence, resulting in a space complexity of O(n) due to the array's size.

---

## Happy Coding! 🔄️
