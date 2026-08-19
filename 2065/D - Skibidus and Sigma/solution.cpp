#include<bits/stdc++.h>
using namespace std;
#define vi vector<long long>
#define all(v) v.begin(), v.end(), greater<long long> ()
void solve(){
    int n,m;
    cin>>n>>m;
    int tot=m*n;
    vi v;
    long long ans=0;
    for(int i=0;i<n;i++){
        long long cnt=0,tot=0;
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            tot+=(long long)a;
            cnt+=(long long)a*(m-j);
        }
        ans+=cnt;
        v.push_back(tot);
    }
    sort(all(v));
    for(int i=0;i<n;i++){
        ans+=(long long)(v[i]*(n-i-1)*m);
    }
    cout<<ans<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=0;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}