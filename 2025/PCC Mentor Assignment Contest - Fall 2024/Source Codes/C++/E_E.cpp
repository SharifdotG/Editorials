#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (char i = 'a'; i <= 'z'; i++) {
            for (char j = 'a'; j <= 'z'; j++) {
                for (char k = 'a'; k <= 'z'; k++) {
                    if (i - 'a' + j - 'a' + k - 'a' + 3 == n) {
                        cout << i << j << k << endl;
                        goto end;
                    }
                }
            }
        }
        end:;
    }

    return 0;
}