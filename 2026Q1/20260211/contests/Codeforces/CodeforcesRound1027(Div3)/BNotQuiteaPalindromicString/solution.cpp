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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int c0 = 0;
    for (int i = 0; i < n; i++) {
        c0 += (s[i] == '0');
    }
    int c1 = n - c0;
    int rem = abs(c1 - c0) / 2;
    if (k >= rem && (k - rem) % 2 == 0) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}
