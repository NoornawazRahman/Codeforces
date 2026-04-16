#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int64_t>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

void solve();
template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    x = abs(x);
    y = abs(y);
    string s;
    cin >> s;
    int count4 = 0;
    for (auto c : s) {
        if (c == '4') count4++;
    }
    int a = count4;
    int b = n - count4;
    if (x <= n && y <= n) {
        bool condition = (a + 2 * b >= x + y);
        if (condition) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    } else {
        cout << "NO" << nl;
    }
}
