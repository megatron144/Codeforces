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
void solve(){
    int n;
    cin>>n;
    vi v(n);
    for(auto& x:v)cin>>x;
    int l=0,h=0;
    int diffM=0;
    f(i,0,n){
        int cnt1=0,cnt2=0;
        f(j,i+1,n){
            if(v[j]>v[i])cnt1++;
            else if(v[j]<v[i])cnt2++;
            if((cnt1-cnt2)<diffM){
                diffM=cnt1-cnt2;
                l=i,h=j;
                //cout<<l<<" "<<j;
            }
        }
    }
    cout<<l+1<<" "<<h+1<<endl;
    return;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin>>t;
    while(t--)solve();
    return 0;
}