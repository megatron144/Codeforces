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
const int MOD = 998244353;
// int GCD(int a, int b) {
//     return b == 0 ? a : GCD(b, a % b);
// }
int power(int x, int y) {
    return y ? ((y % 2 ? x : 1ll) * power((x * x) % MOD, y / 2) % MOD) % MOD : 1ll;
}
int pow2[200005],invPow2[200005];
void solve() {
    int n;
    cin>>n;
    vi a(n);
    for(int&x: a)cin>>x;
    int ans=0,sumOnes=0,countOnes=0,twos=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            sumOnes=(sumOnes+invPow2[twos])%MOD;
            countOnes++;
        }
        else if(a[i]==2)twos++;
        else{
            int tmp=((pow2[twos]*sumOnes)%MOD-countOnes)%MOD;
            if(tmp<0)
                tmp+=MOD;
            ans=(ans+tmp)%MOD;
        }
    }
    cout<<ans<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    pow2[0]=1;
    for(int i=1;i<200005;i++)pow2[i]=pow2[i-1]*2%MOD;
    int inv2=499122177;
    invPow2[0]=1;
    for(int i=1;i<200005;i++)invPow2[i]=invPow2[i-1]*inv2%MOD;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}