#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
    // cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return;
    }
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return;
    }

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
}