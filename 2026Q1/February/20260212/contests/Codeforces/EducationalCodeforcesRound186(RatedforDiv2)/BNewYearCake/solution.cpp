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

int loop(int a, int b) {
    int i = 0;
    int curr = 1;
    while (true) {
        if (i & 1) {
            if (b >= curr) {
                b -= curr;
            } else {
                break;
            }
        } else {
            if (a >= curr) {
                a -= curr;
            } else {
                break;
            }
        }
        curr *= 2;
        i++;
    }
    return i;
}
void solve() {
    int a, b;
    cin >> a >> b;

    cout << max(loop(a, b), loop(b, a)) << nl;
}
