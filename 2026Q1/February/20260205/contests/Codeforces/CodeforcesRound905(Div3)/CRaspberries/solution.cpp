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

void solve();
template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll test = 1;
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
    int evenCount = 0;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            evenCount++;
        }
        if (a[i] % k == 0) {
            cout << 0 << nl;
            return;
        }
        ans = min(ans, k - a[i] % k);
    }

    if (k == 4) {
        ans = min(ans, max(0, 2 - evenCount));
    }
    cout << ans << nl;
}
