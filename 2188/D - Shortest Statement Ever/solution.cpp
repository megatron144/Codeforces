#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
void solve() {
    i64 x,y; cin >> x >> y;
    i64 best = LLONG_MAX;
    i64 A = x, B = y;
    auto upd = [&](i64 p, i64 q){
        if (p < 0 || q < 0) return;
        if ((p & q) == 0) {
            i64 cost = llabs(p - x) + llabs(q - y);
            if (cost < best) { best = cost; A = p; B = q; }
        }
    };
    best = LLONG_MAX;
    upd(x,y);
    for (int i = 29; i >= 0; --i) {
        if (((x & y) >> i) & 1) {
            upd((x >> i << i) + (1LL << i), y);
            upd(x, (y >> i << i) + (1LL << i));
            upd(x >> i << i, (y >> i << i) - 1);
            upd((x >> i << i) - 1, y >> i << i);
        }
    }
    cout << A << " " << B << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}