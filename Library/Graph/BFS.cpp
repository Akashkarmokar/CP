#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;
vector<bool>used;
vector<int>d,p;


void bfs(int s)
{
    queue<int>q;
    q.push(s);
    used[s]=true;
    d[s]=0;
    p[s]=-1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v:adj[u])
        {
            if(!used[v])
            {
                q.push(v);
                used[v]=true;
                d[v] = d[u] + 1;
                p[v] = u;
            }
        }
    }
}

void path(int u) // If we have to restore and display the shortest path from the source to some vertex u, it can be done in the following manner:
{
    if(!used[u])
    {
        cout<<"No path"<<"\n";
    }
    else
    {
        vector<int>path;
        for(int v = u ;v!=-1;v=p[v])
            path.push_back(v);
        reverse(path.begin(),path.end());
        for(int x:path)
        {
            cout<<x<<" ";
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    adj.assign(n+1,vector<int>());
    used.assign(n+1,false);
    d.assign(n+1,0);
    p.assign(n+1,-1);

    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int s;cin>>s;
    bfs(s);

    // If we have to restore and display the shortest path from the source to some vertex u, it can be done in the following manner:
    int node_choice;
    cin>>node_choice;
    path(node_choice);


    return 0;
}



// Time Complexity: O(V+E)

/*
6 8
1 2
1 3
2 4
2 5
3 5
4 5
4 6
5 6
1
6


output - 1 2 4 6
*/




// Source - https://cp-algorithms.com/graph/breadth-first-search.html