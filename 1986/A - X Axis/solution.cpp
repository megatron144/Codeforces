#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int mini=100;
        for(int i=0;i<=10;i++){
            mini=min(mini,abs(a-i)+abs(b-i)+abs(c-i));
        }
        cout<<mini<<endl;
    }
    return 0;
}