# Problem Name: L - L ([CodeForces - 1146A: Love "A"](http://codeforces.com/problemset/problem/1146/A))

---

## Problem Summary

Alice has a string `s` consisting of lowercase English letters. She loves the letter "a" and considers a string "good" if more than half of its characters are "a"s. Alice can erase some characters from the string (possibly zero) to create a "good" string. The task is to determine the maximum possible length of such a "good" string. It is guaranteed that the input string contains at least one "a".

---

## How to Approach

To solve this problem, we need to focus on two key aspects:

1. **Counting the 'a's**: Determine how many 'a's are present in the string.
2. **Maximizing the good string**: A string is considered "good" if more than half of its characters are 'a's. This means the number of 'a's (`cnt`) must satisfy the condition:
   $$
   \text{cnt} > \frac{\text{length of the string}}{2}
   $$
   Rearranging this inequality gives us the maximum possible length of the string as $2 \times \text{cnt} - 1$. However, this value cannot exceed the original length of the string.

Thus, the solution boils down to finding the count of 'a's in the string and computing the minimum of $2 \times \text{cnt} - 1$ and the length of the string.

---

## Algorithm on how to solve the problem

1. **Input the string**: Read the input string `s`.
2. **Count the 'a's**: Traverse the string and count the occurrences of the letter 'a'.
3. **Compute the result**:
   - Calculate the potential maximum length of the good string as $2 \times \text{cnt} - 1$.
   - Ensure this value does not exceed the original length of the string by taking the minimum of $2 \times \text{cnt} - 1$ and the length of the string.
4. **Output the result**: Print the computed value.

---

## Accepted Code (C)

```c
#include <stdio.h>
#include <string.h>

int min(int a, int b) { return (a < b) ? a : b; }

int main() {
    char s[1001];
    scanf("%s", s);

    int length = strlen(s);

    int cnt = 0;
    for (int i = 0; i < length; i++) {
        if (s[i] == 'a') {
            cnt++;
        }
    }

    printf("%d\n", min(cnt * 2 - 1, length));

    return 0;
}
```

---

## Accepted Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = count(s.begin(), s.end(), 'a');

    cout << min(cnt * 2 - 1, (int)s.size()) << endl;

    return 0;
}
```

---

## Explanation of the code

### C Code

1. **Input Handling**: The string `s` is read using `scanf`. Its length is calculated using `strlen`.
2. **Counting 'a's**: A loop iterates through the string, incrementing the counter `cnt` whenever an 'a' is encountered.
3. **Result Calculation**: The formula $\text{min}(2 \times \text{cnt} - 1, \text{length})$ ensures that the result is both "good" and within the bounds of the original string.
4. **Output**: The result is printed using `printf`.

### C++ Code

1. **Input Handling**: The string `s` is read using `cin`.
2. **Counting 'a's**: The `count` function from the `<algorithm>` library is used to count the occurrences of 'a' in the string.
3. **Result Calculation**: Similar to the C code, the formula $\text{min}(2 \times \text{cnt} - 1, \text{length})$ is applied.
4. **Output**: The result is printed using `cout`.

---

## Time Complexity

- **Counting 'a's**: Traversing the string takes $O(n)$, where $n$ is the length of the string.
- **Calculating the result**: The operations involving $\text{cnt}$ and $\text{length}$ are $O(1)$.
- **Overall**: The time complexity is $O(n)$ per test case.

---

## Space Complexity

- **String Storage**: The input string requires $O(n)$ space.
- **Auxiliary Space**: A few integer variables are used, which take $O(1)$ space.
- **Overall**: The space complexity is $O(n)$ per test case.

---

## Lessons Learned

1. **Understanding Constraints**: Carefully analyzing the problem constraints helps in deriving efficient solutions. Here, the small string size ($n \leq 50$) allows straightforward traversal.
2. **Mathematical Insight**: The problem reduces to a simple mathematical observation about proportions, demonstrating how logical reasoning can simplify coding challenges.
3. **Efficient Counting**: Using built-in functions like `count` in C++ or manually iterating in C demonstrates different ways to handle common tasks efficiently.
4. **Edge Cases**: Always consider edge cases, such as strings with only 'a's or minimal lengths, to ensure correctness.

By solving this problem, we reinforce the importance of combining algorithmic thinking with mathematical reasoning to arrive at elegant solutions.
