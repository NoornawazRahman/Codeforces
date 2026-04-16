#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define scan inputVector<int>
#define mod 1000000007
const char nl = '\n';

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
    int n;
    cin >> n;
    vi a = scan(n);
    vi prefix(n);
    vi suffix(n);

    prefix[0] = a[0] == 2 ? 1 : 0;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + (a[i] == 2 ? 1 : 0);
    }

    suffix[n - 1] = a[n - 1] == 2 ? 1 : 0;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + (a[i] == 2 ? 1 : 0);
    }
    // copy(prefix.begin(), prefix.end(), ostream_iterator<int>(cout, " "));
    // cout << nl;
    // copy(suffix.begin(), suffix.end(), ostream_iterator<int>(cout, " "));
    // cout << nl;
    for (int i = 0; i < n - 1; i++) {
        if (prefix[i] == suffix[i + 1]) {
            cout << i + 1 << nl;
            return;
        }
    }
    cout << -1 << nl;
}