#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
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
    int n;
    cin >> n;
    vi a = scan(n);
    set<int> st;
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) continue;
        if (a[i] == 0) {
            cout << "NO" << nl;
            return;
        }
        st.insert(a[i]);
        if (st.size() > 1) {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;
}
