# Problem Name: N - N ([CodeForces - 1535B: Array Reordering](http://codeforces.com/problemset/problem/1535/B))

---

## Problem Summary

You are given an array `a` of `n` integers. A pair of indices `(i, j)` is considered "good" if `1 ≤ i < j ≤ n` and `gcd(a[i], 2 * a[j]) > 1`. Your task is to reorder the array in such a way that maximizes the number of good pairs `(i, j)`.

The problem challenges you to think about how reordering the array can influence the number of valid pairs and requires understanding properties of the greatest common divisor (GCD).

---

## How to Approach

To solve this problem, we need to maximize the number of good pairs `(i, j)` where `gcd(a[i], 2 * a[j]) > 1`. The key observation here is that the GCD condition depends on the relationship between `a[i]` and `2 * a[j]`. Specifically:

- If `a[i]` and `2 * a[j]` share a common factor greater than 1, the pair is good.
- Even numbers are more likely to satisfy this condition because multiplying them by 2 retains their factors.

### Key Observations

1. **Even Numbers Are Favorable**:
   - If `a[j]` is even, then `2 * a[j]` will have more factors, making it easier for `gcd(a[i], 2 * a[j]) > 1` to hold true.
   - Placing even numbers earlier in the array increases the chances of forming good pairs with subsequent elements.

2. **Sorting Strategy**:
   - Sort the array such that all even numbers appear before odd numbers. Within each group (even or odd), sort the numbers in ascending order.
   - This ensures that the most favorable pairs are formed first, maximizing the count of good pairs.

3. **Brute Force Pair Counting**:
   - After sorting, iterate through all possible pairs `(i, j)` and check if `gcd(a[i], 2 * a[j]) > 1`.
   - Count the number of such pairs.

---

## Algorithm on How to Solve the Problem

1. **Input Parsing**:
   - Read the number of test cases `t`.
   - For each test case, read the size of the array `n` and the array elements.

2. **Sorting**:
   - Sort the array such that all even numbers come before odd numbers. Within each group, sort in ascending order.

3. **Pair Counting**:
   - Iterate through all pairs `(i, j)` where `i < j`.
   - For each pair, compute `gcd(a[i], 2 * a[j])` and check if it is greater than 1.
   - Increment the result counter for each valid pair.

4. **Output**:
   - Print the result for each test case.

---

## Accepted Code (C)

```c
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Custom comparator function for qsort
int compare(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x % 2 == 0 && y % 2 == 1) {
        return -1; // x comes before y
    } else if (x % 2 == 1 && y % 2 == 0) {
        return 1;  // y comes before x
    } else {
        return x - y; // ascending order within same parity
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), compare);

        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(a[i], 2 * a[j]) > 1) {
                    res++;
                }
            }
        }

        printf("%d\n", res);
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), [](int x, int y) {
            if (x % 2 == 0 && y % 2 == 1) {
                return true;
            } else if (x % 2 == 1 && y % 2 == 0) {
                return false;
            } else {
                return x < y;
            }
        });

        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (__gcd(a[i], 2 * a[j]) > 1) {
                    res++;
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}
```

---

## Explanation of the Code

1. **Sorting Logic**:
   - Both implementations use a custom sorting logic to place even numbers before odd numbers. Within each group, numbers are sorted in ascending order.
   - In C, this is achieved using `qsort` with a custom comparator.
   - In C++, the `std::sort` function is used with a lambda comparator.

2. **Pair Counting**:
   - After sorting, a nested loop iterates through all pairs `(i, j)` where `i < j`.
   - For each pair, the GCD of `a[i]` and `2 * a[j]` is computed using the `gcd` function.
   - If the GCD is greater than 1, the pair is counted as good.

3. **Output**:
   - The result for each test case is printed after processing all pairs.

---

## Time Complexity

- **Sorting**: Sorting the array takes $O(n \log n)$.
- **Pair Counting**: The nested loop iterates over all pairs, which takes $O(n^2)$.
- **Overall**: For each test case, the time complexity is $O(n \log n + n^2)$.

Given the constraints ($n \leq 2000$ and total $n$ across all test cases $\leq 2000$), this approach is efficient.

---

## Space Complexity

- The space complexity is $O(n)$ for storing the array.

---

## Lessons Learned

1. **Custom Sorting Can Be Powerful**:
   - By strategically ordering elements, we can optimize the solution for specific conditions (e.g., placing even numbers first).

2. **Understanding GCD Properties**:
   - Knowing how GCD interacts with multiplication and parity helps simplify the problem.

3. **Efficient Brute Force**:
   - While brute force may seem inefficient, careful preprocessing (like sorting) can make it feasible within constraints.

This problem beautifully combines sorting strategies, mathematical insights, and algorithmic thinking to arrive at an elegant solution.
