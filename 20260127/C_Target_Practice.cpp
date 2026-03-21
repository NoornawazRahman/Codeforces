#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
const char nl = '\n';

template <typename T>
vector<T> scan(int n) {
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
    vector<string> s = scan<string>(10);
    int score = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (s[i][j] == 'X') {
                int up = i + 1;
                int down = 10 - i;
                int left = j + 1;
                int right = 10 - j;
                int point = min({up, down, left, right});
                score += point;
            }
        }
    }
    cout << score << nl;
}