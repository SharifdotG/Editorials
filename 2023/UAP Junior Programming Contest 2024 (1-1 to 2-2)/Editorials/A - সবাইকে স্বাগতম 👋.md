# A - সবাইকে স্বাগতম 👋

Problem Origin: [Aizu - ITP1_1_A - Hello World](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A)

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

## Time Complexity Analysis

The time complexity of this problem is constant, denoted as O(1), as it involves a simple print operation that doesn't depend on the size of any input.
