#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int cakewalk = 0, simple = 0, easy = 0, medium = 0, hard = 0;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            if (s == "cakewalk") {
                cakewalk++;
            } else if (s == "simple") {
                simple++;
            } else if (s == "easy") {
                easy++;
            } else if (s == "easy-medium" || s == "medium") {
                medium++;
            } else if (s == "medium-hard" || s == "hard") {
                hard++;
            } else {
                i++;
            }
        }

        if (cakewalk > 0 && simple > 0 && easy > 0 && medium > 0 && hard > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}