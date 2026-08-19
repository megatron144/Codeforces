#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vpi vector<pii>
#define si set<int>
#define spi set<pii>
#define umpi unordered_map<int,int>
#define mpi map<int,int>
#define mpp map<pii,int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int,vi,greater<int>>
#define print(v) for(auto x:v)cout<<x<<" ";cout<<endl
#define yn(x) cout<<(x?"YES":"NO")<<endl
#define all(v) v.begin(),v.end()
#define allR(v) v.rbegin(),v.rend()
#define take(v) for(auto &x:v)cin>>x
#define sum(v) accumulate(v.begin(),v.end(),0)
const int N=200005;
const int MOD=1e9+7;
const int MAXN=1e7;
 
struct Hash {
    size_t operator()(const vector<int>& v)const {
        size_t hash = v.size();
        for(int i : v){
            hash ^= (hash << 5) + (hash >> 2) + i;
        }
        return hash;
    }
};
 
int power(int x, int y) {
    int res = 1;
    while(y > 0){
        if(y & 1) res = res * x % MOD;
        x = x * x % MOD;
        y >>= 1;
    }
    return res;
}
 
vector<bool> prime(MAXN+1, true);
vi primes;
void sieve() {
    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= MAXN; i++) {
        if(prime[i]){
            for(int j = i * i; j <= MAXN; j += i)
                prime[j] = false;
        }
    }
    f(i, 2, MAXN+1)
        if(prime[i]) primes.pb(i);
}
 
bool prime_check(int n) {
    if(n < 2) return false;
    if(n % 2 == 0) return n == 2;
    for(int d = 3; d * d <= n; d += 2) {
        if(n % d == 0) return false;
    }
    return true;
}
 
int valueAt(int x,int y,int n,int steps) {
    if(n == 1){
        if(x==1 && y==1)return steps+1;
        if(x==2 && y==2)return steps+2;
        if(x==2 && y==1)return steps+3;
        if(x==1 && y==2)return steps+4;
    }
    int nn=1LL<<(n-1);
    int moves=(1LL<<(2*n-2));
    if(x<=nn && y<=nn){
        return valueAt(x,y,n-1,steps);
    } 
    else if(x>nn && y>nn){
        return valueAt(x-nn,y-nn,n-1,steps+moves);
    }
    else if(x>nn && y<=nn){
        return valueAt(x-nn,y,n-1,steps+2*moves);
    }
    else {
        return valueAt(x,y-nn,n-1,steps+3*moves);
    }
}
 
vi xy(int d, int n, int steps, int X, int Y) {
    if(n==1) {
        f(x,0,2) {
            f(y,0,2) {
                int val;
                if(x==0 && y==0) val=steps+1;
                else if(x==1 && y==1) val=steps+2;
                else if(x==1 && y==0) val=steps+3;
                else if(x==0 && y==1) val=steps+4;
                if(val==d)
                    return {X +x+1,Y+y+1};
            }
        }
    }
    int nn=1LL<<(n-1);
    int moves=(1LL<<(2*n-2));
    if(d<=steps+moves) {
        return xy(d,n-1,steps,X,Y);
    }
    else if(d<=steps+2*moves) {
        return xy(d,n-1,steps+moves,X+nn,Y+nn);
    }
    else if(d <= steps + 3 * moves) {
        return xy(d,n-1,steps+2*moves,X+nn,Y);
    }
    else {
        return xy(d,n-1,steps+3*moves,X,Y+nn);
    }
}
 
void test_cases() {
    int n,q;
    cin>>n>>q;
    while(q--){
        string s;
        cin>>s;
        if(s=="->") {
            int x, y;
            cin>>x>>y;
            cout<<valueAt(x,y,n,0)<<endl;
        } 
        else {
            int d;
            cin>>d;
            vi v=xy(d,n,0,0,0);
            cout<<v[0]<<" "<<v[1]<<endl;
        }
    }
    return;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--) test_cases();
    return 0;
}