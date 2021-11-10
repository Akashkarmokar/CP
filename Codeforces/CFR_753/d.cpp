#include "bits/stdc++.h"
using namespace std;
 
#define nl '\n'
#define ll long long 
#define ull unsigned long long
#define debug(x)       { cerr << #x << " = " << x << endl; } 
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
const int Max = (int)2e5+5;
 
//functions
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 
//direction arry
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
 
//____________________________________________________________________________________________________
 
 
void solve(){
     int n; cin>>n;
     vector<int> v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     string s; cin>>s;
     vector<pair<int,char>> vv(n);
     for(int i=0;i<n;i++){
        vv[i]= {v[i],s[i]};
     }
     sort(vv.begin(),vv.end());
     for(auto it:vv){
        cout<<it.first<<" "<<it.second<<endl;
     }
     int conf = 0;
     for(int i=1;i<=n;i++){
        if(vv[i-1].first!=i){
            char ch = vv[i-1].second;
            if(ch=='R'){
                conf++;
            }else{
                conf--;
            }
        }
     }
     if(conf){
        cout<<"NO"<<endl;
     }else{
        cout<<"YES"<<endl;
     }
}
 
int main(){
    fastread;
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}