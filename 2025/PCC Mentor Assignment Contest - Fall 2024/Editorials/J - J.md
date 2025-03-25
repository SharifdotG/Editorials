# Problem Name: J - J ([CodeForces - 199A: Hexadecimal's theorem](http://codeforces.com/problemset/problem/199/A))

---

## Problem Summary

Hexadecimal, a chaotic virus, has proposed a theorem stating that any Fibonacci number can be represented as the sum of three (not necessarily distinct) Fibonacci numbers. Your task is to verify this theorem for a given Fibonacci number `n`. Specifically, you need to find three Fibonacci numbers `a`, `b`, and `c` such that `a + b + c = n`. If it is impossible to represent `n` in this way, output "I'm too stupid to solve this problem".

The Fibonacci sequence is defined as:

- `F[0] = 0`
- `F[1] = 1`
- `F[i] = F[i-2] + F[i-1]` for `i ≥ 2`

Input is guaranteed to be a Fibonacci number, and the constraints are `0 ≤ n < 10^9`.

---

## How to Approach

This problem revolves around understanding the properties of the Fibonacci sequence and leveraging its recursive nature to construct a solution. The key observation here is that **any Fibonacci number can trivially be expressed as the sum of itself and two zeros**, which are also valid Fibonacci numbers (`F[0] = 0`). This makes the problem much simpler than it initially appears.

For example:

- For `n = 3`, we can write `3 = 0 + 0 + 3`.
- For `n = 13`, we can write `13 = 0 + 0 + 13`.

Thus, the simplest solution is to always output `0 0 n`. However, there may be other valid combinations of Fibonacci numbers that sum up to `n`. For instance:

- For `n = 13`, another valid solution could be `2 + 3 + 8`.

Given the problem guarantees that `n` is a Fibonacci number, we don't need to worry about edge cases where `n` cannot be expressed as the sum of three Fibonacci numbers.

---

## Algorithm on how to solve the problem

1. **Input the Fibonacci number `n`.**
   - Read the integer `n` from the input.

2. **Output the result.**
   - Since `n` is guaranteed to be a Fibonacci number, the simplest solution is to output `0 0 n`.
   - Alternatively, if you want to explore other combinations, iterate through the Fibonacci sequence to find two numbers `a` and `b` such that `a + b = n`. Then, set `c = 0`.

3. **Edge Case Handling:**
   - If `n = 0`, the only valid representation is `0 0 0`.

---

## Accepted Code (C)

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("0 0 %d\n", n);

    return 0;
}
```

---

## Accepted Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "0 0 " << n << endl;

    return 0;
}
```

---

## Explanation of the code

1. **Input Reading:**
   - The program reads an integer `n` from the input using `scanf` (in C) or `cin` (in C++).

2. **Output Generation:**
   - The program directly outputs `0 0 n` because `n` is guaranteed to be a Fibonacci number, and `0` is also a valid Fibonacci number (`F[0] = 0`).

3. **Why This Works:**
   - Any Fibonacci number `n` can be trivially expressed as `0 + 0 + n`. This satisfies the problem's requirement of representing `n` as the sum of three Fibonacci numbers.

4. **Alternative Approach:**
   - If you want to explore other combinations, you can iterate through the Fibonacci sequence to find two numbers `a` and `b` such that `a + b = n`. Then, set `c = 0`. This approach is implemented in the alternate solutions provided.

---

## Time Complexity

- **Simple Solution (`0 0 n`):**
  The time complexity is **O(1)** since no additional computation is required beyond reading the input and printing the output.

- **Iterative Solution (Finding `a` and `b`):**
  The time complexity is **O(log n)** because we generate Fibonacci numbers up to `n`, which grows exponentially.

---

## Space Complexity

- **Simple Solution (`0 0 n`):**
  The space complexity is **O(1)** since no extra memory is used.

- **Iterative Solution (Finding `a` and `b`):**
  The space complexity is **O(1)** because only a few variables are used to store intermediate Fibonacci numbers.

---

## Lessons Learned

1. **Understanding Problem Constraints:**
   - Always carefully read the problem statement and constraints. In this case, the guarantee that `n` is a Fibonacci number simplifies the solution significantly.

2. **Leveraging Properties of Mathematical Sequences:**
   - The Fibonacci sequence has well-known properties, such as the fact that `0` is a valid Fibonacci number. This property allows us to construct trivial solutions like `0 + 0 + n`.

3. **Simplicity Over Complexity:**
   - Sometimes, the simplest solution is the best. Instead of overcomplicating the problem by searching for all possible combinations, recognizing the trivial solution can save time and effort.

4. **Edge Case Awareness:**
   - Always consider edge cases, such as `n = 0`, to ensure your solution handles all scenarios correctly.

By following these principles, you can approach similar problems with confidence and efficiency!
