#include <bits/stdc++.h>

#include <algorithm>
#include <vector>
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
    int n, p;
    cin >> n >> p;
    vi a = scan(n);
    vi b = scan(n);
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = {b[i], a[i]};
    }
    sort(all(v));
    ll minimumCost = p;
    int alreadyShared = 1;
    for (auto it : v) {
        int sharingCost = it.first;
        int canBeShared = it.second;
        if (sharingCost >= p) break;
        if (canBeShared + alreadyShared > n) {
            minimumCost += (ll)(n - alreadyShared) * sharingCost;
            alreadyShared = n;
            break;
        } else {
            minimumCost += (ll)canBeShared * sharingCost;
            alreadyShared += canBeShared;
        }
    }
    minimumCost += (ll)(n - alreadyShared) * p;
    cout << minimumCost << nl;
}
