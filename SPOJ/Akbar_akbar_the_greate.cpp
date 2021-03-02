#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    // cin>>tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,r,m;
        cin>>n>>r>>m;

        vector<vector<int>>adj(n+1);
        for(int i=0;i<r;i++)
        {
            int u,v;
            // cin>>u>>v;
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<pair<int,int>>soliers;
        for(int i=0;i<m;i++)
        {
            int node,str;
            // cin>>node>>str;
            scanf("%d%d",&node,&str);
            soliers.push_back(make_pair(node,str));
        }
        vector<bool>prt(n+1,0);
        bool optm = true;
        set<int>s;
        for(int i=0;i<m;i++)
        {
            int node,str;
            // cin>>node>>str;
            node = soliers[i].first;
            str = soliers[i].second;

            if(optm==false)
                continue;

            if(prt[node])
            {
                // cout<<"No\n";
                optm = false;
                continue;
            }

            vector<bool>used(n+1,0);
            vector<int>dist(n+1,0);
            queue<int>q;
            q.push(node);
            dist[node] = 0;
            used[node] = 1;
            prt[node] = 1;
            s.insert(node);
            
            bool ok = true;
            while(!q.empty() && ok)
            {
                int u = q.front();
                q.pop();
                for(int v:adj[u])
                {
                    if(!used[v])
                    {
                        if(dist[u]+1>str)
                        {
                            ok = false;
                            break;
                        }
                        if(prt[v]==true)
                        {
                            optm = false;
                            ok = false;
                            break;
                        }
                        dist[v] = dist[u] + 1;
                        used[v] = 1;
                        q.push(v);
                        prt[v] = true;
                        s.insert(v);
                    }
                }
            }
            // cout<<optm<<"\n";

        }
        // cout<<optm<<"\n";
        // cout<<"S--"<<s.size()<<"\n";
        if(!optm)
        {
            cout<<"No\n";
        }
        else
        {
            if(s.size()==n)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
    }
    return 0;
}



/*
2
3 2 2
1 2
2 3
1 2
2 0
4 5 2
1 4
1 2
1 3
4 2
3 4
2 1
3 0
*/