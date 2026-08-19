// *** ADITYA RAJ ****
// *** TEMPLATE ****
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pii>
#define si set<int>
#define spi set<pii>
#define umpi unordered_map<int, int>
#define mpi map<int, int>
#define mpp map<pii, int>
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vi, greater<int>>
#define print(v) for (auto x : v) cout << x << " "; cout << endl
#define yn(x) cout << (x ? "YES" : "NO") << endl
#define all(v) v.begin(), v.end()
#define take(v) for (auto &x : v) cin >> x
#define sum(v) accumulate(v.begin(), v.end(), 0)
const int N = 200005;
const int MOD = 1000000007;
//Hash function to use vector as key in maps
struct Hash {
    size_t operator()(const vector<int>& v) const {
        size_t hash = v.size();
        for (int i : v) {
            hash ^= (hash << 5) + (hash >> 2) + i;
        }
        return hash;
    }
};
int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}
 
int power(int x, int y) {
    return y ? ((y % 2 ? x : 1ll) * power((x * x) % MOD, y / 2) % MOD) % MOD : 1ll;
}
 
int MEX(const vi& a,int l,int r){
    bool is[4]={};
    f(i,l,r+1)
        if(a[i]<4)is[a[i]]=1;
    f(x,0,4)
        if(!is[x])return x;
    return 4;
}
void test_cases(){
    int n;cin>>n;
    vi a(n);take(a);
    vpi cnt;
    while(a.size()>3){
        bool is=0;
        for(auto x:a)
            if(x==0){
                is=1;
                break;
            }
        if(is){
            int pos=-1;
            f(i,0,a.size())if(a[i]==0){pos=i;break;}
            if(pos==0){
                cnt.pb({1,2});
                vi v={MEX(a,0,1)};
                f(i,2,a.size())v.pb(a[i]);
                a=v;
            }else{
                int m=MEX(a,pos-1,pos);
                cnt.pb({pos,pos+1});
                vi v;
                f(i,0,pos-1)v.pb(a[i]);
                v.pb(m);
                f(i,pos+1,a.size())v.pb(a[i]);
                a=v;
            }
        }else{
            int m=MEX(a,0,a.size()-1);
            cnt.pb({1,(int)a.size()});
            a={m};
            break;
        }
        if(a.size()==3){
            int p=MEX(a,0,1);
            if(p!=0&&a[2]!=0){
                cnt.pb({1,2});
                vi v={p,a[2]};
                a=v;
            }else{
                int q=MEX(a,1,2);
                if(a[0]!=0&&q!=0){
                    cnt.pb({2,3});
                    vi v={a[0],q};
                    a=v;
                }else{
                    cnt.pb({1,3});
                    a={MEX(a,0,2)};
                }
            }
        }
        if(a.size()==2){
            cnt.pb({1,2});
            a={MEX(a,0,1)};
        }
    }
    cout<<cnt.size()<<endl;
    for(auto x:cnt)cout<<x.first<<" "<<x.second<<endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    t=1;
    cin>>t;
    while(t--)test_cases();
    return 0;
}