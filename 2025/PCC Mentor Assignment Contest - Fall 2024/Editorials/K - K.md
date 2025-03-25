# Problem Name: K - K ([CodeForces - 2039A: Shohag Loves Mod](http://codeforces.com/problemset/problem/2039/A))

---

## Problem Summary

Shohag has an integer `n`, and he wants to construct an increasing sequence of integers $a[1], a[2], \ldots, a[n]$ such that:

- $1 \leq a[1] < a[2] < \ldots < a[n] \leq 100$
- For every pair of indices $i$ and $j$ where $1 \leq i < j \leq n$, the condition $a[i] \mod i \neq a[j] \mod j$ must hold.

The task is to find and print such a sequence for each test case. It is guaranteed that such a sequence always exists under the given constraints.

---

## How to Approach

To solve this problem, we need to carefully construct the sequence $a[1], a[2], \ldots, a[n]$ while ensuring that the modular condition $a[i] \mod i \neq a[j] \mod j$ is satisfied for all pairs $i$ and $j$. Here's how we can approach it:

1. **Understand the Modular Condition**:
   - The expression $a[i] \mod i$ gives the remainder when $a[i]$ is divided by $i$. For example, if $a[i] = 7$ and $i = 3$, then $7 \mod 3 = 1$.
   - To satisfy the condition $a[i] \mod i \neq a[j] \mod j$, we need to ensure that no two elements in the sequence produce the same remainder when divided by their respective indices.

2. **Constructing the Sequence**:
   - A simple strategy is to assign $a[i] = i \times 2 - 1$. This ensures that $a[i] \mod i = (i \times 2 - 1) \mod i = 1$, which is unique for each $i$.
   - Since $a[i]$ is strictly increasing ($a[i+1] > a[i]$), the sequence remains valid and satisfies the problem's constraints.

3. **Verification**:
   - For any $i$, $a[i] \mod i = 1$, and since $i$ is unique for each index, the modular remainders are guaranteed to be distinct across all indices.

This approach ensures correctness and simplicity.

---

## Algorithm on how to solve the problem

1. Read the number of test cases $t$.
2. For each test case:
   - Read the value of $n$.
   - Construct the sequence $a[1], a[2], \ldots, a[n]$ using the formula $a[i] = i \times 2 - 1$.
   - Print the sequence.

---

## Accepted Code (C)

```c
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            printf("%d ", i * 2 - 1);
        }
        printf("\n");
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
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cout << i * 2 - 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
```

---

## Explanation of the code

1. **Input Handling**:
   - The program begins by reading the number of test cases $t$.
   - For each test case, it reads the integer $n$.

2. **Sequence Construction**:
   - For each $i$ from 1 to $n$, the program calculates $a[i] = i \times 2 - 1$.
   - This ensures that $a[i] \mod i = 1$, satisfying the modular condition.

3. **Output**:
   - The constructed sequence is printed as space-separated integers.

4. **Loop Control**:
   - The outer loop iterates over all test cases, and the inner loop constructs the sequence for each test case.

---

## Time Complexity

- **Per Test Case**: The time complexity is $O(n)$, where $n$ is the length of the sequence. This is because we iterate through all indices $i$ from 1 to $n$ to construct the sequence.
- **Overall**: For $t$ test cases, the total time complexity is $O(t \times n)$.

---

## Space Complexity

- **Per Test Case**: The space complexity is $O(1)$, as we only use a few variables to store the input and compute the sequence.
- **Overall**: The space complexity remains $O(1)$, regardless of the number of test cases.

---

## Lessons Learned

1. **Modular Arithmetic**:
   - Understanding modular arithmetic and its properties is crucial for solving problems involving remainders.

2. **Constructive Algorithms**:
   - Sometimes, constructing a solution directly using a simple formula or pattern is more efficient than searching for one.

3. **Problem Constraints**:
   - Always analyze the constraints carefully. In this problem, the upper limit of $n$ (50) suggests that a straightforward approach will work efficiently.

4. **Testing Edge Cases**:
   - Even though the problem guarantees the existence of a solution, testing edge cases (e.g., $n = 2$, $n = 50$) ensures robustness.

By applying these lessons, you can tackle similar problems with confidence!
