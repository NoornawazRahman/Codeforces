#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define scan inputVector<int>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

template <typename T>
vector<T> inputVector(int n) {
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
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    vector<pair<int, int>> dirs = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {-b, a}, {b, -a}, {-b, -a}};
    set<pair<int, int>> st1, st2;
    for (auto d : dirs) {
        int x = xk + d.first;
        int y = yk + d.second;
        st1.insert({x, y});

        x = xq + d.first;
        y = yq + d.second;
        st2.insert({x, y});
    }

    int ans = 0;
    for (auto x : st1) {
        if (st2.find(x) != st2.end()) {
            ans++;
        }
    }
    cout << ans << nl;
}