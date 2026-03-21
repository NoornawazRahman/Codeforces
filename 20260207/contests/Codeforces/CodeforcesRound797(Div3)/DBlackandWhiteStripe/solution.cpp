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
    int n, k;
    string s;
    cin >> n >> k >> s;
    vi prefix(n + 1);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + (s[i - 1] == 'W');
    }
    int ans = INT_MAX;
    for (int i = k; i <= n; i++) {
        ans = min(ans, prefix[i] - prefix[i - k]);
    }
    cout << ans << nl;
}
