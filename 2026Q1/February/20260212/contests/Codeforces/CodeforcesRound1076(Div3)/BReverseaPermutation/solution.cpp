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
    vi p = scan(n);
    // Map value -> index
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++) pos[p[i]] = i;

    // Find first position to improve
    for (int i = 0; i < n; i++) {
        int expected = n - i;  // largest possible at position i
        if (p[i] != expected) {
            int j = pos[expected];
            reverse(p.begin() + i, p.begin() + j + 1);
            break;
        }
    }

    for (int x : p) cout << x << sp;
    cout << nl;
}
