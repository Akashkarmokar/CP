#include<bits/stdc++.h>
using namespace std;

#define sz 20005
int color[sz];
vector<int>adj_list[sz];
enum {not_visited,black,white};
int black_color,white_color,source;

void create_graph(int n)
{
    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        if(i==0)
            source = u;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
}

int bfs(int source)
{
    black_color=0;
    white_color=0;
    queue<int>q;
    q.push(source);
    color[source]=black;
    black_color++;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(int i = 0 ;i<adj_list[node].size();i++)
        {   
            int adj_node = adj_list[node][i];
            if(color[adj_node]==not_visited)
            {
                q.push(adj_node);
                if(color[node]==black)
                {
                    color[adj_node]=white;
                    white_color++;
                }
                else
                {
                    color[adj_node]=black;
                    black_color++;
                }
            }
        }
    }
    return max(black_color,white_color);

}

int main()
{
    int tc;cin>>tc;
    for(int testcase=1;testcase<=tc;testcase++)
    {
        int n;cin>>n;
        create_graph(n);
        int ans = 0;
        for(int i = 0;i<sz;i++)
            if(!adj_list[i].empty() && color[i]==not_visited)
                ans+=bfs(i);
        
        memset(color,0,sizeof color);
        for(int i=0;i<sz;i++)
            adj_list[i].clear();
        cout<<"Case "<<testcase<<": "<<ans<<endl;

    }
    return 0;
}
