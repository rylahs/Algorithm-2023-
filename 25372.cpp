#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        cout << (6 <= s.length() && s.length() <= 9 ? "yes" : "no") << "\n";
    }
    return 0;
}