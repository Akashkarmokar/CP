#include "bits/stdc++.h"
using namespace std;

#define nl "\n"
#define ll long long 
#define ull unsigned long long
#define debug(x)       { cerr << #x << " = " << x << endl; } 
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

 
const int Max = (int)2e5+5;
 
//functions
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
 
//direction arry
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
 
//____________________________________________________________________________________________________

int median(int a,int b,int c,int d)
{
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(),v.end());
    int val = ((v[1]+v[2])/2);
    return val;
}
void solve()
{
    int n,m;cin>>n>>m;
    int grid[n+1][m+1];
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            cin>>grid[i][j];
    

    int ans_grid[n+1][m+1];
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            int u = median(grid[i][j],grid[n+1-i][j],grid[i][m+1-j],grid[n+1-i][m+1-j]);
            ans_grid[i][j] = u;
        }
    }
    ll ans = 0;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            ans+=abs(grid[i][j]-ans_grid[i][j]);
        }
    }
    cout<<ans<<nl;
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