// G - ইমনের অদ্ভুত প্যাটার্ন 👀

#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;
 
    if (number == 1) {
        cout << 1 << endl;
    } else if (number < 4) {
        cout << "NO SOLUTION" << endl;
    } else if (number == 4) {
        cout << "2 4 1 3" << endl;
    } else {
        for (int i = 1; i <= number; i += 2) {
            cout << i << " ";
        }
 
        for (int i = 2; i <= number; i += 2) {
            cout << i << " ";
        }
    }

    return 0;
}