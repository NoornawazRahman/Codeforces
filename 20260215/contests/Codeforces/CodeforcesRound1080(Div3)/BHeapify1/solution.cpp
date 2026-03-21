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
    vector<bool> visited(n + 1);
    bool possible = true;

    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;

        vector<int> indices;
        int cur = i;

        while (cur <= n && !visited[cur]) {
            visited[cur] = true;
            indices.push_back(cur);
            cur *= 2;
        }

        vector<int> values;
        for (int idx : indices) values.push_back(a[idx]);

        sort(indices.begin(), indices.end());
        sort(values.begin(), values.end());

        for (int j = 0; j < indices.size(); j++) {
            if (values[j] != indices[j]) {
                possible = false;
                break;
            }
        }

        if (!possible) break;
    }
    cout << (possible ? "YES" : "NO") << nl;
}
