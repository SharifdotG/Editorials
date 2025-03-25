# Problem Name: E - E ([CodeForces - 1931A: Recovering a Small String](http://codeforces.com/problemset/problem/1931/A))

---

## Problem Summary

Nikita had a three-letter word consisting of lowercase Latin letters. He encoded this word as the sum of the positions of its characters in the alphabet (e.g., "cat" is encoded as `3 + 1 + 20 = 24`). However, this encoding is ambiguous because multiple words can result in the same encoded value. Your task is to determine the **lexicographically smallest** three-letter word that could have been encoded for a given integer $n$. A string $a$ is lexicographically smaller than $b$ if $a$ appears earlier in dictionary order.

---

## How to Approach

To solve this problem, we need to generate all possible three-letter combinations of lowercase Latin letters and check their encoded values. Since we are asked to find the lexicographically smallest word, we should prioritize generating words in lexicographical order. This ensures that the first valid word we find is the smallest one.

The key steps are:

1. Iterate over all possible combinations of three letters (`i`, `j`, `k`) in lexicographical order.
2. For each combination, calculate the encoded value as the sum of the positions of the letters in the alphabet.
3. Stop as soon as you find a combination whose encoded value matches the input $n$, since this will be the lexicographically smallest solution.

---

## Algorithm on how to solve the problem

1. **Input Handling**: Read the number of test cases $t$, followed by $t$ integers $n$.
2. **Iterate Over Letters**: For each test case, iterate over all possible combinations of three letters (`i`, `j`, `k`), where $i, j, k \in \{'a', 'b', ..., 'z'\}$.
   - Convert each letter to its position in the alphabet using $\text{position} = \text{letter} - 'a' + 1$.
   - Calculate the encoded value as $\text{encoded\_value} = (\text{position of } i) + (\text{position of } j) + (\text{position of } k)$.
3. **Check Validity**: If the encoded value matches $n$, output the combination immediately and stop further iterations for that test case.
4. **Output**: Print the lexicographically smallest word for each test case.

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

        for (char i = 'a'; i <= 'z'; i++) {
            for (char j = 'a'; j <= 'z'; j++) {
                for (char k = 'a'; k <= 'z'; k++) {
                    if (i - 'a' + j - 'a' + k - 'a' + 3 == n) {
                        printf("%c%c%c\n", i, j, k);
                        goto end;
                    }
                }
            }
        }
        end:;
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

        for (char i = 'a'; i <= 'z'; i++) {
            for (char j = 'a'; j <= 'z'; j++) {
                for (char k = 'a'; k <= 'z'; k++) {
                    if (i - 'a' + j - 'a' + k - 'a' + 3 == n) {
                        cout << i << j << k << endl;
                        goto end;
                    }
                }
            }
        }
        end:;
    }

    return 0;
}
```

---

## Explanation of the code

1. **Outer Loop**: The outermost loop iterates over the first letter (`i`) of the word, starting from `'a'` and ending at `'z'`.
2. **Middle Loop**: The middle loop iterates over the second letter (`j`) of the word, also ranging from `'a'` to `'z'`.
3. **Inner Loop**: The innermost loop iterates over the third letter (`k`) of the word, again ranging from `'a'` to `'z'`.
4. **Condition Check**: For each combination of letters, the condition checks whether the sum of their positions equals $n$. If true, the word is printed, and the program skips to the next test case using `goto`.
5. **Lexicographical Order**: Since the loops iterate in increasing order of letters, the first valid combination found is guaranteed to be the lexicographically smallest.

---

## Time Complexity

- The algorithm involves three nested loops, each iterating over 26 letters. Therefore, the time complexity for each test case is $O(26^3) = O(17576)$, which is effectively constant time.
- For $t$ test cases, the total time complexity is $O(t \cdot 17576)$, which simplifies to $O(t)$ since $17576$ is a constant.

---

## Space Complexity

- The space complexity is $O(1)$ per test case because no additional data structures are used apart from a few variables for iteration and calculation.

---

## Lessons Learned

1. **Lexicographical Order**: When solving problems that require finding the smallest or largest solution in lexicographical order, always prioritize generating candidates in that order to ensure correctness and efficiency.
2. **Brute Force with Pruning**: Even though brute force solutions may seem inefficient, they can often be optimized by stopping early when a valid solution is found.
3. **Alphabet Position Mapping**: Converting between letters and their positions in the alphabet is a common task in programming contests. Mastering this conversion can save time during implementation.
4. **Use of Goto**: While `goto` is generally discouraged in modern programming, it can occasionally simplify control flow in specific scenarios like this one, where breaking out of multiple nested loops is required.

By understanding these concepts, you can tackle similar problems involving encoding, decoding, and lexicographical ordering with confidence!
