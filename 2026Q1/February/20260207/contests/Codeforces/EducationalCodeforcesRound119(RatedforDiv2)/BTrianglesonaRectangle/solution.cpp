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
    int w, h;
    cin >> w >> h;
    int area = INT_MIN;
    for (int i = 0; i < 4; i++) {
        int k;
        cin >> k;
        int first, last;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            if (j == 0) {
                first = x;
            }
            if (j == k - 1) {
                last = x;
            }
        }
        int base = last - first;
        int height;
        if (i <= 1) {
            height = h;
        } else {
            height = w;
        }
        area = max(area, base * height);
    }
    cout << area << nl;
}
