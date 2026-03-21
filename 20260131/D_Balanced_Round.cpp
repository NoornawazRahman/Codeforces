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
    int n, k;
    cin >> n >> k;
    vi a = scan(n);
    sort(a.begin(), a.end());
    int ans = 1;
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] <= k) {
            count++;
            ans = max(ans, count);
        } else {
            count = 1;
        }
    }
    cout << n - ans << nl;
}