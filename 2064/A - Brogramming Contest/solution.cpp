#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define double long double
#define INF 1e18
#define f first
#define s second
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int i=0;
    while(i<n){
        if(s[i]=='1'){
            int start=i;
            cnt++;
            while(i<n&&s[i]=='1')i++;
        }
        else i++;
    }
    int ans=cnt*2;
    if(s[n-1]=='1')ans--;
    cout<<ans<<endl;
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