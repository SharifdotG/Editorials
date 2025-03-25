# Problem Name: A - A ([CodeForces - 1475A: Odd Divisor](https://codeforces.com/problemset/problem/1475/A))

---

## Problem Summary

You are given an integer `n`, and the task is to determine whether it has an odd divisor greater than one. An odd divisor is a number `x` such that `x > 1`, `x` divides `n`, and `x` is odd. For example:

- If `n = 6`, the answer is "YES" because `3` is an odd divisor of `6`.
- If `n = 4`, the answer is "NO" because the only divisors of `4` are `1` and `2`, neither of which satisfies the condition.

The input consists of multiple test cases, each containing a single integer `n`. The constraints allow for large values of `n` (up to $10^{14}$), so efficient computation is crucial.

---

## How to Approach

To solve this problem, we need to analyze the structure of `n` and its divisors. Here's the key observation:

1. If `n` is odd, then `n` itself is an odd divisor greater than one (unless `n = 1`, which is not possible in this problem since `n ≥ 2`).
2. If `n` is even, we can repeatedly divide it by `2` until it becomes odd. After removing all factors of `2`, if the resulting number is greater than `1`, then it is an odd divisor. Otherwise, there is no odd divisor greater than one.

This approach works because dividing `n` by `2` repeatedly isolates the largest odd factor of `n`. If this factor is `1`, then `n` is a power of `2` and has no odd divisors greater than one.

---

## Algorithm on how to solve the problem

1. Read the number of test cases `t`.
2. For each test case:
   - Read the integer `n`.
   - While `n` is even (`n % 2 == 0`), divide `n` by `2`.
   - After the loop:
     - If the resulting `n` is greater than `1`, print "YES".
     - Otherwise, print "NO".

---

## Accepted Code (C)

```c
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        if (n % 2 == 0) {
            while (n % 2 == 0) {
                n /= 2;
            }
        }

        if (n == 1) {
            printf("NO\n");
        } else {
            printf("YES\n");
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
        long long n;
        cin >> n;

        if (n % 2 == 0) {
            while (n % 2 == 0) {
                n /= 2;
            }
        }

        if (n == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
```

---

## Explanation of the code

1. **Input Handling**:
   - The program starts by reading the number of test cases `t`.
   - For each test case, it reads the integer `n`.

2. **Odd Divisor Check**:
   - If `n` is even, the program repeatedly divides it by `2` using a `while` loop. This step removes all factors of `2` from `n`.
   - After the loop, if the resulting `n` is `1`, it means that `n` was originally a power of `2` and has no odd divisors greater than one. In this case, the program prints "NO".
   - Otherwise, the program prints "YES", indicating that `n` has an odd divisor greater than one.

3. **Output**:
   - The result for each test case is printed on a new line.

---

## Time Complexity

- **Single Test Case**: $O(\log n)$
  - The `while` loop executes at most $\log_2(n)$ times, as we divide `n` by `2` in each iteration.
- **Overall Complexity**: $O(t \cdot \log n)$
  - Since there are `t` test cases, the total complexity is proportional to the sum of $\log n$ across all test cases.

---

## Space Complexity

- The space complexity is $O(1)$ per test case because the program uses a constant amount of memory regardless of the input size.

---

## Lessons Learned

1. **Prime Factorization Insight**:
   - Understanding the structure of numbers (e.g., powers of `2`) can simplify problems involving divisors.
   - Removing all factors of `2` efficiently isolates the odd part of a number.

2. **Efficient Computation for Large Inputs**:
   - When dealing with large numbers (up to $10^{14}$), it's crucial to use data types like `long long` in C/C++ to avoid overflow issues.
   - Efficient algorithms (e.g., logarithmic time complexity) are essential for handling multiple test cases within the time limit.

3. **Edge Cases**:
   - Always consider edge cases, such as when `n` is a power of `2` or when `n` is odd. These scenarios often reveal the underlying logic of the problem.

By combining mathematical insights with efficient programming techniques, this problem demonstrates the importance of analyzing number properties and designing optimal solutions.
