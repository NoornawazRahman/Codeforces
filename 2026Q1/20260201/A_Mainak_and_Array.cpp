#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 1; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

void solve();

int main() {
    ll test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vi a = scan(n + 1);
    int ans = a[n] - a[1];
    for (int i = 1; i <= n - 1; i++) {
        ans = max(ans, a[n] - a[i]);
    }
    for (int i = 2; i <= n; i++) {
        ans = max(ans, a[i] - a[1]);
    }
    for (int i = 1; i <= n - 1; i++) {
        ans = max(ans, a[i] - a[i + 1]);
    }
    cout << ans << nl;
}