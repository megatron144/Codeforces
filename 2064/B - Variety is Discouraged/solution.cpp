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
#define si set<int>
#define umm unordered_map<int,int>
void solve() {
    int n;
    cin>>n;
    vi arr(n);
    umm freq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    si st;
    for(auto &[x,cnt]:freq)
        if(cnt==1)st.insert(x);
    int lm=0,a=-1,b=-1;
    for(int l=0,r=0;r<n;r++){
        if(st.count(arr[r])==0)l=r+1;
        else{
            int curr=r-l+1;
            if(curr>lm){
                lm=curr;
                a=l;
                b=r;
            }
        }
    }
    a++,b++;
    if(lm==0)cout<<"0
";
    else cout<<a<<" "<<b<<"
";
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
}