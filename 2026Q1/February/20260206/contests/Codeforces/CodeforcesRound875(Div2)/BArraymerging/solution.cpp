#include <bits/stdc++.h>
using namespace std;

#define int long long
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
    vi a = scan(n);
    vi b = scan(n);
    vi longestSubarrayA(2 * n + 1);
    vi longestSubarrayB(2 * n + 1);
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        } else {
            longestSubarrayA[a[i - 1]] = max(longestSubarrayA[a[i - 1]], count);
            count = 1;
        }
    }
    longestSubarrayA[a[n - 1]] = max(longestSubarrayA[a[n - 1]], count);

    count = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i - 1]) {
            count++;
        } else {
            longestSubarrayB[b[i - 1]] = max(longestSubarrayB[b[i - 1]], count);
            count = 1;
        }
    }
    longestSubarrayB[b[n - 1]] = max(longestSubarrayB[b[n - 1]], count);
    int ans = -1;
    for (int i = 1; i <= 2 * n; i++) {
        ans = max(ans, longestSubarrayA[i] + longestSubarrayB[i]);
    }
    cout << ans << nl;
}
