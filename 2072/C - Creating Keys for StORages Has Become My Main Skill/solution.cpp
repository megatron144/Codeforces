// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define INF 1e18
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
#define f(i,a,b) for(int i=a;i<b;i++)
#define all(v) v.begin(), v.end()
#define ll long long
// const int N = 200005;
// const int MOD = 1000000007;
// int GCD(int a, int b) {
//     return b == 0 ? a : GCD(b, a % b);
// }
// int power(int x, int y) {
//     return y ? ((y % 2 ? x : 1ll) * power((x * x) % MOD, y / 2) % MOD) % MOD : 1ll;
// }
int powMin(int x) {
    int k=0;
    while((1<<k)<x)k++;
    return k;
}
void solve(){
    int n,x;
    cin>>n>>x;
    vi v;
    if(n==1){
        cout<<x<<endl;
        return;
    }
    int tmp=0;
    for(;tmp<=n;tmp++){
        if((tmp&(~x))!=0)break;
    }
    int k=powMin(min(tmp,n));
    int r=(1<<k)-1;
    bool flag=(r-x)?0:1;
    int m=flag?min(tmp,n):min(tmp,n-1);
    f(i,0,m)
        v.pb(i);
    if(!flag)v.pb(x);
    while(v.size()<n)
        v.pb(0);
    f(i,0,n)
        cout<<v[i]<<" ";
    cout<<endl;
    return;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}