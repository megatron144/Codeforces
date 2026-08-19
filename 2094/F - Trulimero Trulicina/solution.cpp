#include <bits/stdc++.h>
using namespace std;
#define int long long
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
#define allR(v) v.rbegin(), v.rend()
#define take(v) for (auto &x : v) cin >> x
#define sum(v) accumulate(v.begin(), v.end(), 0LL)
const int N = 200005;
const int MOD=1e9+7;
const int MAXN=1e7;
 
struct Hash {
    size_t operator()(const vector<int>& v) const {
        size_t hash = v.size();
        for (int i : v) {
            hash ^= (hash << 5) + (hash >> 2) + i;
        }
        return hash;
    }
};
 
int power(int x, int y) {
    int res = 1;
    while(y > 0){
        if(y & 1)
            res = res * x % MOD;
        x = x * x % MOD;
        y >>= 1;
    }
    return res;
}
 
vector<bool> prime(MAXN+1, true);
vi primes;
void sieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MAXN; i++){
        if (prime[i]){
            for (int j = i * i; j <= MAXN; j += i)
                prime[j] = false;
        }
    }
    f(i, 2, MAXN+1)
        if(prime[i])
            primes.pb(i);
}
void test_cases() {
    int n,m,k;
    cin>>n>>m>>k;
	if(m%k){
		f(i,0,n){
			f(j,0,m){
				int val=((i*m+j)%k)+1;
				cout<<val;
				if(j==m-1)cout<<endl;
				else cout<<" ";
			}
		}
	}
	else{
	    m/=k;
		f(i,0,n){
			f(j,0,m){
				f(r,0,k){
					int val=((r+i)%k)+1;
					cout<<val;
					if((j==m-1 && r==k-1))cout<<endl;
				    else cout<<" ";
				}
			}
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
    while(t--)
        test_cases();
    return 0;
}