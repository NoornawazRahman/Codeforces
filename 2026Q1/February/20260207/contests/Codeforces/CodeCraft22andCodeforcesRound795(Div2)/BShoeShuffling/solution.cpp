#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int>
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
    int n;
    cin >> n;
    vi s = scan(n);
    vi p(n);
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }
    int i = 0;
    while (i < n) {
        int start = i;
        int end = i;
        while (end < n && s[end] == s[start]) {
            end++;
        }
        if (start == end - 1) {
            cout << -1 << nl;
            return;
        }
        rotate(p.begin() + start, p.begin() + start + 1, p.begin() + end);
        i = end;
    }
    for (int x : p) {
        cout << x << sp;
    }
    cout << nl;
}
