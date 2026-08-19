#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define INF 1e18
#define f first
#define s second
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<int>
#define vpi vector<pii>
#define si set<int>
#define umm unordered_map<int,int>
int helper(vi& a) {
    int n=a.size();
    vll pre(n+1,0),suf(n+1,0);
    for(int i=0;i<n;i++)
        pre[i+1]=pre[i]+max(0LL,a[i]);
    for(int i=n-1;i>=0;i--)
        suf[i]=suf[i+1]+max(0LL,-a[i]);
    int ans=0;
    for(int i=0;i<=n;i++){
        //cout<<ans<<" ";
        ans=max(ans,pre[i]+suf[i]);
    }
    return ans;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;while(t--){
        int n;
        cin>>n;
        vi a(n);
        for(auto&x : a)
            cin>>x;
        int ans=helper(a);
        cout<<ans<<endl;
    }
}