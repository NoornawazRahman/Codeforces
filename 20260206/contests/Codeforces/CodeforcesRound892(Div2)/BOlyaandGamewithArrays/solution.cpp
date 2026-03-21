#include <bits/stdc++.h>

#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

#define int long long
#define vi vector<int>
#define vll vector<long long>
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
    int minAll = INT_MAX;
    vector<int> min2;
    while (n--) {
        int m;
        cin >> m;
        vi a = scan(m);
        sort(all(a));
        minAll = min(minAll, a[0]);
        min2.push_back(a[1]);
    }
    sort(all(min2));
    int sumMin2 = accumulate(all(min2), 0ll);
    int ans = minAll + sumMin2 - min2[0];
    cout << ans << nl;
}
