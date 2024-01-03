# A - সবাইকে স্বাগতম 👋 - Editorial

**Problem Origin:** [Aizu - ITP1_1_A - Hello World](https://onlinejudge.u-aizu.ac.jp/problems/ITP1_1_A)

## Problem Approach

This problem is a straightforward introductory challenge where the task is to output the string "Hello World" followed by a newline character. The key here is to ensure precise output formatting as any deviation might result in a "Presentation Error".

## Code Explanation in C

```c
#include <stdio.h>

int main() {
    printf("Hello World\n");
    return 0;
}
```

The C solution utilizes the standard input/output library. It uses `printf` to display the required string followed by a newline character `\n`.

## Code Explanation in C++

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Hello World" << endl;
    return 0;
}
```

The C++ solution employs the standard I/O stream. It uses `cout` to output the string "Hello World" followed by `endl` to append a newline to the output.

## Complexity Analysis

### Time Complexity

The time complexity of both solutions is constant (O(1)), as they involve a single output operation.

### Space Complexity

The space complexity is also constant (O(1)) for both C and C++ solutions, as they don't use any additional memory proportional to the input size.

Happy Coding! 👋
