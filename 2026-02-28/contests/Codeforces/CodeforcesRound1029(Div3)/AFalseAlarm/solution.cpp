#include <bits/stdc++.h>
using namespace std;

#define int int64_t
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
const char nl = '\n';
const char sp = ' ';
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
    int n, x;
    cin >> n >> x;
    vi a = scan(n);
    int first = -1;
    int last = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    int len = last - first + 1;
    if (x >= len) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}
