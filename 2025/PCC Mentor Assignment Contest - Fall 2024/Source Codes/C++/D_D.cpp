#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > b) {
            swap(a, b);
        }
        if (c > d) {
            swap(c, d);
        }

        int cnt = 0;
        for (int i = a; i <= b; i++) {
            if (i == c || i == d) {
                cnt++;
            }
        }

        if (cnt == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}