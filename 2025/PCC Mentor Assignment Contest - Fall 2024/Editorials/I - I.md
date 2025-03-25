# Problem Name: I - Arrival of the General ([CodeForces - 144A: Arrival of the General](http://codeforces.com/problemset/problem/144/A))

---

## Problem Summary

In this problem, we are tasked with helping a colonel rearrange soldiers in a line such that the general considers the lineup "correct." The general's criteria for correctness are:

1. The first soldier must have the **maximum height**.
2. The last soldier must have the **minimum height**.

The soldiers are initially arranged arbitrarily, and the colonel can swap any two neighboring soldiers in one second. Our goal is to determine the **minimum number of seconds** required to rearrange the soldiers to satisfy the general's criteria.

---

## How to Approach

To solve this problem, we need to identify the positions of the tallest and shortest soldiers in the lineup. Once identified:

1. Move the tallest soldier to the front of the line.
2. Move the shortest soldier to the end of the line.

Since each swap involves moving a soldier by one position, the total time required is simply the sum of the distances these two soldiers need to travel. However, we must account for an edge case where the tallest soldier is positioned after the shortest soldier, as swapping them would reduce the total distance by one step.

---

## Algorithm on how to solve the problem

1. **Input Parsing**: Read the number of soldiers `n` and their heights into an array.
2. **Identify Positions**:
   - Find the index of the **first occurrence** of the maximum height (`max_idx`).
   - Find the index of the **last occurrence** of the minimum height (`min_idx`).
3. **Calculate Swaps**:
   - If `max_idx > min_idx`, the swaps overlap, so subtract 1 from the total distance.
   - Otherwise, calculate the total swaps as:

     ```c++
     max_idx + (n - 1 - min_idx)
     ```

4. **Output the Result**: Print the computed number of swaps.

---

## Accepted Code (C)

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[101], max = 0, min = 101, max_idx = 0, min_idx = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > max) {
            max = a[i];
            max_idx = i;
        }

        if (a[i] <= min) {
            min = a[i];
            min_idx = i;
        }
    }

    if (max_idx > min_idx) {
        printf("%d\n", max_idx - 1 + n - min_idx - 1);
    } else {
        printf("%d\n", max_idx + n - min_idx - 1);
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

    vector<int> a(n);
    int max = 0, min = 101, max_idx, min_idx;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] > max) {
            max = a[i];
            max_idx = i;
        }

        if (a[i] <= min) {
            min = a[i];
            min_idx = i;
        }
    }

    if (max_idx > min_idx) {
        cout << max_idx - 1 + n - min_idx - 1 << endl;
    } else {
        cout << max_idx + n - min_idx - 1 << endl;
    }

    return 0;
}
```

---

## Explanation of the code

1. **Input Parsing**:
   - We read the number of soldiers `n` and store their heights in an array or vector.
2. **Finding Maximum and Minimum Heights**:
   - As we iterate through the array, we keep track of the maximum height (`max`) and its index (`max_idx`).
   - Similarly, we track the minimum height (`min`) and its index (`min_idx`). For the minimum, we prioritize the **last occurrence** by updating only when `a[i] <= min`.
3. **Calculating Swaps**:
   - If the maximum soldier is positioned after the minimum (`max_idx > min_idx`), their paths overlap, so we subtract 1 from the total swaps.
   - Otherwise, we calculate the total swaps as the sum of the steps required to move the tallest soldier to the front and the shortest soldier to the end.
4. **Output**:
   - The result is printed as the minimum number of swaps required.

---

## Time Complexity

- **O(n)**: We iterate through the array once to find the maximum and minimum indices, which takes linear time.

---

## Space Complexity

- **O(n)**: We store the heights of the soldiers in an array or vector.

---

## Lessons Learned

1. **Greedy Approach**: This problem demonstrates the effectiveness of a greedy strategy where we directly move the tallest and shortest soldiers to their respective positions.
2. **Edge Case Handling**: Pay attention to scenarios where the tallest and shortest soldiers' paths overlap, as it affects the total number of swaps.
3. **Efficient Input Parsing**: Using simple loops and conditionals ensures optimal performance even for larger inputs within the constraints.
4. **Index Tracking**: Keeping track of indices dynamically helps avoid unnecessary recomputation and simplifies the solution.

This problem is a great example of how careful observation and logical reasoning can lead to an efficient and elegant solution!
