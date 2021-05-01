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

void query(string& s,int& n,int& c){
    int t,a,b;
    cin>>t>>a>>b;
    if(t==2){
        c++;
    }else{
        if(c&1){    
            if(b>n)
                b-=n;
            else
                b+=n;
            if(a>n)
                a-=n;
            else
                a+=n;
        }
        swap(s[a-1],s[b-1]);
    }
    
}

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int q;cin>>q;
    int c = 0;
    while(q--){
        query(s,n,c);
    }
    if(c&1){
        string ans="";
        for(long long i=s.size()-1;i>=n;i--){
            ans+=s[i];
        }
        reverse(ans.begin(),ans.end());
        for(long long i=0;i<n;i++){
            ans+=s[i];
        }
        cout<<ans<<endl;
    }else{
        cout<<s<<endl;
    }
    
}
int main()
{
    fastread;
    int tc=1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}