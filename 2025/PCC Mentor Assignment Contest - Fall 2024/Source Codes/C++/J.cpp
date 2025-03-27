#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool ok = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] > s[i + 1]) {
                s.erase(i, 1);
                ok = true;
                break;
            }
        }

        if (!ok) {
            s.pop_back();
        }

        cout << s << endl;
    }

    return 0;
}