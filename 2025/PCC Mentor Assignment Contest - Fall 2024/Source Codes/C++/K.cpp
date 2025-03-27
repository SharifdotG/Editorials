#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> d = {500, 100, 50, 10, 5, 1}, res;
    for (int coin : d) {
        while (n >= coin) {
            n -= coin;
            res.push_back(coin);
        }
    }

    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] << " ";
    }

    cout << endl;

    return 0;
}