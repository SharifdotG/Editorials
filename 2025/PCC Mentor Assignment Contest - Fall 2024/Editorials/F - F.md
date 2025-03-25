# Problem Name: F - F ([CodeForces - 472A: Design Tutorial: Learn from Math](http://codeforces.com/problemset/problem/472/A))

---

## Problem Summary

The problem revolves around expressing a given integer $n$ (where $n \geq 12$) as the sum of two composite numbers. A composite number is a positive integer greater than 1 that is not prime, meaning it has divisors other than 1 and itself. The task is to find two such composite integers $x$ and $y$ such that $x + y = n$. If multiple solutions exist, any valid pair can be output.

---

## How to Approach

To solve this problem, we need to:

1. Understand the definition of composite numbers and identify simple composite numbers like $4, 6, 8, 9, 10,$ etc.
2. Exploit the parity (even or odd nature) of $n$ to simplify the solution:
   - If $n$ is even, subtracting $4$ (a composite number) will yield another even number, which is also composite.
   - If $n$ is odd, subtracting $9$ (a composite number) will yield an even number, which is guaranteed to be composite.
3. Output the pair $(x, y)$ such that $x + y = n$, where both $x$ and $y$ are composite numbers.

This approach works because:

- For even $n$, $n - 4$ is always composite when $n \geq 12$.
- For odd $n$, $n - 9$ is always composite when $n \geq 12$.

---

## Algorithm on how to solve the problem

1. Read the input integer $n$.
2. Check if $n$ is even:
   - If yes, output $4$ and $n - 4$.
3. Otherwise, $n$ is odd:
   - Output $9$ and $n - 9$.
4. Ensure that both numbers in the pair are composite and satisfy $x + y = n$.

---

## Accepted Code (C)

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("4 %d\n", n - 4);
    } else {
        printf("9 %d\n", n - 9);
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
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << 4 << " " << n - 4 << endl;
    } else {
        cout << 9 << " " << n - 9 << endl;
    }

    return 0;
}
```

---

## Explanation of the code

1. **Input Handling**:
   - The code reads the integer $n$ from the input.

2. **Parity Check**:
   - If $n$ is even ($n \% 2 == 0$), it outputs $4$ and $n - 4$. Since $4$ is composite, and $n - 4$ is guaranteed to be composite for $n \geq 12$, this satisfies the problem constraints.
   - If $n$ is odd, it outputs $9$ and $n - 9$. Similarly, $9$ is composite, and $n - 9$ is guaranteed to be composite for $n \geq 12$.

3. **Output**:
   - The two composite numbers are printed in the required format.

---

## Time Complexity

The time complexity of the solution is $O(1)$ per test case. This is because:

- Reading the input takes constant time.
- Checking the parity of $n$ and performing subtraction are constant-time operations.

Thus, the overall time complexity is $O(1)$.

---

## Space Complexity

The space complexity of the solution is $O(1)$. This is because:

- Only a single integer variable $n$ is used to store the input.
- No additional data structures or memory allocations are required.

Thus, the overall space complexity is $O(1)$.

---

## Lessons Learned

1. **Understanding Composite Numbers**:
   - Composite numbers are integers greater than 1 that are not prime. Recognizing small composite numbers like $4, 6, 8, 9,$ etc., can simplify many problems.

2. **Exploiting Parity**:
   - Even and odd properties of numbers can often lead to elegant solutions. In this problem, leveraging the parity of $n$ allowed us to reduce the problem to simple arithmetic operations.

3. **Problem-Specific Insights**:
   - Sometimes, mathematical insights specific to a problem (like the behavior of composite numbers) can lead to efficient and straightforward solutions without requiring complex algorithms.

4. **Simplicity Over Complexity**:
   - While it might seem tempting to use advanced algorithms or checks, sometimes the simplest approach (like directly subtracting known composite numbers) is the most effective.

By combining these lessons, we can tackle similar problems involving number theory and mathematical properties with confidence and clarity.
