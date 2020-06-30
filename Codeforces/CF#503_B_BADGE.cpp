#include<bits/stdc++.h>
using namespace std;
int adj[1010][1];
int visit[1010];

int dfs(int i)
{
    if(visit[i]==0)
        visit[i]=1;
    int adj_node = adj[i][0];
    if(visit[adj_node]==0)
        dfs(adj_node);
    else
        return adj_node;
}

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        adj[i+1][0]=v[i];
    }
    for(int i=0;i<n;i++)
    {
        int ans = dfs(i+1);
        cout<<ans<<" ";
        memset(visit,0,sizeof visit);
    }
    return 0;
}
