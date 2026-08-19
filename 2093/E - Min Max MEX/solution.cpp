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
const int N = 200005;
const int MOD = 1e9+7;
const int MAXN = 1e7;
 
bool can(int x,vi &a,int n,int q) {
    if(!x)return !x;
    int mex=x;
    vi freq(x, 0);
    f(i,0,n){
        if(a[i]<x){
            if(freq[a[i]] == 0)
                mex--;
            freq[a[i]]++;
        }
        if(mex==0){
            q--;
            if(!q)
                return 1;
            f(i,0,x)freq[i]=0;
            mex=x;
        }
    }
    return q<=0;
}
 
void test_cases(){
    int n,q;
    cin>>n>>q;
    vi a(n);
    take(a);
    vi v(n+2,0);
    f(i,0,n){
        if(a[i]<=n)
            v[a[i]]=1;
    }
    int lim=0;
    while(lim<v.size() && v[lim])
        lim++;
    int l=0,h=lim,ans=0;
    while(l<=h){
        int mid=h-(h-l)/2;
        if(can(mid,a,n,q)){
            l=mid+1;
        }
        else
            h=mid-1;
    }
    cout<<--l<<endl;
    return;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--)test_cases();
    return 0;
}