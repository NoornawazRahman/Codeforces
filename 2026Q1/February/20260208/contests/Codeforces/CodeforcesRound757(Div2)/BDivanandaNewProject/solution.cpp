#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int64_t>
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
    int n;
    cin >> n;
    vi a = scan(n);
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = {a[i], i};
    }
    sort(all(v), greater<>());
    vi ans(n + 1);
    ans[0] = 0;
    int minutes = 0;
    int coordinate = 1;
    for (int i = 0; i < n; i++) {
        ans[v[i].second + 1] = coordinate;
        minutes += 2 * abs(coordinate) * v[i].first;
        if (coordinate < 0) {
            coordinate = abs(coordinate) + 1;
        } else {
            coordinate = -coordinate;
        }
    }
    cout << minutes << nl;
    for (auto x : ans) {
        cout << x << sp;
    }
    cout << nl;
}
