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
    // cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a = scan<int>(n);
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        ans = min(ans, abs(a[i]));
        if (ans == 0)
            break;
    }
    cout << ans << nl;
}