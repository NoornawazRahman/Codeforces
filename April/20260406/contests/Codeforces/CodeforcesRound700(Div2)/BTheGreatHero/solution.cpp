#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define print(v)                               \
    ([&]() {                                   \
        int n = v.size();                      \
        for (int i = 0; i < n; i++) {          \
            cout << v[i] << " \n"[i == n - 1]; \
        }                                      \
    }())
#define scan(n)                                  \
    ([&]() {                                     \
        vi v(n);                                 \
        for (int i = 0; i < n; i++) cin >> v[i]; \
        return v;                                \
    }())
#define ceildiv(a, b) (((a) + (b) - 1) / (b))
#define yes() cout << "YES" << nl
#define no() cout << "NO" << nl
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << nl;
#define vdebug(a)                     \
    cerr << #a << " = ";              \
    for (auto x : a) cerr << x << sp; \
    cerr << nl;
#else
#define debug(x)
#define vdebug(a)
#endif
const char nl = '\n';
const char sp = ' ';
void solve();

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

#define attack first
#define health second

void solve() {
    pair<int, int> hero;
    int n;
    cin >> hero.attack >> hero.health >> n;
    vector<pair<int, int>> m(n);
    for (int i = 0; i < n; i++) {
        cin >> m[i].attack;
    }
    for (int i = 0; i < n; i++) {
        cin >> m[i].health;
    }

    sort(all(m));
    for (int i = 0; i < n; i++) {
        int t = min(ceildiv(m[i].health, hero.attack),
                    ceildiv(hero.health, m[i].attack));
        debug(hero.health);
        debug(m[i].attack);
        hero.health -= t * m[i].attack;
        m[i].health -= t * hero.attack;
        debug(t);
        if (hero.health < 1 && m[i].health >= 1) {
            debug(i);
            debug(m[i].health);
            debug(hero.health);
            no();
            return;
        }
    }
    yes();
}
