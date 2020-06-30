#include<bits/stdc++.h>
using namespace std;
#define nl printf("\n");

// define vale and stl container 
vector<int>adjlist[21];
bool visited[21];
int dis[21];

void bfs(int start,int end)
{
    queue<int>q;
    q.push(start);
    visited[start] = 1;
    dis[start] =  0 ;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(u == end)
        {
            printf("%2d to %2d: %d\n",start,end,dis[end]);
            break;
        }
        for(int i = 0 ;i<adjlist[u].size();i++)
        {
            int x = adjlist[u][i];
            if(visited[x]==0)
            {
                q.push(x);
                visited[x] = 1;
                dis[x] = dis[u] + 1 ;
            }
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int tmp ,n,tc = 1;
    while(1)
    {
        for(int i = 1 ;i<=19;i++)
        {
            tmp = scanf("%d",&n);
            if(tmp== EOF) { return 0;}
            for(int j = 1 ;j<=n;j++)
            {
                int x ;
                cin>>x;
                adjlist[i].push_back(x);
                adjlist[x].push_back(i);
            }
        }
        cout<<"Test Set #"<<tc++<<endl;
        int no;
        cin>>no;
        for(int i = 1 ;i<=no;i++)
        {
            int start,end;
            cin>>start>>end;
            for(int j = 0 ;j<21 ;j++)
            {
                visited[j] = 0 ; 
            }
            for(int j = 0 ;j<21 ; j++)
            {
                dis[j] = 0;
            }
            bfs(start,end);
        }
        for(int i = 0 ;i<21;i++)
        {
            adjlist[i].clear();
        }
        nl;
    }
    return 0;
}