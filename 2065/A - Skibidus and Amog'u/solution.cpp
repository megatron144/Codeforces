#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n>2)cout<<s.substr(0,n-2)+"i"<<endl;
        else cout<<"i"<<endl;
    }
    return 0;
}