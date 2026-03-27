#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<long long>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define print(v)                               \
    ([&]() {                                   \
        int n = v.size();                      \
        for (int i = 0; i < n; i++) {          \
            cout << v[i] << " \n"[i == n - 1]; \
        }                                      \
    }())
#define scan(n)                                  \
    ([&]() {                                     \
        vi v(n);                                 \
        for (int i = 0; i < n; i++) cin >> v[i]; \
        return v;                                \
    }())
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif
const char nl = '\n';
const char sp = ' ';
inline void yes() { cout << "YES" << nl; }
inline void no() { cout << "NO" << nl; }
void solve();

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
    sort(all(a));
    if (a[0] == a[n - 1]) {
        int ans = n * (n - 1);
        cout << ans << nl;
        return;
    }
    int l = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == a[0]) {
            l++;
        } else {
            break;
        }
    }
    int r = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == a[n - 1]) {
            r++;
        } else {
            break;
        }
    }
    int ans = l * r * 2ll;
    cout << ans << nl;
}
