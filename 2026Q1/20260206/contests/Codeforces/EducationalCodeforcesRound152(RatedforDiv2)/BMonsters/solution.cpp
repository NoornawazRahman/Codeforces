#include <bits/stdc++.h>

#include <utility>
using namespace std;

#define int long long
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int>
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
    int n, k;
    cin >> n >> k;
    vi a = scan(n);
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int h = a[i] % k == 0 ? k : a[i] % k;
        v[i] = {h, i + 1};
    }
    sort(all(v), [&](pair<int, int> a, pair<int, int> b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    });
    for (auto it : v) {
        cout << it.second << sp;
    }
    cout << nl;
}
