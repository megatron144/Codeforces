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
void test_cases() {
    // Your solution code here
    int n,k;
    cin>>n>>k;
    vi v(n),idx(n);
    take(v);
    vi tmp;
    f(i,0,n)tmp.pb(v[i]);
	sort(all(tmp));
	tmp.erase(unique(all(tmp)),tmp.end());
	int m=tmp.size();
	f(i,0,n)idx[i]=lower_bound(all(tmp),v[i])-tmp.begin();
	int s=idx[k-1];
	vi dis(m,1e10);
	dis[s]=0;
	set<int> st;
	f(i,0,m)if(i!=s)st.insert(i);
	deque<int> dq;
	dq.pb(s);
	while(!dq.empty()){
		int pos=dq.front();
		dq.pop_front();
		int h=2*tmp[pos]-dis[pos],l=(tmp[pos]+dis[pos]+1)/2;
		if(h>tmp[pos]){
			auto it=st.upper_bound(pos);
			while(it!=st.end() && tmp[*it]<=h){
				int b=*it;
				dis[b]=dis[pos]+(tmp[b]-tmp[pos]);
				dq.pb(b);
				it=st.erase(it);
			}
		}
		if(l<tmp[pos]){
			int first=lower_bound(all(tmp),l)-tmp.begin();
			auto it=st.lower_bound(first);
			while(it!=st.end() && *it<pos){
				int b=*it;
				dis[b]=dis[pos]+(tmp[pos]-tmp[b]);
				dq.pb(b);
				it=st.erase(it);
			}
		}
	}
	yn((dis[m-1]<1e10));
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