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
bool bs(int x,string& s,vi& v,int& n,int& k){
    int cnt=0,i=0;
    while(i<n){
        if(s[i]=='R'&& v[i]>x){
            i++;
            continue;
        }
        bool flag=0;
        while(i<n && !(s[i]=='R' && v[i]>x)){
            if(s[i]=='B' && v[i]>x)flag=1;
            i++;
        }
        if(flag)cnt++;
    }
    return cnt<=k;
}
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vi v(n);
    int maxi=0;
    for(auto&x:v){
        cin>>x;
        maxi=max(maxi,x);
    }
    int l=0,h=maxi,ans=maxi;
    while(l<=h){
        int mid=h-(h-l)/2;
        if(bs(mid,s,v,n,k)){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
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