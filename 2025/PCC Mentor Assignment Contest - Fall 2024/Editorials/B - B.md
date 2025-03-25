# Problem Name: B - B ([CodeForces - 1619A: Square String](https://codeforces.com/problemset/problem/1619/A))

---

## Problem Summary

The problem requires us to determine whether a given string is "square." A string is considered square if it can be split into two equal halves, where both halves are identical. For example, "aa", "abcabc", and "abab" are square strings, while "aaa", "abcdabc", and "abaaab" are not.

We are given multiple test cases, each consisting of a string. Our task is to output "YES" if the string is square and "NO" otherwise.

---

## How to Approach

To solve this problem, we need to check two conditions:

1. The length of the string must be even. If the length is odd, it is impossible to split the string into two equal halves, so the answer is immediately "NO."
2. If the length is even, we need to verify whether the first half of the string is identical to the second half. This can be done by comparing substrings or iterating through the characters of both halves.

If both conditions are satisfied, the string is square; otherwise, it is not.

---

## Algorithm on how to solve the problem

1. Read the number of test cases `t`.
2. For each test case:
   - Read the string `s`.
   - Compute the length `n` of the string.
   - If `n` is odd, output "NO" since the string cannot be split into two equal halves.
   - If `n` is even:
     - Compare the first half of the string (`s[0] to s[n/2-1]`) with the second half (`s[n/2] to s[n-1]`).
     - If they are identical, output "YES"; otherwise, output "NO".
3. Repeat for all test cases.

---

## Accepted Code (C)

```c
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[101];
        scanf("%s", s);

        int n = strlen(s);

        if (n % 2) {
            printf("NO\n");
        } else {
            int is_equal = 1;
            for (int i = 0; i < n / 2; i++) {
                if (s[i] != s[i + n / 2]) {
                    is_equal = 0;
                    break;
                }
            }

            if (is_equal) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }

    return 0;
}
```

---

## Accepted Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();

        if (n % 2) {
            cout << "NO" << endl;
        } else {
            if (s.substr(0, n / 2) == s.substr(n / 2)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
```

---

## Explanation of the code

### C Code

1. The program starts by reading the number of test cases `t`.
2. For each test case:
   - It reads the input string `s` and calculates its length `n`.
   - If `n` is odd, it prints "NO" because the string cannot be square.
   - If `n` is even, it iterates through the first half of the string and compares each character with the corresponding character in the second half.
   - If all characters match, it prints "YES"; otherwise, it prints "NO."

### C++ Code

1. The program begins by reading the number of test cases `t`.
2. For each test case:
   - It reads the input string `s` and calculates its length `n`.
   - If `n` is odd, it prints "NO."
   - If `n` is even, it uses the `substr` function to extract the first and second halves of the string and checks if they are equal.
   - If the halves are equal, it prints "YES"; otherwise, it prints "NO."

---

## Time Complexity

- **C Code:**
  - Checking if the string is square involves iterating through half of the string, which takes $O(n/2)$ time. Since $O(n/2)$ simplifies to $O(n)$, the time complexity per test case is $O(n)$.
  - For $t$ test cases, the total time complexity is $O(t \cdot n)$, where $n$ is the length of the string.

- **C++ Code:**
  - Using the `substr` function to compare the two halves also takes $O(n)$ time per test case.
  - For $t$ test cases, the total time complexity is $O(t \cdot n)$.

---

## Space Complexity

- **C Code:**
  - The space complexity is $O(1)$ since no additional data structures are used apart from a few variables.

- **C++ Code:**
  - The space complexity is $O(n)$ due to the use of the `substr` function, which creates temporary substrings.

---

## Lessons Learned

1. **String Manipulation:**
   - Understanding how to split and compare parts of a string is crucial for solving problems like this.
   - In C++, the `substr` function provides an elegant way to extract portions of a string.

2. **Edge Cases:**
   - Always consider edge cases, such as strings with odd lengths or very short strings (e.g., single-character strings).

3. **Efficiency:**
   - Even though the constraints are small ($n \leq 100$), writing efficient code ensures that your solution scales well for larger inputs.

4. **Multiple Test Cases:**
   - When dealing with multiple test cases, ensure that your logic resets properly for each case and does not carry over data unintentionally.

By mastering these concepts, you can confidently tackle similar problems involving string manipulation and pattern recognition.
