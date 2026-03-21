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
    int n, x;
    cin >> n >> x;
    vi a = scan(n);
    int ans = 0;
    int l = a[0] - x;
    int r = a[0] + x;
    for (int i = 1; i < n; i++) {
        l = max(l, a[i] - x);
        r = min(r, a[i] + x);
        if (l > r) {
            l = a[i] - x;
            r = a[i] + x;
            ans++;
        }
    }
    cout << ans << nl;
}
