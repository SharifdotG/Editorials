// F - শেষ অঙ্ক 🔢

#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int number;
        cin >> number;

        int factorial = 1;
        
        for (int j = 1; j <= number; j++) {
            factorial *= j;
        }
        
        int lastFactorialDigit = factorial % 10;

        cout << lastFactorialDigit << endl;
    }

    return 0;
}