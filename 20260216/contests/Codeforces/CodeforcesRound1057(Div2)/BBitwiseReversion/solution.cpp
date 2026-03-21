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
    int x, y, z;
    cin >> x >> y >> z;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 32; i++) {
        if ((x >> i) & 1) {
            a = a | (1 << i);
            b = b | (1 << i);
        }
        if ((y >> i) & 1) {
            b = b | (1 << i);
            c = c | (1 << i);
        }
        if ((z >> i) & 1) {
            c = c | (1 << i);
            a = a | (1 << i);
        }
    }
    if ((a & b) == x && (b & c) == y && (c & a) == z) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}
