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
    int n, y, r;
    cin >> n >> y >> r;
    int suspended = 0;
    if (n >= r) {
        suspended += r;
        n -= r;
    } else {
        suspended += n;
        n = 0;
    }
    if (n == 0) {
        cout << suspended << nl;
        return;
    }

    if (n >= y / 2) {
        suspended += y / 2;
        n -= y / 2;
    } else {
        suspended += n;
        n = 0;
    }
    cout << suspended << nl;
}
