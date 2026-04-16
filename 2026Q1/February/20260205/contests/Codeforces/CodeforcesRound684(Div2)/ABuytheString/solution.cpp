#include <bits/stdc++.h>

#include <algorithm>
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
    int n, c0, c1, h;
    cin >> n >> c0 >> c1 >> h;
    string s;
    cin >> s;
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            zero++;
        } else {
            one++;
        }
    }
    int ans = zero * c0 + one * c1;
    if (c0 < c1) {
        ans = min(ans, n * c0 + one * h);
    } else {
        ans = min(ans, n * c1 + zero * h);
    }
    cout << ans << nl;
}
