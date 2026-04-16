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
    vi a = scan(n);
    int count = 0;
    int countLesserMissing = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            count++;
        }
    }
    set<int> s(all(a));
    for (int i = 0; i < k; i++) {
        if (s.find(i) == s.end()) {
            countLesserMissing++;
        }
    }
    cout << max(count, countLesserMissing) << nl;
}
