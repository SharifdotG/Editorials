# Problem Name: C - C ([CodeForces - 1857A: Array Coloring](https://codeforces.com/problemset/problem/1857/A))

---

## Problem Summary

You are given an array of integers, and your task is to determine whether it is possible to split the array into two groups such that:

1. Each group contains at least one element.
2. The sums of the elements in both groups have the same parity (both even or both odd).

For example, if the array is `[1, 2, 4, 3, 2, 3, 5, 4]`, you can split it into two groups like `[(1), (2), 4, (3), 2, 3, 5, 4]`. Here, the sum of the first group is `6` (even), and the sum of the second group is `18` (even). Hence, the answer for this case is `"YES"`.

If it is not possible to split the array into two groups satisfying the above conditions, output `"NO"`.

---

## How to Approach

To solve this problem, we need to focus on the **parity** (evenness or oddness) of the numbers in the array. Here's the reasoning:

1. The sum of two numbers has the same parity as the count of odd numbers in the group:
   - If there are an even number of odd numbers, their sum is even.
   - If there are an odd number of odd numbers, their sum is odd.
2. To ensure both groups have sums with the same parity, the total number of odd numbers in the array must be **even**. This is because:
   - If the total number of odd numbers is even, we can split them evenly between the two groups, ensuring both groups have sums with the same parity.
   - If the total number of odd numbers is odd, it is impossible to split them evenly, making it impossible to satisfy the condition.

Thus, the solution boils down to counting the number of odd numbers in the array and checking if this count is even.

---

## Algorithm on how to solve the problem

1. Read the number of test cases `t`.
2. For each test case:
   - Read the length of the array `n`.
   - Read the array elements.
   - Count the number of odd numbers in the array.
   - If the count of odd numbers is even, output `"YES"`.
   - Otherwise, output `"NO"`.

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

        int a[50], cnt = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);

            if (a[i] % 2 != 0) {
                cnt++;
            }
        }

        if (cnt % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
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
        int n;
        cin >> n;

        vector<int> a(n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] % 2 != 0) {
                cnt++;
            }
        }

        if (cnt % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
```

---

## Explanation of the code

1. **Input Handling**:
   - The number of test cases `t` is read first.
   - For each test case, the array size `n` is read, followed by the array elements.

2. **Counting Odd Numbers**:
   - A loop iterates through the array, and for each element, it checks if the element is odd (`a[i] % 2 != 0`).
   - If the element is odd, the counter `cnt` is incremented.

3. **Decision Making**:
   - After counting the odd numbers, the program checks if `cnt % 2 == 0` (i.e., the count of odd numbers is even).
   - If true, it prints `"YES"`, indicating that the array can be split into two groups with the same parity sums.
   - Otherwise, it prints `"NO"`.

---

## Time Complexity

- Reading the array takes $O(n)$ time.
- Counting the odd numbers also takes $O(n)$ time.
- Since there are `t` test cases, the overall time complexity is **$O(t \cdot n)$**, where $n$ is the length of the array for each test case.

Given the constraints ($t \leq 1000$, $n \leq 50$), this approach is efficient and works well within the limits.

---

## Space Complexity

- The space required to store the array is $O(n)$.
- Additional variables like `cnt` and loop counters require constant space.
- Thus, the space complexity for each test case is **$O(n)$**.

---

## Lessons Learned

1. **Parity Analysis**: Understanding the behavior of odd and even numbers is crucial in many problems. In this case, focusing on the parity of the sum reduced the problem to a simple counting task.
2. **Efficient Input Handling**: When dealing with multiple test cases, using fast input methods (like `scanf` in C or `cin` with optimizations in C++) ensures that the program runs efficiently.
3. **Edge Cases**: Always consider edge cases, such as arrays with all even numbers or all odd numbers, to ensure the correctness of the solution.

By mastering these concepts, you can tackle similar problems involving parity and grouping efficiently.
