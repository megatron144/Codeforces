#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
#define f(i,a,b) for(int i=(a);i<(b);i++)
#define take(x) for(auto&v:(x))cin>>v
void test_cases(){
    int n;
    cin>>n;
    vi a(n),b(n);
    take(a);
    take(b);
    int zero=0,one=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]==b[i] || (i+1<n && (a[i]==a[i+1] || b[i]==b[i+1]))){
            zero=i+1;
            break;
        }
    }
    //cout<<zero<<" ";
    vector<bool> A(n+1,false),B(n+1,false),rem(n,false);
    for(int i=n-1;i>=0;i--){
        if(i+2<n){
            A[a[i+2]]=B[b[i+2]]=true;
            if(A[a[i]] || B[a[i]] || A[b[i]] || B[b[i]])
                rem[i]=true;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(rem[i]){
            //cout<<i;
            one=i+1;
            break;
        }
    }
    cout<<max(zero,one)<<endl;
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--) test_cases();
    return 0;
}