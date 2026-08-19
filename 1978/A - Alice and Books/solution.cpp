#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=-1;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            if(i!=n-1)maxi=max(maxi,val);
            else{
                cout<<maxi+val<<endl;
            }
        }
    }
    return 0;
}