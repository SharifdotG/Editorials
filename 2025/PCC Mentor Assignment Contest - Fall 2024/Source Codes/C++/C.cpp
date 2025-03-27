#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        double r;
        cin >> r;

        double PI = 2 * acos(0.0);

        double area_circle = PI * r * r;
        double area_square = 4 * r * r;

        cout << fixed << setprecision(2) << "Case " << i << ": "
             << area_square - area_circle << endl;
    }

    return 0;
}