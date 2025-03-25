# Problem Name: M - M ([CodeForces - 1918B: Minimize Inversions](http://codeforces.com/problemset/problem/1918/B))

---

## Problem Summary

You are given two permutations `a` and `b` of length `n`. You can perform operations where you simultaneously swap elements at indices `i` and `j` in both permutations. Your goal is to minimize the total number of inversions in both permutations after performing any number of such operations. An inversion in a permutation is defined as a pair `(i, j)` such that `i < j` and `p[i] > p[j]`.

The task is to output the modified permutations `a'` and `b'` such that the total number of inversions in both is minimized.

---

## How to Approach

To solve this problem, we need to leverage the fact that the operations allow us to rearrange both permutations simultaneously. The key insight is that sorting one of the permutations (say `a`) will automatically minimize its inversions because a sorted array has zero inversions. Simultaneously, the second permutation (`b`) will be rearranged according to the same order as `a`.

By sorting `a` and applying the same reordering to `b`, we ensure that the total number of inversions in both permutations is minimized. This works because the relative ordering of elements in `b` is preserved with respect to the sorted order of `a`.

---

## Algorithm on how to solve the problem

1. **Input Parsing**:
   - Read the number of test cases `t`.
   - For each test case, read the length of the permutations `n` and the two permutations `a` and `b`.

2. **Sorting and Reordering**:
   - Pair each element of `a` with the corresponding element of `b` to maintain their relationship.
   - Sort the pairs based on the values of `a`. This ensures that `a` becomes sorted.
   - Reorder `b` based on the new order of `a`.

3. **Output**:
   - Print the sorted permutation `a`.
   - Print the reordered permutation `b`.

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

        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[a[i] - 1]);
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", i + 1);
        }
        printf("\n");

        for (int i = 0; i < n; i++) {
            printf("%d ", b[i]);
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

        pair<int, int> a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i].second;
        }

        sort(a, a + n);

        for (int i = 0; i < n; i++) {
            cout << a[i].first << " ";
        }
        cout << endl;

        for (int i = 0; i < n; i++) {
            cout << a[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}
```

---

## Explanation of the code

1. **Input Parsing**:
   - In both implementations, we first read the number of test cases `t`.
   - For each test case, we read the length of the permutations `n` and the two arrays `a` and `b`.

2. **Pairing and Sorting**:
   - In the C++ implementation, we use an array of pairs to store the elements of `a` and `b` together. Sorting this array by the first element (values of `a`) ensures that `a` becomes sorted, and `b` is reordered accordingly.
   - In the C implementation, we directly reorder `b` based on the sorted order of `a` by using the values of `a` as indices.

3. **Output**:
   - After sorting, we print the sorted permutation `a` and the reordered permutation `b`.

---

## Time Complexity

- **Input Parsing**: O(n) for reading the arrays.
- **Sorting**: O(n log n) for sorting the pairs or reordering the arrays.
- **Output**: O(n) for printing the results.

Thus, the overall time complexity per test case is **O(n log n)**.

---

## Space Complexity

- **Storing Arrays**: O(n) for storing the permutations `a` and `b`.
- **Auxiliary Space**: O(n) for the array of pairs in the C++ implementation.

Thus, the space complexity per test case is **O(n)**.

---

## Lessons Learned

1. **Understanding Permutations and Inversions**:
   - A sorted permutation has zero inversions, which is the minimum possible.
   - Rearranging one permutation affects the other when simultaneous swaps are allowed.

2. **Efficient Sorting**:
   - Sorting is a powerful tool for minimizing inversions and can often simplify problems involving permutations.

3. **Simultaneous Operations**:
   - When operations affect multiple arrays simultaneously, pairing elements and sorting them together can preserve relationships between arrays.

4. **Optimization**:
   - By focusing on minimizing inversions in one array, we indirectly minimize inversions in the other, leading to an elegant solution.

This problem highlights the importance of understanding the properties of permutations and leveraging sorting to achieve optimal results efficiently.
