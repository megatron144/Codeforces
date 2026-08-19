#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n),rM(n);
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            v[i]=sum;
        }
        int maxi=-1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            maxi=max(maxi,x);
            rM[i]=maxi;
        }
        maxi=0;
        for(int i=0;i<min(n,k);i++){
            maxi=max(maxi,v[i]+(k-i-1)*rM[i]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}