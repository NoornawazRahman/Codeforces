#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int64_t>
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

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

bool isOdd(int n) { return (n & 1); }

bool isEven(int n) { return !isOdd(n); }

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (isOdd(n)) {
        if ((isOdd(a) && isOdd(b)) || (b > a && isOdd(b))) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    } else {
        if ((isEven(a) && isEven(b)) || (b > a && isEven(b))) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
}
