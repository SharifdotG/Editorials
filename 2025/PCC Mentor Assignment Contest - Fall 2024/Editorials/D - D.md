# Problem Name: D - D ([CodeForces - 1971C: Clock and Strings](https://codeforces.com/problemset/problem/1971/C))

---

## Problem Summary

Alice and Bob are tying strings on a clock labeled with numbers from 1 to 12 in clockwise order. Alice ties a red string connecting two distinct points \(a\) and \(b\), while Bob ties a blue string connecting two distinct points \(c\) and \(d\). The task is to determine whether the red string intersects the blue string. The strings are straight line segments, and the clock is circular.

<div align="center">
<img src="https://espresso.codeforces.com/1e87df1aba4cbffb31068e202e70b895a23a5586.png">
</div>

You are given multiple test cases, each consisting of four distinct integers \(a\), \(b\), \(c\), and \(d\) (where \(1 \leq a, b, c, d \leq 12\)). For each test case, you need to output "YES" if the strings intersect and "NO" otherwise.

---

## How to Approach

The problem involves determining whether two line segments on a circular clock intersect. Since the clock is circular, we can simplify the problem by considering the relative positions of the endpoints of the strings. Here's the step-by-step approach:

1. **Normalize the Order of Points**:
   - For both Alice's string (\(a, b\)) and Bob's string (\(c, d\)), ensure that the smaller number comes first. This simplifies comparisons later.
   - If \(a > b\), swap \(a\) and \(b\).
   - If \(c > d\), swap \(c\) and \(d\).

2. **Check for Intersection**:
   - On a circular clock, two strings intersect if one string spans across the other. Specifically:
     - If either endpoint of Bob's string (\(c\) or \(d\)) lies within the range of Alice's string (\([a, b]\)), then the strings intersect.
     - Similarly, if either endpoint of Alice's string (\(a\) or \(b\)) lies within the range of Bob's string (\([c, d]\)), then the strings intersect.
   - To check this, iterate through the range of one string and see if any endpoint of the other string falls within that range.

3. **Edge Cases**:
   - Ensure that the points are distinct and within the valid range (\(1\) to \(12\)).
   - Handle cases where the strings are adjacent or overlap but do not intersect.

4. **Output**:
   - If there is exactly one intersection point, output "YES".
   - Otherwise, output "NO".

---

## Algorithm on how to solve the problem

1. **Input Processing**:
   - Read the number of test cases \(t\).
   - For each test case, read four integers \(a\), \(b\), \(c\), and \(d\).

2. **Normalization**:
   - If \(a > b\), swap \(a\) and \(b\).
   - If \(c > d\), swap \(c\) and \(d\).

3. **Intersection Check**:
   - Initialize a counter `cnt` to zero.
   - Iterate through the range \([a, b]\) and check if either \(c\) or \(d\) falls within this range. Increment `cnt` for each match.
   - Similarly, iterate through the range \([c, d]\) and check if either \(a\) or \(b\) falls within this range. Increment `cnt` for each match.
   - If `cnt` equals 1, the strings intersect; otherwise, they do not.

4. **Output**:
   - Print "YES" if the strings intersect, and "NO" otherwise.

---

## Accepted Code (C)

```c
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Normalize the order of points
        if (a > b) {
            swap(&a, &b);
        }
        if (c > d) {
            swap(&c, &d);
        }

        int cnt = 0;
        // Check if c or d lies within [a, b]
        for (int i = a; i <= b; i++) {
            if (i == c || i == d) {
                cnt++;
            }
        }

        // Output based on cnt
        if (cnt == 1) {
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Normalize the order of points
        if (a > b) {
            swap(a, b);
        }
        if (c > d) {
            swap(c, d);
        }

        int cnt = 0;
        // Check if c or d lies within [a, b]
        for (int i = a; i <= b; i++) {
            if (i == c || i == d) {
                cnt++;
            }
        }

        // Output based on cnt
        if (cnt == 1) {
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

1. **Input Reading**:
   - The program reads the number of test cases \(t\) and processes each test case individually.

2. **Normalization**:
   - For each test case, the code ensures that \(a \leq b\) and \(c \leq d\) by swapping the values if necessary. This simplifies the logic for checking intersections.

3. **Intersection Logic**:
   - The code iterates through the range \([a, b]\) and checks if either \(c\) or \(d\) falls within this range. It uses a counter `cnt` to track the number of matches.
   - If exactly one endpoint of Bob's string lies within Alice's string range, the strings intersect.

4. **Output**:
   - Based on the value of `cnt`, the program prints "YES" if the strings intersect and "NO" otherwise.

---

## Time Complexity

- **Normalization**: Swapping \(a\) and \(b\) (if necessary) and \(c\) and \(d\) (if necessary) takes \(O(1)\) time.
- **Intersection Check**: The loop iterates through the range \([a, b]\), which has at most 12 elements (since \(a\) and \(b\) are between 1 and 12). Checking for intersections within this range also takes \(O(1)\) time.
- **Overall**: The time complexity per test case is \(O(1)\).

Given \(t\) test cases, the total time complexity is \(O(t)\).

---

## Space Complexity

- The program uses a constant amount of extra space for variables like `a`, `b`, `c`, `d`, and `cnt`. There are no data structures that grow with input size.
- **Overall**: The space complexity per test case is \(O(1)\).

---

## Lessons Learned

1. **Circular Nature of the Problem**:
   - Understanding the circular nature of the clock helps in simplifying the problem. By normalizing the order of points, we avoid unnecessary complexity.

2. **Efficient Range Checking**:
   - Iterating through a small fixed range (at most 12 elements) is efficient and avoids the need for more complex geometric calculations.

3. **Edge Case Handling**:
   - Always consider edge cases, such as when the strings are adjacent or when one string completely overlaps another. Normalization ensures these cases are handled correctly.

4. **Simplicity is Key**:
   - Sometimes, problems that seem geometrically complex can be solved with simple logic by leveraging the constraints (e.g., the limited range of numbers on the clock).
