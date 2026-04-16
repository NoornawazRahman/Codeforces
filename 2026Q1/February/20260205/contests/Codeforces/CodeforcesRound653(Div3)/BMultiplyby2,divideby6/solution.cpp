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
    ll n;
    cin >> n;
    int ans = 0;
    while (n != 1) {
        if ((n & (n - 1)) == 0) {
            cout << -1 << nl;
            return;
        }
        if (n % 6 == 0) {
            n = n / 6;
        } else {
            n = n * 2;
        }
        ans++;
    }
    cout << ans << nl;
}
