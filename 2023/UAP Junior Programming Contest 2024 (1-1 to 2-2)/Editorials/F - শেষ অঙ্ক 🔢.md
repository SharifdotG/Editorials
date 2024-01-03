# F - শেষ অঙ্ক 🔢 - Editorial

**Problem Origin:** [Kattis - Last Factorial Digit](https://open.kattis.com/problems/lastfactorialdigit)

## Problem Approach

The problem asks to find the last digit of N! (factorial of N). Factorials can grow rapidly, making it impractical to compute the entire factorial for larger values of N. However, we can optimize and only consider the last digit of the factorial, which determines the overall last digit of N!.

### Code Explanation (C)

```c
#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        int number;
        scanf("%d", &number);

        int factorial = 1;

        // Calculating the factorial of the given number
        for (int j = 1; j <= number; j++) {
            factorial *= j;
        }

        // Extracting the last digit of the factorial
        int lastFactorialDigit = factorial % 10;

        printf("%d\n", lastFactorialDigit);
    }

    return 0;
}
```

**Explanation:**  

- The code reads the number of test cases.
- For each test case, it computes the factorial of the given number by multiplying all integers from 1 to N.
- The last digit of the factorial is then obtained by taking the modulo 10 of the calculated factorial.
- Finally, it prints the last digit of the factorial for each test case.

### Code Explanation (C++)

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        int factorial = 1;
        
        // Calculating the factorial of the given number
        for (int j = 1; j <= number; j++) {
            factorial *= j;
        }

        // Converting the factorial to string and extracting the last digit
        string lastFactorialDigit = to_string(factorial);

        cout << lastFactorialDigit[lastFactorialDigit.length() - 1] << endl;
    }

    return 0;
}
```

**Explanation:**  

- Similar to the C code, it reads the number of test cases.
- For each test case, it calculates the factorial of the given number by multiplying all integers from 1 to N.
- Unlike the C code, it converts the factorial to a string.
- The last digit of the factorial is obtained by accessing the last character of the string representation of the factorial.
- Finally, it prints the last digit of the factorial for each test case.

### Code Explanation (Alternative C++)

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        int factorial = 1;
        
        // Calculating the factorial of the given number
        for (int j = 1; j <= number; j++) {
            factorial *= j;
        }
        
        // Extracting the last digit of the factorial
        int lastFactorialDigit = factorial % 10;

        cout << lastFactorialDigit << endl;
    }

    return 0;
}
```

**Explanation:**  

- This alternative C++ code shares similarities with the C code.
- It reads the number of test cases and calculates the factorial of the given number.
- Similar to the C code, it extracts the last digit of the factorial by taking the modulo 10 of the calculated factorial.
- Finally, it prints the last digit of the factorial for each test case.

### Complexity Analysis

**Time Complexity:**  
The time complexity for both C and C++ codes is O(N) since they use a loop to calculate the factorial by multiplying numbers from 1 to N.

**Space Complexity:**  
The space complexity for the C codes is O(1) since they use only a few integer variables. The first C++ code has an additional string variable, resulting in a space complexity of O(N) where N is the length of the factorial string. The alternative C++ code maintains O(1) space complexity.

---

Happy Coding! 🔢
