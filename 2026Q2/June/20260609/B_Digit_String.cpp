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
    cout << #a << " = "; \
    for (auto x : a)     \
        cout << x << sp; \
    cout << nl;
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
    string s;
    cin >> s;
    vector<int> arr;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4') {
            ans++;
        } else {
            arr.push_back(s[i] - '0');
        }
    }
    int n = arr.size();
    vector<int> pref(n + 1);
    vector<int> suf(n + 1);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + (arr[i - 1] % 2 == 1);
    }
    for (int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i + 1] + (arr[i] % 2 == 0);
    }
    // vdebug(pref);
    // vdebug(suf);
    int mini = INT_MAX;
    for (int i = 0; i <= n; i++) {
        mini = min(mini, pref[i] + suf[i]);
    }
    ans += mini;
    cout << ans << nl;
}