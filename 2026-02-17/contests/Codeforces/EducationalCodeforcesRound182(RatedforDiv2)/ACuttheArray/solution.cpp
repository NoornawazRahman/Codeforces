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
    for (int i = 1; i < n; i++) {
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

void solve() {
    int n;
    cin >> n;
    vi a = scan(n + 1);
    int sum = 0;
    for (int l = 1; l <= n; l++) {
        for (int r = l + 1; r <= n; r++) {
            int s1 = 0;
            for (int i = 1; i <= l; i++) {
                s1 += a[i];
            }
            int s2 = 0;
            for (int i = l + 1; i <= r; i++) {
                s2 += a[i];
            }
            int s3 = 0;
            for (int i = r + 1; i <= n; i++) {
                s3 += a[i];
            }
            s1 = s1 % 3;
            s2 = s2 % 3;
            s3 = s3 % 3;
            if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s3 != s1)) {
                cout << l << sp << r << nl;
                return;
            }
        }
    }
    cout << 0 << sp << 0 << nl;
}
