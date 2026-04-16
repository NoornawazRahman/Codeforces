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
    int m;
    cin >> m;
    vector<int> b = scan<int>(m);
    vector<int> a;
    a.push_back(b[0]);
    for (int i = 1; i < m; i++) {
        if (b[i] < b[i - 1]) {
            a.push_back(b[i]);
        }
        a.push_back(b[i]);
    }
    cout << a.size() << nl;
    for (int x : a) {
        cout << x << " ";
    }
    cout << nl;
}