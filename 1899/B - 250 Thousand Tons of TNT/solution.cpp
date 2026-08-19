#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
void solve() {
    int n;
    cin>>n;
    vi v;
    v.pb(0);
    ll curr=0,ans=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        curr+=x;
        v.pb(curr);
    }
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            ll mini=1e18,maxi=-1;
            for(int j=i;j<=n;j+=i){
                maxi=max(maxi,v[j]-v[j-i]);
                mini=min(mini,v[j]-v[j-i]);
            }
            ans=max(ans,maxi-mini);
        }
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