#include <bits/stdc++.h>
using namespace std;

#define int long long
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
    int n, k, q;
    cin >> n >> k >> q;
    vi a = scan(n);
    for (int i = 0; i < n; i++) {
        a[i] = a[i] > q ? 0 : 1;
    }
    int countOne = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            countOne++;
        } else {
            if (countOne >= k) {
                int diff = countOne - k + 1;
                ans += diff * (diff + 1) / 2;
            }
            countOne = 0;
        }
    }
    if (countOne >= k) {
        int diff = countOne - k + 1;
        ans += diff * (diff + 1) / 2;
    }
    cout << ans << nl;
}
