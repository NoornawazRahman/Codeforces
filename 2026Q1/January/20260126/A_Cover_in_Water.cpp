#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const char nl = '\n';

template <typename T>
vector<T> scan(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

void solve();

int main() {
    ll test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int countDot = 0;
    for (int i = 0; i < n; i++) {
        if (i - 1 >= 0 && i + 1 <= n - 1 && s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') {
            cout << 2 << nl;
            return;
        }
        if (s[i] == '.') {
            countDot++;
        }
    }
    cout << countDot << nl;
}