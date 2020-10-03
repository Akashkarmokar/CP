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
    vector<int>v(n+2);
    vector<vector<int>>pos(n+2);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        pos[v[i]].push_back(i);
    }

    vector<int>ans(n+2,n+n);
    for(int i=1;i<=n;i++)
    {
        int in_pos = 0;
        int mx = -1;
        for(int j:pos[i])
        {
            mx=max(mx,j-in_pos);
            in_pos=j;
        }
        mx = max(mx,n+1-in_pos);
        ans[mx]=min(ans[mx],i);
    }
    
    // print
    int mn = n+n;
    for(int i=1;i<=n;i++)
    {
        mn = min(mn,ans[i]);
        if(mn>n)    
            cout<<"-1 ";
        else
            cout<<mn<<" ";
    }
    cout<<endl;
    
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