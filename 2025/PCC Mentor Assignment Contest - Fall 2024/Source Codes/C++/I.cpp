#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << (1 << __builtin_popcount(n)) - 1 << endl;

    return 0;
}