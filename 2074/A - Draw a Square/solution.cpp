// ********* ADITYA RAJ **********
// ********* TEMPLATE **********
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define f(i,a,b) for(int i=a;i<b;i++)
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
#define take(v) for (auto &x : v) cin >> x
#define sum(v) accumulate(v.begin(), v.end(), 0)
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
int dist(pii a,pii b){
    return (a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second);
}
 
bool isSquare(vector<pair<int,int>>&pts){
    vector<int>d;
    f(i,0,4)
        f(j,i+1,4)
            d.pb(dist(pts[i],pts[j]));
    sort(all(d));
    return d[0]>0&&d[0]==d[1]&&d[1]==d[2]&&d[2]==d[3]&&d[4]==d[5]&&d[4]==2*d[0];
}
 
void test_cases(){
    int l,r,d,u;
    cin>>l>>r>>d>>u;
    vpi pts={{-l,0},{r,0},{0,-d},{0,u}};
    yn(isSquare(pts));
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--)test_cases();
    return 0;
}