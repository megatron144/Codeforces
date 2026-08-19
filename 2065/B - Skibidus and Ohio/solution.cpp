#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool flag=false;
        int n=s.length();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                flag=true;
                break;
            }
        }
        if(flag)cout<<1;
        else cout<<n;
        cout<<endl;
    }
}