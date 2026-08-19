#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define double long double
#define INF 1e18
#define f first
#define s second
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>
#define si set<int>
#define spi set<pii>
#define umpi unordered_map<int, int>
#define mpi map<int, int>
#define mpp map<pii, int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vi, greater<int>>
#define print(v) for (auto x : v) cout << x << " "; cout << endl
#define print_pair(v) for (auto x : v) cout << x.f << " " << x.s << endl
#define print_range(v, x, y) for (int i = x; i < y; i++) cout << v[i] << " "; cout << endl
#define yn(x) cout << (x ? "YES" : "NO") << endl
#define all(v) v.begin(), v.end()
 
const int N = 200005;
const int MOD = 1000000007;
 
int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}
 
int power(int x, int y) {
    return y ? ((y % 2 ? x : 1ll) * power((x * x) % MOD, y / 2) % MOD) % MOD : 1ll;
}
 
void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    if(max(n-m,m-n)>k || k>max(m,n))cout<<-1;
    else{
        int diff=max(n,m)-k;
        for(int i=0;i<n-diff;i++)cout<<0;
        for(int i=0;i<diff;i++)cout<<10;
        for(int i=0;i<m-diff;i++)cout<<1;
    }
    cout<<endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}