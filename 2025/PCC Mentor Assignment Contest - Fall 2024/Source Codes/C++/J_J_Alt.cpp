#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "0 0 0" << endl;
    } else {
        int a = 0, b = 1, c = 1;
        while (c != n) {
            a = b;
            b = c;
            c = a + b;
        }

        cout << a << " " << b << " 0" << endl;
    }

    return 0;
}