# A - সবাইকে স্বাগতম 👋 - Editorial

## Introduction

Welcome to the problem "Welcome Everyone"! This problem is a warm-up task designed to get you comfortable with the contest environment. In this problem, your task is simple: print "Hello World" without the quotes, ensuring there's a new line at the end. It's crucial to note that any deviation in the required format, such as missing or extra spaces or line breaks, will result in a "Presentation Error" and an incorrect answer.

## Approach

### C Language

Let's break down the C solution provided:

```c
#include <stdio.h>

int main() {
    printf("Hello World\n");

    return 0;
}
```

- `#include <stdio.h>`: This line includes the standard input-output library in C, allowing the use of functions like `printf`.
- `int main() { ... }`: This is the main function where the execution of the program starts.
- `printf("Hello World\n");`: This line prints "Hello World" to the console, followed by a newline `\n`.
- `return 0;`: The function returns 0, indicating successful execution to the operating system.

### C++

Now, let's analyze the C++ solution:

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Hello World" << endl;

    return 0;
}
```

- `#include <bits/stdc++.h>`: This line includes a set of commonly used standard libraries in C++.
- `using namespace std;`: It defines that the program will use the standard namespace, allowing access to standard C++ symbols like `cout` and `endl`.
- `int main() { ... }`: Similar to C, this is the main function in C++ where the execution begins.
- `cout << "Hello World" << endl;`: This line outputs "Hello World" to the console, followed by an endline character `endl`.
- `return 0;`: The function returns 0, indicating successful execution.

## Conclusion

Both the C and C++ solutions provide the desired output for this problem, which is "Hello World" followed by a newline. Understanding the basic structure and functionality of these programming languages is crucial in solving problems efficiently in programming contests.

Keep practicing and best of luck with the rest of the contest!
