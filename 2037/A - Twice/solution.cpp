#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int cnt=0;
        for(auto it: mp){
            cnt+=it.second/2;
        }
        cout<<cnt<<endl;
    }
    return 0;
}