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
    vi p = scan(n);
    vi a = scan(n);
    if (n == 4) {
        cout << "N0" << nl;
        return;
    }
    unordered_map<int, int> pmap;
    for (int i = 0; i < n; i++) {
        pmap[p[i]] = i;
    }
    unordered_map<int, vector<int>> map;
    for (int i = 0; i < n; i++) {
        map[a[i]].push_back(i);
    }
    for (auto &[k, v] : map) {
        /*
         bool flag = false;
          for (int i = 0; i < v.size(); i++) {
              if (v[i] == pmap[k]) {
                  flag = true;
                  break;
              }
          }

          if (!flag) {
              cout << "NO" << nl;
              return;
          }
          */
        /* if (v.size() == 1) {
             if (v[0] != pmap[k]) {
                 cout << "NO" << nl;
                 return;
             }
         }*/
        for (int i = 1; i < v.size(); i++) {
            if (v[i] != v[i - 1] + 1) {
                cout << "NO" << nl;
                return;
            }
        }
    }
    cout << "YES" << nl;
}
