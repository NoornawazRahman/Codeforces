#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()
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
    ios::sync_with_stdio(0);
    cin.tie(0);
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
    map<int, int> map;
    int freq = 0;
    for (int i = 0; i < n; i++) {
        map[a[i]]++;
        freq = max(freq, map[a[i]]);
    }

    int ans = 0;
    while (freq < n) {
        int swap = min(n - freq, freq);
        ans += 1 + swap;
        freq += swap;
    }
    cout << ans << nl;
}
