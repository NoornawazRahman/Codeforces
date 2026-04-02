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
    int n;
    cin >> n;
    vi a = scan(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int c = 0;
        for (auto &[k, v] : mp) {
            if (v >= i) {
                c++;
            }
        }
        ans = max(ans, c * i);
    }
    cout << ans << nl;
}
