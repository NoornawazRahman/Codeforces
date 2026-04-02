#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int>
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
    int n, k, b, s;
    cin >> n >> k >> b >> s;
    if (k * b <= s && s <= k * b + n * (k - 1)) {
    } else {
        cout << -1 << nl;
        return;
    }
    int a0 = k * b;
    s -= a0;
    if (s >= k - 1) {
        a0 += k - 1;
        s -= k - 1;
    } else {
        a0 += s;
        s = 0;
    }
    cout << a0 << sp;
    for (int i = 1; i < n; i++) {
        int ai;
        if (s >= k - 1) {
            ai = k - 1;
            s -= ai;
        } else {
            ai = s;
            s = 0;
        }
        cout << ai << sp;
    }
    cout << nl;
}
