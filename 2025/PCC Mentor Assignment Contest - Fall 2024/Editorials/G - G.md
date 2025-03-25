# Problem Name: G - G ([CodeForces - 2060A: Fibonacciness](http://codeforces.com/problemset/problem/2060/A))

---

## Problem Summary

You are given an array of five integers, but only four of them are known initially: `a[1]`, `a[2]`, `a[4]`, and `a[5]`. The third element, `a[3]`, is unknown and can be set to any integer (positive, negative, or zero). The **Fibonacciness** of the array is defined as the number of indices `i` (where `1 ≤ i ≤ 3`) such that the Fibonacci condition holds:
`a[i+2] = a[i] + a[i+1]`.

Your task is to determine the maximum possible Fibonacciness by choosing an appropriate value for `a[3]`.

---

## How to Approach

To maximize the Fibonacciness, we need to analyze the conditions under which the Fibonacci property holds for the three possible indices (`i = 1`, `i = 2`, and `i = 3`). Specifically:

1. For `i = 1`: `a[3] = a[1] + a[2]`.
2. For `i = 2`: `a[4] = a[2] + a[3]`.
3. For `i = 3`: `a[5] = a[3] + a[4]`.

The goal is to choose `a[3]` such that as many of these conditions as possible are satisfied simultaneously.

---

## Algorithm on how to solve the problem

1. **Identify the constraints**:
   - From the Fibonacci condition for `i = 1`, we get `a[3] = a[1] + a[2]`.
   - From the Fibonacci condition for `i = 2`, we get `a[3] = a[4] - a[2]`.
   - From the Fibonacci condition for `i = 3`, we get `a[3] = a[5] - a[4]`.

2. **Count distinct values**:
   Compute the three potential values of `a[3]` derived from the above equations and store them in a set (to eliminate duplicates).

3. **Determine the maximum Fibonacciness**:
   The size of the set indicates how many distinct values of `a[3]` satisfy the conditions. The maximum Fibonacciness is `4 - size(set)`, because there are three conditions, and if all conditions are satisfied, the size of the set will be 1.

4. **Output the result**:
   For each test case, compute and output the maximum Fibonacciness.

---

## Accepted Code (C)

```c
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a1, a2, a4, a5;
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);

        int a = a1 + a2, b = a4 - a2, c = a5 - a4;

        if (a == b && b == c) {
            printf("3\n");
        } else if (a == b || b == c || a == c) {
            printf("2\n");
        } else {
            printf("1\n");
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
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        set<int> s = {a1 + a2, a4 - a2, a5 - a4};

        cout << 4 - s.size() << endl;
    }

    return 0;
}
```

---

## Explanation of the code

1. **Input Handling**:
   Both implementations read the number of test cases `t` and process each test case individually.

2. **Computing Potential Values for `a[3]`**:
   - In the C implementation, three variables `a`, `b`, and `c` are computed corresponding to the three potential values of `a[3]`.
   - In the C++ implementation, a set `s` is used to store these values, automatically eliminating duplicates.

3. **Determining Maximum Fibonacciness**:
   - In the C implementation, conditional statements check how many of the three values are equal and output the corresponding Fibonacciness.
   - In the C++ implementation, the size of the set determines the number of distinct values, and the maximum Fibonacciness is calculated as `4 - s.size()`.

4. **Output**:
   For each test case, the maximum Fibonacciness is printed.

---

## Time Complexity

- **Per Test Case**:
  Both implementations perform constant-time operations (computing values and checking conditions), so the time complexity per test case is **O(1)**.

- **Overall**:
  Since there are `t` test cases, the overall time complexity is **O(t)**.

---

## Space Complexity

- **Per Test Case**:
  - In the C implementation, a fixed number of variables are used, resulting in **O(1)** space complexity.
  - In the C++ implementation, a set of at most 3 elements is used, also resulting in **O(1)** space complexity.

- **Overall**:
  The space complexity remains **O(1)** across all test cases.

---

## Lessons Learned

1. **Understanding Constraints**:
   Carefully analyzing the problem constraints and deriving relationships between variables is crucial for solving problems like this.

2. **Efficient Use of Sets**:
   Using a set to handle distinct values simplifies the logic and avoids manual comparisons, making the solution more elegant.

3. **Maximizing Conditions**:
   Problems involving maximizing certain conditions often require exploring all possibilities and counting overlaps, as demonstrated here.

4. **Constant-Time Solutions**:
   Even with multiple test cases, efficient algorithms can ensure that the solution runs in constant time per test case, leading to optimal performance.
