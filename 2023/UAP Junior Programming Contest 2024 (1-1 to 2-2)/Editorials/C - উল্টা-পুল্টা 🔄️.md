# C - উল্টা-পুল্টা 🔄️ - Editorial

## Understanding the Problem

Priom and Sharif need to reverse a given array but encounter an issue with garbage values when printing the reversed sequence. The task is to assist them in writing a code to reverse a given array of integers and output the reversed sequence.

### Input Format

- The input consists of:
  - `n`: the size of the sequence.
  - `a1 a2 ... an`: elements of the sequence.

### Output Format

- Print the reversed sequence, separating adjacent elements by a single space.

### Constraints

- `n ≤ 100`
- `0 ≤ a(i) < 1000`

## Approach

Both the C and C++ solutions follow a similar logic to solve the problem. They both utilize an array to store the given sequence and then traverse it in reverse order to print the reversed sequence.

### C Solution

```c
#include <stdio.h>

int main() {
    int arraySize;
    scanf("%d", &arraySize);

    int array[arraySize];

    // Input the array elements
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }

    // Reversing and printing the array
    for (int i = arraySize - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}
```

### C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arraySize;
    cin >> arraySize;

    int array[arraySize];

    // Input the array elements
    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }

    // Reversing and printing the array
    for (int i = arraySize - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }

    return 0;
}
```

### Explanation

1. **Input**: Both solutions start by reading the size of the array (`arraySize`) followed by reading the elements of the array.

2. **Array Initialization**: Arrays `array[]` of size `arraySize` are initialized to store the sequence.

3. **Reversing and Printing the Array**:
    - Both solutions use a loop that starts from the last index (`arraySize - 1`) and iterates until the first index (`0`).
    - In each iteration, the code prints the element at the current index in reverse order, separated by a space.

## Complexity Analysis

Both solutions have a time complexity of `O(n)`, where `n` is the size of the sequence. The space complexity is also `O(n)` as they use an array to store the sequence.

## Conclusion

The provided C and C++ solutions offer a straightforward approach to reverse a given array and print the reversed sequence. By following the explanation and understanding the logic, Priom and Sharif can successfully reverse arrays without encountering any issues with garbage values.

Happy coding! 🖥️💡
