// B - খেলা হবে ✊

#include <bits/stdc++.h>

using namespace std;

int main() {
    int dieThrows, pickedNumber;

    cin >> dieThrows >> pickedNumber;

    if (dieThrows <= pickedNumber && pickedNumber <= dieThrows * 6) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}