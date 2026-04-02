#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define scan inputVector<int>
#define mod 1000000007
const char nl = '\n';
const char sp = ' ';

template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

void solve();

int main() {
    ll test = 1;
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
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int j = i;
        int count = 0;
        while (j + 1 < n && (a[j + 1] & 1) == (a[i] & 1)) {
            j++;
            count++;
        }
        ans += count;
        // cout << count << sp;
        i = j;
    }
    // cout << nl;
    cout << ans << nl;
}