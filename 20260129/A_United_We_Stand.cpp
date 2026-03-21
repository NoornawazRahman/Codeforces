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
    int n;
    cin >> n;
    vector<int> a = scan<int>(n);
    sort(a.begin(), a.end());
    if (a[0] == a[n - 1]) {
        cout << -1 << nl;
        return;
    }

    int it = 0;
    while (a[it] == a[0]) {
        it++;
    }
    cout << it << " " << n - it << nl;
    for (int i = 0; i < it; i++) {
        cout << a[i] << " ";
    }
    cout << nl;
    for (int i = it; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << nl;
}