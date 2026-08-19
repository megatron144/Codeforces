// ********* ADITYA RAJ **********
// ********* TEMPLATE **********
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define f(i,a,b) for (int i = a; i < b; i++)
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
#define yn(x) cout << (x ? "YES" : "NO") << endl
#define all(v) v.begin(), v.end()
#define allR(v) v.rbegin(), v.rend()
#define take(v) for (auto &x : v) cin >> x
#define sum(v) accumulate(v.begin(), v.end(), 0LL)
const int INF = 1e18 + 1;
const int N = 200005;
const int MOD = 1000000007;
//Hash function to use vector as key in maps
struct Hash {
    size_t operator()(const vector<int>& v) const {
        size_t hash = v.size();
        for (int i : v) {
            hash ^= (hash << 5) + (hash >> 2) + i;
        }
        return hash;
    }
};
int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}
 
int power(int x, int y) {
    return y ? ((y % 2 ? x : 1ll) * power((x * x) % MOD, y / 2) % MOD) % MOD : 1ll;
}
int dp[70][3][3];
int test_cases(int i, int c1, int c2,int x,int y) {
    if(i==61)return 0;
    if(dp[i][c1][c2]!=-1)return dp[i][c1][c2];
    int best=INF;
    f(bit,0,2){
        int bx=(x>>i)&1;
        int by=(y>>i)&1;
        int sumx=bx+bit+c1;
        int sumy=by+bit+c2;
        int rx=sumx&1,ry=sumy&1,nc1=sumx>>1,nc2=sumy>>1;
        if(rx & ry)continue;
        int next=test_cases(i+1,nc1,nc2,x,y);
        if(next==INF)continue;
        int curr=(bit<<i)+next;
        best=min(best,curr);
    }
    return dp[i][c1][c2]=best;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        memset(dp,-1,sizeof(dp));
        int ans = test_cases(0,0,0,x,y);
        if(ans >= INF || ans > 1000000000000000000LL) {
            cout<<-1<<endl;
        } else {
            cout<<ans<<endl;
        }
    }
    return 0;
}