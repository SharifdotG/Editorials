# B - খেলা হবে ✊

Sharif and Priom are planning to play a dice game. They have a six-faced die, and the objective is to determine if it's possible to obtain a specific sum by throwing the die multiple times. Let's dive into the solution!

## Approach Explanation

The problem can be approached straightforwardly by analyzing the possibilities of achieving the desired sum Y within X throws of a six-faced die.

The C and C++ code provided uses a simple approach to check if it's possible to get the desired sum Y. Here's a breakdown of the code line by line:

## Code Explanation (C)

```c
#include <stdio.h>

int main() {
    int dieThrows, pickedNumber;

    // Reading input values: number of throws and the desired sum
    scanf("%d %d", &dieThrows, &pickedNumber);

    // Checking if the sum is achievable within the given number of throws
    if (dieThrows <= pickedNumber && pickedNumber <= dieThrows * 6) {
        printf("Yes\n"); // If achievable, print Yes
    } else {
        printf("No\n"); // If not achievable, print No
    }

    return 0;
}
```

Explanation of Code (C++)

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int dieThrows, pickedNumber;

    // Reading input values: number of throws and the desired sum
    cin >> dieThrows >> pickedNumber;

    // Checking if the sum is achievable within the given number of throws
    if (dieThrows <= pickedNumber && pickedNumber <= dieThrows * 6) {
        cout << "Yes" << endl; // If achievable, print Yes
    } else {
        cout << "No" << endl; // If not achievable, print No
    }

    return 0;
}
```

## Explanation of the Code Logic

- `dieThrows` represents the number of throws.
- `pickedNumber` is the desired sum Y.
- The condition `dieThrows <= pickedNumber && pickedNumber <= dieThrows * 6` checks if it's theoretically possible to achieve the sum. This condition ensures that the desired sum falls within the possible range of outcomes based on the number of throws and the die's faces (1 to 6).
- If the condition holds true, it prints "Yes," indicating that it's possible to achieve the sum Y within X throws. Otherwise, it prints "No."

## Complexity Analysis

The time complexity of this solution is O(1) because it performs a constant number of operations irrespective of the input values.

## Conclusion

The provided C and C++ solutions offer a straightforward approach to solve the problem by checking the feasibility of obtaining the desired sum Y within X throws of a six-faced die. The logic efficiently determines whether Sharif can win the game against Priom based on the given conditions.

Feel free to experiment and optimize this logic further, although the given code provides a quick and effective solution to the problem.

Happy Coding! 🎲✨
