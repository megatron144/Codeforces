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
#define all(v) v.begin(), v.end()
#define f(r,a,b) for(int r=a;r<b;r++)
const int N = 200005;
const int MOD = 1000000007;
 
int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}
 
int power(int x, int y) {
    return y ? ((y % 2 ? x : 1ll) * power((x * x) % MOD, y / 2) % MOD) % MOD : 1ll;
}
 
void solve(){
    // Your solution code here
    int n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    vi pre(n+1,0);
    f(i,1,n+1)
        pre[i]=pre[i-1]+(s[i-1]=='L'?-1:1);
    int flag1=-1;
    f(i,1,n+1)
        if(x+pre[i]==0){
            flag1=i;
            break;
        }
    if(flag1==-1 || flag1>k){
        cout<<0<<endl;
        return;
    }
    int cross0=1,t=flag1,flag2=-1;
    f(j,1,n+1)
        if(pre[j]==0){
            flag2=j;
            break;
        }
    //LR cancel out nhi hua
    if(flag2==-1)goto there;
    cross0+=(k-t)/flag2;
    there:
    cout<<cross0<<endl;
    return;
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