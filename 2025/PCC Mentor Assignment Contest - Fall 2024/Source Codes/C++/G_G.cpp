#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        set<int> s = {a1 + a2, a4 - a2, a5 - a4};

        cout << 4 - s.size() << endl;
    }

    return 0;
}