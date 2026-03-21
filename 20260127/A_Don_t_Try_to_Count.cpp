#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const char nl = '\n';

template <typename T>
vector<T> scan(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
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
    int n, m;
    string x, s;
    cin >> n >> m >> x >> s;
    int steps = 0;
    int limiter = 7;
    while (x.find(s) == -1 && --limiter) {
        x = x + x;
        steps++;
    }
    int ans = (limiter == 0) ? -1 : steps;
    cout << ans << nl;
}