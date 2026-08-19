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
bool isPowerOfTwo(int n){
    return (n&(n-1))==0;
}
bool isAllOnes(int n){
    return (n&(n+1))==0;
}
void test_cases(){
    int x;
    cin>>x;
    if(isPowerOfTwo(x)||isAllOnes(x)){
        cout<<-1<<endl;
        return;
    }
    int posOne=-1,posZero=-1;
    int m=0;
    while(x>>m)
        m++;
    f(k,0,m-1){
        if((x>>k)&1){
            if(posOne==-1)posOne=k;
        }
        else if(posZero==-1)posZero=k;}
    if(posOne==-1||posZero==-1)cout<<-1<<'
';
    else cout<<(1<<posOne)+(1<<posZero)<<'
';
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