#include <bits/stdc++.h>

#include <algorithm>
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
    unordered_set<int> set(all(a));
    int distinct = set.size();
    if (set.find(distinct) != set.end()) {
        cout << distinct << nl;
    } else {
        int ans = 1e18;
        for (int i = 0; i < n; i++) {
            if (a[i] > distinct) {
                ans = min(ans, a[i]);
            }
        }
        cout << ans << nl;
    }
}
