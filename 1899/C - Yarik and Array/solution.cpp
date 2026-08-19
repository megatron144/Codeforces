#include<bits/stdc++.h>
using namespace std;
 
#define int long long 
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
     
              cin>>a[i];
        }
        int mn = min(0LL,a[0]);
        int ans = a[0];
        int sum = a[0];
        for(int i=1;i<n;i++){
            if(abs(a[i]%2)==abs(a[i-1]%2)){
                mn =0;
                sum =0;
            }
            sum+=a[i];
            ans = max(ans, sum - mn);
            mn = min(mn, sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}