# G - ইমনের অদ্ভুত প্যাটার্ন 👀 - Editorial

## Problem Approach

Emon's pattern involves stating numbers from 1 to n in a way where the difference between adjacent numbers is always more than 1. The task is to generate Emon's way of stating these numbers, or indicate if there is no solution.

Absolutely! Let's break down the code further, providing a detailed explanation for both the C and C++ implementations.

## Code Explanation (C)

```c
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
```

### Input Processing

- `int number`: Reads the input integer 'number' representing the range.
- The code first checks specific cases:
  - If 'number' is 1, it directly prints '1'.
  - If 'number' is less than 4, it prints "NO SOLUTION" as per problem constraints.
  - If 'number' is 4, it directly prints the predetermined pattern "2 4 1 3".

### Pattern Generation

- For 'number' greater than 4, it constructs Emon's pattern:
  - The first loop (`for (int i = 1; i <= number; i += 2)`) prints odd numbers.
  - The second loop (`for (int i = 2; i <= number; i += 2)`) prints even numbers.

## Code Explanation (C++)

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;
 
    if (number == 1) {
        cout << 1 << endl;
    } else if (number < 4) {
        cout << "NO SOLUTION" << endl;
    } else if (number == 4) {
        cout << "2 4 1 3" << endl;
    } else {
        for (int i = 1; i <= number; i += 2) {
            cout << i << " ";
        }
 
        for (int i = 2; i <= number; i += 2) {
            cout << i << " ";
        }
    }

    return 0;
}
```

### Input Processing

- `int number`: Reads the input integer 'number' representing the range.
- The code follows the same logic flow as the C version, utilizing `cin`/`cout` for input/output.

### Pattern Generation

- It constructs the pattern in a manner similar to the C code using two loops:
  - The first loop (`for (int i = 1; i <= number; i += 2)`) prints odd numbers.
  - The second loop (`for (int i = 2; i <= number; i += 2)`) prints even numbers.

## Complexity Analysis

Both implementations traverse through 'n' numbers twice (odd and even), resulting in a time complexity of O(n). The space complexity remains constant at O(1) since no extra data structures are used that grow with the input size.

---

Happy Coding! 👀
