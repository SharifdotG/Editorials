# Problem B - খেলা হবে ✊ - Editorial

**Problem Origin:** [AtCoder - abc208_a - Rolling Dice](https://atcoder.jp/contests/abc208/tasks/abc208_a?lang=en)

## Problem Approach

The problem revolves around determining whether it's possible to obtain a specific sum **Y** by throwing a six-faced die **X** times. The task is to assess if the cumulative sum of the die rolls can equal the predetermined number **Y**.

## Code Explanation in C

```c
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
```

The C code takes input for the number of die throws **X** and the picked number **Y**. It checks if the picked number is within the possible range of outcomes achievable from throwing the die X times. If the condition is met, it prints *"Yes"*; otherwise, it prints *"No"*.

## Code Explanation in C++

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int dieThrows, pickedNumber;

    cin >> dieThrows >> pickedNumber;

    if (dieThrows <= pickedNumber && pickedNumber <= dieThrows * 6) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
```

The C++ code accomplishes the same task as the C code but uses C++ input/output streams. It reads the number of die throws **X** and the picked number **Y** using `cin`. Similarly, it checks if the picked number falls within the range of possible sums achievable by throwing the die X times and outputs *"Yes"* or *"No"* accordingly.

## Complexity Analysis

- **Time Complexity:** Both the C and C++ implementations have a time complexity of `O(1)` as they perform a simple comparison and print the result based on the given conditions.
- **Space Complexity:** The space complexity for both implementations is `O(1)` as they utilize a constant amount of memory regardless of the input size.

This editorial provides a straightforward approach to solving the problem by checking if the desired sum **Y** can be achieved within the range of outcomes possible from throwing a six-faced die **X** times.

Happy Coding! ✊
