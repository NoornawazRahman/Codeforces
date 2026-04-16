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
    int n;
    cin >> n;

    vector<int> p;
    p.push_back(1);
    p.push_back(n);

    unordered_set<int> used;
    used.insert(1);
    used.insert(n);

    for (int i = n - 2; i >= 1; i--) {
        int prev = p.back();

        if (prev - i >= 1 && prev - i <= n && !used.count(prev - i)) {
            p.push_back(prev - i);
            used.insert(prev - i);
        } else {
            p.push_back(prev + i);
            used.insert(prev + i);
        }
    }

    reverse(p.begin(), p.end());

    for (int x : p) {
        cout << x << " ";
    }
    cout << "\n";
}
