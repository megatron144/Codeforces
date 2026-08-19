#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long int n,k;
    	cin>>n>>k;
        vector<int>a(n);
    	for(int i=0;i<n;i++) a[i]=i+1;
    	if(k&1){
    	    cout<<"No
";
    	}
    	else{
    	    int l=1,r=n;
        	while(l<=r){
        		if(k>=2*(r-l)) swap(a[l-1],a[r-1]),k-=2*(r-l),l++,r--;
        		else r--;
        	}
        	if(k){
        		cout<<"No
";
        	}else{
        		cout<<"Yes
";
        		for(int i=0;i<n;i++) cout<<a[i]<<" ";
                cout<<endl;
        	}
    	}
    }
    return 0;
}