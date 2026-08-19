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
const int MOD=1e9+7;
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
int add(int a,int b,int m){a%=m,b%=m;return (a+b)%m;}
int sub(int a,int b,int m){a%=m,b%=m;return (a-b+m)%m;}
int prod(int a,int b,int m){a%=m,b%=m;return (a*b)%m;}
int div(int a,int b,int m){
    a%=m;int invB=power(b,m-2,m);return prod(a,invB,m);
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
vector<bool> prime;
vi primes;
void sieve() {
    prime.resize(MAXN,true);
    sp.resize(MAXN,2);
    prime[0] = prime[1] = false;
    for(int i=2;i<MAXN;i++) {
        if (prime[i]) {
            sp[i]=i;// mark itself as its smallest prime
            primes.pb(i);// store prime
            for(int j=i*2;j<MAXN;j+=i) {
                prime[j]=false;
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
// Custom GCD for u128
u128 gcd(u128 a,u128 b){
    while(b){
        u128 t=b;
        b=a%b;
        a=t;
    }
    return a;
}
// Find LCM of an array using u128
u128 findlcm(vi&arr,int n){
    u128 ans=(u128)arr[0];
    f(i,1,n)
        ans=((u128)arr[i]*ans)/gcd((u128)arr[i],ans);
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
void test_cases() {
    // Your solution code here
    int n,k;
    cin>>n>>k;
    vi v(k);
    take(v);
    sort(all(v));
    f(i,0,n){
        int a=(i&1)?k-i/2-1:i/2,b=k-a-1;
        f(i,0,3)cout<<v[a]<<" "<<v[b]<<" ";
        cout<<endl;
    }
    return;
}
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