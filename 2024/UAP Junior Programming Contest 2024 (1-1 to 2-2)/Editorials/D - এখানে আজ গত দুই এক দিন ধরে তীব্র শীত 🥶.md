# D - এখানে আজ গত দুই এক দিন ধরে তীব্র শীত 🥶 - Editorial

**Problem Origin:** [**Kattis - Ekki dauði opna inni**](https://open.kattis.com/problems/ekkidaudi)

## Problem Approach

Sharif needs to reconstruct a sentence from two lines in the newspaper where the correct sequence was disrupted by the symbol **"|"**. The task involves reading two lines and rearranging them to form a meaningful sentence.

## Code Explanation - C

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Declaration of character arrays to store input lines and words
    char line1[101], line2[101];
    fgets(line1, sizeof(line1), stdin);
    fgets(line2, sizeof(line2), stdin);

    // Extracting words before the '|' symbol
    char word1[51], word2[51];
    sscanf(line1, "%[^|]", word1);
    sscanf(line2, "%[^|]", word2);

    // Printing the first part of the sentence
    printf("%s%s ", word1, word2);

    // Extracting words after the '|' symbol
    char word3[51], word4[51];
    sscanf(strchr(line1, '|') + 1, "%[^\n]", word3);
    sscanf(strchr(line2, '|') + 1, "%[^\n]", word4);

    // Printing the second part of the sentence
    printf("%s%s\n", word3, word4);

    return 0;
}
```

- `#include <stdio.h>` and `#include <string.h>`: These lines include the necessary header files for standard input-output operations and string manipulations.
- `char line1[101], line2[101];`: Declaration of character arrays to store the input lines, allowing up to 100 characters per line (plus the null terminator).
- `fgets(line1, sizeof(line1), stdin);`: Reads the first input line from the standard input (keyboard) and stores it in `line1`.
- `fgets(line2, sizeof(line2), stdin);`: Reads the second input line from the standard input and stores it in `line2`.
- `char word1[51], word2[51];`: Declaration of character arrays to store the words extracted from the input lines, allowing up to 50 characters per word (plus the null terminator).
- `sscanf(line1, "%[^|]", word1);`: Extracts characters from `line1` until it encounters the '|' symbol, storing the result in `word1`.
- `sscanf(line2, "%[^|]", word2);`: Extracts characters from `line2` until it encounters the '|' symbol, storing the result in `word2`.
- `printf("%s%s ", word1, word2);`: Prints the first part of the corrected sentence, formed by concatenating `word1` and `word2`.
- `char word3[51], word4[51];`: Declaration of character arrays to store the words after the '|' symbol.
- `sscanf(strchr(line1, '|') + 1, "%[^\n]", word3);`: Finds the '|' symbol in `line1`, moves one character ahead to start reading the next word, and stores it in `word3`.
- `sscanf(strchr(line2, '|') + 1, "%[^\n]", word4);`: Finds the '|' symbol in `line2`, moves one character ahead to start reading the next word, and stores it in `word4`.
- `printf("%s%s\n", word3, word4);`: Prints the second part of the corrected sentence formed by concatenating `word3` and `word4`, followed by a newline character.

This C solution uses C-style string manipulation functions to extract words from input lines and prints the corrected sentence accordingly.

## Code Explanation - C++

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Declaration of string variables to store input lines and words
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    // Extracting words before the '|' symbol
    string word1 = line1.substr(0, line1.find('|'));
    string word2 = line2.substr(0, line2.find('|'));

    // Printing the first part of the sentence
    cout << word1 << word2 << " ";
    
    // Extracting words after the '|' symbol
    string word3 = line1.substr(line1.find('|') + 1, line1.size());
    string word4 = line2.substr(line2.find('|') + 1, line2.size());

    // Printing the second part of the sentence
    cout << word3 << word4 << endl;

    return 0;
}
```

- `#include <bits/stdc++.h>`: This header includes most standard libraries used for competitive programming.
- `using namespace std;`: This line allows using elements from the standard C++ library without explicitly specifying their namespace.
- `string line1, line2;`: Declaration of string variables to store the input lines.
- `getline(cin, line1);` and `getline(cin, line2);`: Reads the input lines from the standard input and stores them in `line1` and `line2`, respectively.
- `string word1 = line1.substr(0, line1.find('|'));` and `string word2 = line2.substr(0, line2.find('|'));`: Extracts characters from `line1` and `line2` until it encounters the '|' symbol, storing the results in `word1` and `word2`, respectively.
- `cout << word1 << word2 << " ";`: Prints the first part of the corrected sentence formed by concatenating `word1` and `word2`, followed by a space.
- `string word3 = line1.substr(line1.find('|') + 1, line1.size());` and `string word4 = line2.substr(line2.find('|') + 1, line2.size());`: Extracts characters from `line1` and `line2` after the '|' symbol, storing the results in `word3` and `word4`, respectively.
- `cout << word3 << word4 << endl;`: Prints the second part of the corrected sentence formed by concatenating `word3` and `word4`, followed by a newline character.

This C++ solution leverages string manipulation methods provided by the C++ Standard Library to achieve the same task as the C solution but with a more modern and concise approach using string objects.

## Complexity Analysis

### Time Complexity

Both C and C++ solutions have a linear time complexity of `O(N)`, where N is the total number of characters in the input lines.

### Space Complexity

- C Solution:
  - Uses arrays to store input lines and words, resulting in a space complexity of `O(N)`.
- C++ Solution:
  - Utilizes string variables to store input lines and words, also resulting in a space complexity of `O(N)`.

This problem has a straightforward approach involving the manipulation and printing of strings or character arrays, resulting in efficient time and space complexities for both solutions.

---

## Happy Coding! 🥶
