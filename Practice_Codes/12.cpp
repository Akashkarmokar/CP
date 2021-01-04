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

int n;
vector<int>graph[2002];
vector<int>root;
vector<int>imidiate_of(2005);

int bfs(int src)
{
    bool vis[2005]={0};
    int depth[2005]={0};
    queue<int>q;
    q.push(src);
    depth[src]=1;
    vis[src]=true;
    
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto x:graph[u])
        {
            if(!vis[x])
            {
                q.push(x);
                depth[x] = depth[u] + 1;
            }
        }
    }
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        ans = max(ans,depth[i]);
    }
    return ans;

}
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>imidiate_of[i];
        if(imidiate_of[i]==-1)
        {
            root.push_back(i);
        }
        else
        {
            graph[imidiate_of[i]].push_back(i);
        }
    }
    int ans = 0;
    for(auto x:root)
    {
        ans = max(ans,bfs(x));
    }
    cout<<ans<<nl;
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