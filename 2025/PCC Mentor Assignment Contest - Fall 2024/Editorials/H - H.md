# Problem Name: H - H ([CodeForces - 2037A: Twice](http://codeforces.com/problemset/problem/2037/A))

---

## Problem Summary

Kinich receives an array `a` of integers and wants to maximize his score by performing a specific operation. The operation involves selecting two indices `i` and `j` such that `a[i] = a[j]` and neither index has been used in any previous operation. For each valid pair, Kinich adds 1 to his score. The task is to determine the maximum score Kinich can achieve.

---

## How to Approach

The problem revolves around identifying pairs of identical elements in the array without reusing any index. A natural way to approach this is to count the frequency of each element in the array. Once we know how many times each element appears, we can determine how many valid pairs can be formed from those occurrences.

For example:

- If an element appears 4 times, it contributes 2 pairs.
- If an element appears 3 times, it contributes 1 pair (since only 2 elements can form a pair).
- If an element appears 1 time, it contributes no pairs.

Thus, the solution boils down to counting the frequency of each element and summing up the number of pairs that can be formed for each unique element.

---

## Algorithm on how to solve the problem

1. **Input Parsing**: Read the number of test cases `t`. For each test case, read the size of the array `n` and the array itself.
2. **Frequency Counting**: Use a frequency array (or hash map) to count how many times each element appears in the array.
3. **Pair Calculation**: For each unique element, calculate the number of pairs it can contribute using integer division (`frequency / 2`).
4. **Summation**: Sum up the contributions from all elements to get the total score.
5. **Output**: Print the total score for each test case.

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

        int a[n], freq[n + 1];

        // Initialize frequency array to 0
        for (int i = 0; i <= n; i++) {
            freq[i] = 0;
        }

        // Read array and update frequency
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            freq[a[i]]++;
        }

        // Calculate result
        int res = 0;
        for (int i = 1; i <= n; i++) {
            res += freq[i] / 2;
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

        vector<int> a(n), freq(n + 1, 0);

        // Read array and update frequency
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        // Calculate result
        int res = 0;
        for (int i = 1; i <= n; i++) {
            res += freq[i] / 2;
        }

        cout << res << endl;
    }

    return 0;
}
```

---

## Explanation of the code

1. **Input Handling**:
   - The program starts by reading the number of test cases `t`.
   - For each test case, it reads the size of the array `n` and the array elements.

2. **Frequency Array**:
   - A frequency array `freq` of size `n + 1` is initialized to store the count of each element in the array. The extra space (`n + 1`) ensures that elements ranging from `1` to `n` are handled correctly.

3. **Counting Frequencies**:
   - As the array is read, the frequency of each element is updated in the `freq` array.

4. **Calculating Pairs**:
   - For each unique element, the number of pairs it contributes is calculated as `freq[i] / 2` (integer division). This value is added to the result.

5. **Output**:
   - The final score for each test case is printed.

---

## Time Complexity

- Reading the array takes $O(n)$.
- Calculating the frequency of elements takes $O(n)$.
- Iterating through the frequency array to compute the result takes $O(n)$.
- Therefore, the time complexity for each test case is $O(n)$.

Since there are `t` test cases, the overall time complexity is $O(t \cdot n)$. Given the constraints ($t \leq 500$, $n \leq 20$), this is efficient enough.

---

## Space Complexity

- The space required for the array `a` is $O(n)$.
- The space required for the frequency array `freq` is $O(n)$.
- Thus, the space complexity for each test case is $O(n)$.

---

## Lessons Learned

1. **Frequency Counting**: Problems involving pairing or grouping often benefit from frequency counting. Using a frequency array or hash map simplifies the process of tracking occurrences.
2. **Efficient Pairing**: When forming pairs, always consider integer division (`frequency / 2`) to determine the number of valid pairs.
3. **Constraints Analysis**: Understanding the constraints helps in choosing the right data structures and algorithms. In this case, the small value of `n` allowed us to use a simple frequency array.
4. **Practice with Arrays**: This problem highlights the importance of practicing array manipulation and frequency-based problems, which are common in competitive programming.

---

This editorial provides a comprehensive guide to solving the problem, from understanding the requirements to implementing an efficient solution.
