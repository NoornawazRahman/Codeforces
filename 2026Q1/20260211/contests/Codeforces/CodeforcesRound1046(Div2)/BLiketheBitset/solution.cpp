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

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int start = 0;
    while (start < n) {
        if (s[start] == '0') {
            start++;
            continue;
        }
        int end = start;
        while (end + 1 < n && s[end + 1] == '1') {
            end++;
        }
        if (end - start + 1 >= k) {
            cout << "NO" << nl;
            return;
        }
        start = end + 1;
    }
    cout << "YES" << nl;
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += (s[i] == '1');
    }
    int p = 1;
    int q = count + 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cout << p << sp;
            p++;
        } else {
            cout << q << sp;
            q++;
        }
    }
    cout << nl;
}
