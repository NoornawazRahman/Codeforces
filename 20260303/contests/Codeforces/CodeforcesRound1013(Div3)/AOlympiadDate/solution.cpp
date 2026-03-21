#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
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
    umap<int, int> freq = {{0, 3}, {1, 1}, {3, 1}, {2, 2}, {5, 1}};
    int total = 8;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0 || a[i] == 1 || a[i] == 2 || a[i] == 3 || a[i] == 5) {
            if (freq[a[i]] > 0) {
                freq[a[i]]--;
                total--;
            }
        }
        if (total == 0) {
            cout << i + 1 << nl;
            return;
        }
    }
    cout << 0 << nl;
}
