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
 
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    ll sum = 0,one=0,two=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        if(v[i]==1)
            one++;
        else
            two++;
    }
    if(sum%2==0)
    {
        int val = sum/2;
        if(val%2==0 || (val%2==1 && one!=0))
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
    }
}
int main()
{
    fastread;
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}