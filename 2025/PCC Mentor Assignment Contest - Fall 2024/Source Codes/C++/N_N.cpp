#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), [](int x, int y) {
            if (x % 2 == 0 && y % 2 == 1) {
                return true;
            } else if (x % 2 == 1 && y % 2 == 0) {
                return false;
            } else {
                return x < y;
            }
        });

        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (__gcd(a[i], 2 * a[j]) > 1) {
                    res++;
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}