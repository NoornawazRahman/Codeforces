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
void yes() { cout << "YES" << nl; }
void no() { cout << "NO" << nl; }
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
    int n, s, x;
    cin >> n >> s >> x;
    vi a = scan(n);
    int currentSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum += a[i];
    }
    if (s >= currentSum && (s - currentSum) % x == 0) {
        yes();
    } else {
        no();
    }
}
