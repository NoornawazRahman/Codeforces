#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define vi vector<int64_t>
#define all(x) (x).begin(), (x).end()
#define scan inputVector<int64_t>
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

class Solution {
    int computeXOR(int n) {
        switch (n % 4) {
            case 0:
                return n;
            case 1:
                return 1;
            case 2:
                return n + 1;
            case 3:
                return 0;
        }
    }

    public:
    void solve() {
        int a, b;
        cin >> a >> b;
        int x = computeXOR(a - 1);
        if (x == b) {
            cout << a << nl;
        } else if (x != b && (x ^ b) != a) {
            cout << a + 1 << nl;
        } else if (x != b && (x ^ b) == a) {
            cout << a + 2 << nl;
        };
    }
};

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test = 1;
    cin >> test;
    Solution obj;
    while (test--) {
        obj.solve();
    }
    return 0;
}
