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

void solve();
template <typename T>
vector<T> inputVector(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

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
    int a, b, c;
    cin >> a >> b >> c;

    int ans1 = (max(b, c) + 1 - a);
    cout << (ans1 > 0 ? ans1 : 0) << sp;

    int ans2 = (max(a, c) + 1 - b);
    cout << (ans2 > 0 ? ans2 : 0) << sp;

    int ans3 = (max(b, a) + 1 - c);
    cout << (ans3 > 0 ? ans3 : 0) << nl;
}
