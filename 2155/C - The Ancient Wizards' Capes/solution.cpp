/**********************************************
             A D I T Y A   R A J             
**********************************************/
#pragma GCC optimize("O3")
//#pragma GCC target("avx,avx2,fma,popcnt")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// find_by_order, order_of_key
#define u128 __uint128_t
#define int long long
#define double long double
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>
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
const int N = 200005;
const int MOD=676767677;
const int MAXN=1e7;
//binomial exponential
int power(int x, int y,int m) {
    int res=1;
    x%=m;
    while(y){
        if(y&1)res=(u128)res*x%m;
        x=(u128)x*x%m;
        y>>=1;
    }
    return res;
}
//modular arithemetics
int add_mod(int x,int y,int m=MOD){
    x%=m; y%=m;
    int res = x + y;
    if(res >= m) res -= m;
    if(res < 0) res += m;
    return res;
}
int sub_mod(int x,int y,int m=MOD){
    x%=m; y%=m;
    int res = x - y;
    if(res < 0) res += m;
    if(res >= m) res -= m;
    return res;
}
int prod_mod(long long a,long long b,int m=MOD){
    a %= m; b %= m;
    return ((a * b) % m);
}
int divide_mod(int a,int b,int m=MOD){
    a %= m;if(a < 0) a += m;
    b %= m;if(b < 0) b += m;
    return prod_mod(a, power(b, m-2, m), m);
}
//extended gcd for crt
int extended_gcd(int a, int b, int &x, int &y) {
    if(b==0){
        x=1,y=0;
        return a;
    }
    int x1, y1;
    int d = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}
//works for non primes m also
int modinv(int a, int m) {
    int x, y;
    int g = extended_gcd(a, m, x, y);
    if (g != 1) return -1; // Inverse doesn't exist
    return (x % m + m) % m;
}
//modulo and inverse modulo
vi fact,inv;
void preprocess(){
    fact.resize(MAXN+1,1),inv.resize(MAXN+1,1);
    fact[0]=1;
    f(i,1,MAXN+1)
        fact[i]=i*fact[i-1]%MOD;
    inv[MAXN]=power(fact[MAXN],MOD-2,MOD);
    for(int i=MAXN-1;i>=0;i--)
        inv[i]=inv[i+1]*(i+1)%MOD;
}
//ncr % 1e9+7
int ncr(int n,int r){
    if(r>n || n<0 || r<0 )return 0;
    return fact[n]*inv[r]%MOD*inv[n-r]%MOD;
}
//prime check
bool prime_check(int n) {
    if(n<2)return 0;
    if(n%2==0)return n==2;
    for(int d=3;d*d<=n;d+=2) {
        if (n%d==0)return 0;
    }
    return 1;
}
vi sp;
vector<bool> isPrime;
vi primes;
void sieve() {
    isPrime.resize(MAXN,true);
    sp.resize(MAXN,0);
    isPrime[0] = isPrime[1] = false;
    for(int i=2;i<MAXN;i++) {
        if (isPrime[i]) {
            sp[i]=i;// mark itself as its smallest prime
            primes.pb(i);// store prime
            for(int j=i*2;j<MAXN;j+=i) {
                isPrime[j]=false;
                if(sp[j]==0)sp[j]=i;// first time marking => smallest
            }
        }
    }
}
// Get prime factors of n using sp[]
vi get_factors(int n) {
    vi res;
    while (n > 1) {
        res.pb(sp[n]);
        n /= sp[n];
    }
    return res;
}
// Stein’s Algorithm (Binary GCD)
u128 gcd_stein(u128 a,u128 b){
    if(a==0) return b;
    if(b==0) return a;
    int shift = __builtin_ctzll((unsigned long long)(a|b)); // common power of 2
    a >>= __builtin_ctzll((unsigned long long)a);
    do {
        b >>= __builtin_ctzll((unsigned long long)b);
        if(a>b) swap(a,b);
        b -= a;
    } while(b);
    return a << shift;
}
// Find LCM of an array using u128
u128 findlcm(vi&arr,int n){
    u128 ans=(u128)arr[0];
    f(i,1,n)
        ans=((u128)arr[i]*ans)/gcd_stein((u128)arr[i],ans);
    return ans;
}
// Print __uint128_t
void print_u128(u128 n){
    if(n==0){
        cout<<0;
        return;
    }
    string s;
    while(n){
        s+='0'+(n%10);
        n/=10;
    }
    reverse(all(s));
    cout<<s;
}
// Sparse Table for Range Min/Max/GCD Query (0-based)
class SparseTable{
public:
    int n, LOG;
    vector<vi> st;
    SparseTable(int n, int LOG=20):n(n),LOG(LOG) {
        st.assign(n,vi(LOG, 0));
    }
    void build(vi& v) {
        f(i,0,n)st[i][0]=v[i];
        f(i,1,LOG){
            for(int j=0;j+(1<<i)<=n;j++) {
                st[j][i] = max(st[j][i-1], st[j+(1<<(i-1))][i-1]);
            }
        }
    }
    int query(int L,int R) {
        int len=R-L+1;
        int k=63-__builtin_clzll(len);
        return max(st[L][k], st[R-(1<<k)+1][k]);
    }
};
vi generate_mex(vi& v,int& n){
    vi freq(n+2,0);
    for(auto& x:v){
        if(x<=n)freq[x]++;
        else freq[n+1]++;
    }
    int mex=0;
    while(mex<=n && freq[mex]>0)mex++;
    vi mex_v(n);
    f(i,0,n){
        if(v[i]<mex && freq[v[i]]==1)mex_v[i]=v[i];
        else mex_v[i]=mex;
    }
    return mex_v;
}
class SGT{
    public:
    vi sg_tree;
    SGT(int n){
        sg_tree.resize(4*n+10);
    }
    void build(int idx,int l,int h,vi& v){
        if(l==h){
            sg_tree[idx]=v[l];
            return;
        }
        int mid=l+((h-l)>>1);
        build(idx*2+1,l,mid,v);
        build(idx*2+2,mid+1,h,v);
        sg_tree[idx]=sg_tree[2*idx+1]+sg_tree[2*idx+2];
    }
    int query(int idx,int l,int h,int L,int R){
        if(R<l || L>h)return 0;
        if(l>=L && h<=R)return sg_tree[idx];
        int mid=l+((h-l)>>1);
        int left=query(2*idx+1,l,mid,L,R);
        int right=query(2*idx+2,mid+1,h,L,R);
        return left+right;
    }
    void update(int idx,int l,int h,int pos,int val){
        if(l==h){
            sg_tree[idx]=val;
            return;
        }
        int mid=l+((h-l)>>1);
        if(pos<=mid)update(idx,l,mid,pos,val);
        else update(idx,mid+1,h,pos,val);
        sg_tree[idx]=sg_tree[2*idx+1]+sg_tree[2*idx+2];
    }
};
class HLD {
private:
    int n, cur;
    vector<vector<int>> adj;
    vector<int> parent, depth, heavy, head, pos, sz;
    SGT* seg;
    int dfs(int v,int p){
        parent[v]=p;
        sz[v]=1;
        int mx=0;
        for(int c:adj[v]){
            if(c==p)continue;
            depth[c]=depth[v]+1;
            int csz=dfs(c,v);
            sz[v]+=csz;
            if(csz>mx){
                mx=csz;
                heavy[v]=c;
            }
        }
        return sz[v];
    }
    void decompose(int v,int h){
        head[v]=h;
        pos[v]=cur++;
        if(heavy[v]!=-1)decompose(heavy[v],h);
        for(int c:adj[v]){
            if(c==parent[v]||c==heavy[v])continue;
            decompose(c,c);
        }
    }
public:
    HLD(int n):n(n){
        adj.assign(n,{});
        parent.assign(n,-1);
        depth.assign(n,0);
        heavy.assign(n,-1);
        head.assign(n,0);
        pos.assign(n,0);
        sz.assign(n,0);
        cur=0;
        seg=nullptr;
    }
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void init(vi& values,int root=0){
        dfs(root,-1);
        decompose(root,root);
        vi arr(n);
        for(int i=0;i<n;i++)arr[pos[i]]=values[i];
        seg=new SGT(n);
        seg->build(0,0,n-1,arr);
    }
    int queryPath(int u,int v){
        int res=0;
        while(head[u]!=head[v]){
            if(depth[head[u]]<depth[head[v]])swap(u,v);
            res+=seg->query(0,0,n-1,pos[head[u]],pos[u]);
            u=parent[head[u]];
        }
        if(depth[u]>depth[v])swap(u,v);
        res+=seg->query(0,0,n-1,pos[u],pos[v]);
        return res;
    }
    void updateNode(int u,int val){
        seg->update(0,0,n-1,pos[u],val);
    }
};
struct FT{
    int n;
    vi bit;
    FT(int n):n(n),bit(n+1,0){}
    void update(int idx,int val){
        for(++idx;idx<=n;idx+=idx&-idx)bit[idx]+=val;
    }
    int query(int idx){int r=0;
        for(++idx;idx>0;idx-=idx&-idx)r+=bit[idx];
        return r;
    }
};
struct EulerTour {
    int n,timer;
    vector<vi> g;
    vi tin,sz,par,order;
    EulerTour(int n):n(n),timer(0){
        g.assign(n+1,{});
        tin.assign(n+1,0);
        sz.assign(n+1,0);
        par.assign(n+1,0);
        order.reserve(n);
    }
    void add_edge(int u,int v){
        g[u].push_back(v);
        g[v].push_back(u);
    }
    void dfs(int u,int p){
        tin[u]=timer++;
        order.push_back(u);
        sz[u]=1;
        par[u]=p;
        for(int v:g[u]){
            if(v!=p){
                dfs(v,u);
                sz[u]+=sz[v];
            }
        }
    }
    void build(int root=1){dfs(root,0);}
};
//Linear Basis for max XOR of any subsequence in an array
//xor(1,2,3.......N) depends of the value of N%4 
struct LinearBasis {
    static const int LOG = 60; // up to 1e18
    int basis[LOG+1];
    LinearBasis(){ fill(basis,basis+LOG+1,0); }
    void insert(int x){
        for(int i=LOG;i>=0;i--){
            if(!(x>>i&1)) continue;
            if(!basis[i]){ basis[i]=x; return; }
            x^=basis[i];
        }
    }
    int getMax(){
        int ans=0;
        for(int i=LOG;i>=0;i--) ans=max(ans,ans^basis[i]);
        return ans;
    }
};
clock_t timer = clock();
bool time_left(float time){
    return (((float)clock() - (float)timer) / (float)CLOCKS_PER_SEC) <= time;
}
void test_cases(){
    int n;
    cin>>n;
    vi v(n),a(n+1,0),b(n+1,0);
    take(v);
    f(i,1,n+1) a[i]=v[i-1]-n+i-1;
    b[0]=0;
    if(n>=1) b[1]=a[1];
    f(i,2,n+1) b[i]=a[i]-b[i-1];
    if((n&1) && (b[n]!=0)){ cout<<0<<endl; return; }
    unordered_set<int> cand;
    cand.reserve(8);
    bool marked=false;
    if(!(n&1)){
        if(!(b[n]>=0 && b[n]<=n)){ cout<<0<<endl; return; }
        cand.insert(b[n]);
        marked=!marked;
    }
    f(i,1,n+1){
        vi opt;
        if(i&1){
            int l = -b[i], h = i - b[i];
            int t1 = b[i-1] - b[i], t2 = t1 + 1;
            if(t1>=l && t1<=h && 0<=t1 && t1<=n) opt.pb(t1);
            if(t2>=l && t2<=h && 0<=t2 && t2<=n) opt.pb(t2);
        } else {
            if(!(b[i]>=0 && b[i]<=i)){ cout<<0<<endl; return; }
            int t1 = b[i] - b[i-1], t2 = t1 - 1;
            if(0<=t1 && t1<=n) opt.pb(t1);
            if(0<=t2 && t2<=n) opt.pb(t2);
        }
        if(!marked){
            for(auto x: opt)cand.insert(x);
            marked=!marked;
        }else{
            unordered_set<int> nc;
            nc.reserve(4);
            for(auto x: opt)if(cand.find(x) != cand.end()) nc.insert(x);
            cand.swap(nc);
        }
        if(cand.empty()){ cout<<0<<endl; return; }
    }
    cout<<cand.size()%MOD<<endl;
}
 
// 2
// 1
// 0
// 1
// 2
// 0
// 0
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //sieve();
    //preprocess();
    int t=1;
    cin>>t;
    while(t--)test_cases();
    return 0;
}