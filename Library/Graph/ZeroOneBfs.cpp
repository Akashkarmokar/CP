#include<bits/stdc++.h>
using namespace std;


struct node
{
    int to,weight;
};

vector<vector<node>>adj;
vector<int>d,p;
int n,e; // n= node number ,e = edges number


void add_edge(int u,int v,int cost)
{
    adj[u].push_back({v,cost});
    adj[v].push_back({u,cost});
}


void zeroOneBfs(int s)
{
    deque<int>q;
    q.push_back(s);
    d[s] = 0;
    p[s] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop_front();
        
        for(auto v: adj[u])
        {
            if(d[u] + v.weight < d[v.to])
            {
                d[v.to] = d[u] + v.weight;
                if(v.weight == 0)
                    q.push_front(v.to);
                else
                    q.push_back(v.to);
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<d[i]<<" ";
    }

}

int main()
{
    cin>>n>>e;

    adj.assign(n,vector<node>());
    d.assign(n,INT_MAX); //assigning MAX value to compare with node cost
    p.assign(n,-1);

    for(int i=0;i<e;i++)
    {
        int u,v,cost;
        cin>>u>>v>>cost;
        add_edge(u,v,cost);
    }

    // adj list print
    // for(int i=0;i<n;i++)
    // {   
    //     cout<<i<<"---> ";
    //     for(int j=0;j<adj[i].size();j++)
    //     {
    //         cout<<adj[i][j].to<<"-"<<adj[i][j].weight<<" ";
    //     }
    //     cout<<"\n";
    // }

    int src = 0;
    zeroOneBfs(src);
    return 0;
}



// time complexity : O(V+E)


/*
9 13
0 1 0
0 7 1
1 7 1
1 2 1
2 3 0
2 5 0
2 8 1
3 4 1
3 5 1
4 5 1
5 6 1
6 7 1
7 8 1


output - 0 0 1 1 2 1 2 1 2 
*/



/*
5 6
0 1 1
1 2 2
1 4 15
4 2 1
4 3 3
3 2 4

output - 0 1 3 7 4
*/



// Source - https://www.geeksforgeeks.org/0-1-bfs-shortest-path-binary-graph/