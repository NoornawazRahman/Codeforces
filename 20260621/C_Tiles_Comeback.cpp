#include <bits/stdc++.h>
using namespace std;

#define int long long
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
#define scan(n)                     \
    ([&]() {                        \
        vector<int> v(n);           \
        for (int i = 0; i < n; i++) \
            cin >> v[i];            \
        return v;                   \
    }())
#define ceildiv(a, b) (((a) + (b) - 1) / (b))
#define yes() cout << "YES" << nl
#define no() cout << "NO" << nl
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << nl;
#define vdebug(a)        \
    cerr << #a << " = "; \
    for (auto x : a)     \
        cerr << x << sp; \
    cerr << nl;
#else
#define debug(x)
#define vdebug(a)
#endif
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
    int n, k;
    cin >> n >> k;
    vector<int> c = scan(n);
    vector<vector<int>> freq(n + 1);
    for (int i = 0; i < n; i++) {
        freq[c[i]].push_back(i);
    }
    if (c[0] == c[n - 1] && freq[c[n - 1]].size() >= k) {
        yes();
        return;
    }

    if (freq[c[0]].size() >= k && freq[c[n - 1]].size() >= k) {
        // cerr << "enter";
        int cnt = 0;
        debug(freq[c[0]][k - 1]);
        for (int i = 0; i < freq[c[n - 1]].size(); i++) {
            if (freq[c[n - 1]][i] > freq[c[0]][k - 1]) {
                cnt++;
            }
            if (cnt >= k) {
                yes();
                return;
            }
        }
        debug(cnt);
    }
    no();
}