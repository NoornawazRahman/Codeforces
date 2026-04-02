#include <bits/stdc++.h>

#include <algorithm>
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
#define ceildiv(a, b) (((a) + (b) - 1) / (b))
#define yes() cout << "YES" << nl
#define no() cout << "NO" << nl
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << nl;
#define vdebug(a)                     \
    cout << #a << " = ";              \
    for (auto x : a) cout << x << sp; \
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

int luckiness(int n) {
    int maxi = -1;
    int mini = 10;
    while (n != 0) {
        int digit = n % 10;
        maxi = max(maxi, digit);
        mini = min(mini, digit);
        n = n / 10;
    }
    return maxi - mini;
}

void solve() {
    int l, r;
    cin >> l >> r;
    int ans;
    int maxluck = -1;
    for (int i = l; i <= r; i++) {
        int luck = luckiness(i);
        if (luck > maxluck) {
            maxluck = luck;
            ans = i;
        }
        if (maxluck == 9) break;
    }
    cout << ans << nl;
}
