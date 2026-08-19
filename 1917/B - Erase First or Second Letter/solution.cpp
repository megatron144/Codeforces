#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v(26,n);
        for(int i=0;i<n;i++){
            v[s[i]-'a']=min(v[s[i]-'a'],i);
        }
        int cnt=0;
        for(auto x: v)cnt+=n-x;
        cout<<cnt<<endl;
    }
    return 0;
}