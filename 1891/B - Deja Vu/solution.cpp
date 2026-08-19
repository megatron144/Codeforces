#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>
#define si set<int>
#define all(v) v.begin(), v.end()
 
void solve() {
        int n,q;
        cin>>n>>q;
        int arr[n],brr[q],crr[q],min,cnt=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];}
        for(int j=0;j<q;j++){
            cin>>brr[j];}  
        crr[0]=brr[0];
        min=brr[0]; 
        for(int m=1;m<q;m++){
            if(min>brr[m]){
                min=brr[m];
                crr[cnt]=min;
                cnt++;}}
        
        for(int k=0;k<n;k++){
            for(int l=0;l<cnt;l++){
                    double x=pow(2,crr[l]);
                    int y=x;
                    if(arr[k]%y==0){
                        arr[k] += y/2; }}}
 
                             
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";} 
        cout<<"
";
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