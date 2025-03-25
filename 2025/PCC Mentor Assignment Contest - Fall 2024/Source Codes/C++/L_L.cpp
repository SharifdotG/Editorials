#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = count(s.begin(), s.end(), 'a');

    cout << min(cnt * 2 - 1, (int)s.size()) << endl;

    return 0;
}