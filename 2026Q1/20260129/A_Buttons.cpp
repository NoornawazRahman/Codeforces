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
    int a, b, c;
    cin >> a >> b >> c;
    int t1 = a + c / 2 + c % 2;
    int t2 = b + c / 2;
    if (t1 > t2) {
        cout << "First" << nl;
    } else {
        cout << "Second" << nl;
    }
}