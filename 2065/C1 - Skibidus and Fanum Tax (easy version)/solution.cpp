#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int j=0;j<m;j++)cin>>b[j];
        bool flag=true;
        a[0]=min(a[0],b[0]-a[0]);
        for(int i=0;i<n-1;i++){
            int t1=min(a[i+1],b[0]-a[i+1]),t2=max(a[i+1],b[0]-a[i+1]);
            if(a[i]>t2){
                flag=false;
                break;
            }
            if(a[i]<=t1)a[i+1]=t1;
            else a[i+1]=t2;
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}