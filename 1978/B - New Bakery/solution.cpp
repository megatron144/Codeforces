#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        long long cost = 0;
        if (a >= b) {
            cost = (long long)a * n;
        } else {
            int sec1 = b - a;
            if (sec1 >= n) {
                long long dec = (long long)n * (n - 1) / 2;
                cost -= dec;
                cost += (long long)n * b;
            } else {
                long long dec = (long long)sec1 * (sec1 - 1) / 2;
                cost -= dec;
                cost += (long long)sec1 * b;
                cost += (long long)(n - sec1) * a;
            }
        }
        cout << cost << endl;
    }
    return 0;
}