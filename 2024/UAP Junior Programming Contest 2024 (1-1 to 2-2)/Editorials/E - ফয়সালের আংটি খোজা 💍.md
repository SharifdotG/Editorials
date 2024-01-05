# Editorial for Problem E - Finding Faisal's Ring 💍

**Problem Origin:** [**Aizu - ITP1_8_D - Ring**](https://onlinejudge.u-aizu.ac.jp/problems/ITP1_8_D)

## Problem Approach

Faisal's quest for the perfect ring led to a unique challenge: finding a word within a circular string. The task was to determine if a given word 'p' exists within the circular text 's', presented in the shape of a ring. The solution revolves around creating a circular representation of the text by appending it to itself and then searching for the pattern within this circular string.

## Code Explanation

### C Solution

```c
#include <stdio.h>
#include <string.h>

int main() {
    char text[101], pattern[101], ring[101];
    scanf("%s %s", text, pattern);

    // Creating a circular representation by concatenating the text twice
    strcpy(ring, pattern);
    strcat(ring, pattern);

    // Checking if the pattern exists within the circular string
    if (strstr(ring, pattern) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
```

- `text` and `pattern` are input strings read from the standard input.
- `ring` is used to create a circular representation of the text. `strcpy()` is used to copy the pattern into `ring`.
- The circular representation is formed by copying the pattern into `ring` and then concatenating it with itself.
- The `strstr()` function checks if the pattern exists within the circular string 'ring'. If found, it prints "Yes"; otherwise, it prints "No".

### C++ Solution

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    string text, pattern;
    cin >> text >> pattern;

    // Creating a circular representation by appending the text to itself
    text += text;

    // Checking if the pattern exists within the circular string
    if (text.find(pattern) != string::npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
```

- `text` and `pattern` are input strings read using the `cin` stream.
- The text is made circular by appending it to itself.
- The `find()` function checks if the pattern exists within the circular string 'text'. If found, it outputs "Yes"; otherwise, it outputs "No".

## Complexity Analysis

Both the C and C++ solutions operate with a time complexity of `O(N)` and a space complexity of `O(N)`, where `N` is the length of the input text `s`. This complexity arises from the need to create a circular representation of the text by duplicating it, followed by a search operation within the circular string.

---

## Happy Coding! 💍
