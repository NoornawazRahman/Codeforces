#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

#define int long long
#define vi vector<long long>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set

#define print(arr)                                                       \
    ([&]() {                                                             \
        int n = arr.size();                                              \
        for (int i = 0; i < n; i++) cout << arr[i] << " \n"[i == n - 1]; \
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
    int n;
    cin >> n;
    vi a = scan(n);
    if (is_sorted(all(a))) {
        cout << "NO" << nl;
        return;
    }
    vi b = a;
    sort(all(b));
    vi ans;
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) continue;
        ans.push_back(a[i]);
    }
    cout << "YES" << nl;
    cout << ans.size() << nl;
    print(ans);
}
