// Online C++ compiler to run C++ program online
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
 
void test_cases() {
    int n;
    cin>>n;
    int sq=(n*(n+1))>>1;
    int base=(int)(sqrt(sq));
    if(base*base==sq){
        cout<<-1<<endl;
        return;
    }
    queue<int> q;
    for(int i=n;i>0;i--)q.push(i);
    int curr=0;
    while(!q.empty()){
        int tmp=q.front();
        curr+=tmp;
        q.pop();
        int b=(int)(sqrt(curr));
        if(b*b==curr){
            q.push(tmp);
            curr-=tmp;
        }
        else{
            cout<<tmp<<" ";
        }
    }
    cout<<endl;
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