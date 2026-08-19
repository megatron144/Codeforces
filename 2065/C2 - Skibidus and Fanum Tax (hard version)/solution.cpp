#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        a.insert(a.begin(),INT_MIN);
        sort(b.begin(),b.end());
        bool flag=true;
        for(int i=1;i<=n;i++){
            auto it=lower_bound(b.begin(),b.end(),a[i]+a[i-1]);
            if(it!=b.end()){
                int mn=min(*it-a[i],a[i]);
                if(mn<a[i-1]){
                    mn=max(*it-a[i],a[i]);
                }
                a[i]=mn;
            }
            else{
                if(a[i]<a[i-1]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}