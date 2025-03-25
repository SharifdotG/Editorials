#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), freq(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int res = 0;
        for (int i = 1; i <= n; i++) {
            res += freq[i] / 2;
        }

        cout << res << endl;
    }

    return 0;
}