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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    // If already universal
    if (s < rev) {
        cout << "YES\n";
        return;
    }

    // If no operations allowed
    if (k == 0) {
        cout << "NO\n";
        return;
    }

    // If all characters are same, impossible
    bool all_same = true;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[0]) {
            all_same = false;
            break;
        }
    }

    if (all_same) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}
