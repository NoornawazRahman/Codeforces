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
    int n, m;
    cin >> n >> m;
    int moves = 0;
    vi a(n + 1);
    vi b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        int time = a[i] - a[i - 1];
        if (b[i] != b[i - 1]) {
            if (time & 1) {
                moves += time;
            } else {
                moves += time - 1;
            }

        } else {
            if (time & 1) {
                moves += time - 1;
            } else {
                moves += time;
            }
        }
        // cout << moves << nl;
    }
    moves += (m - a[n]);
    cout << moves << nl;
}
