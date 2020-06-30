/*
  Problem Solved By :             Akash Karmokar
                   Department of Computer Science and Technology
                     Metropolitan University,sylhet,Bangladesh.
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define Max 35

int dist[Max];
int nodes;
vector<int> nodes_vec[Max];
map<int, int> node_map;

void BFS(int source){
    memset(dist,-1,sizeof(dist));
    queue<int>q;
    q.push(source);
    dist[source]=0;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        vector<int>::iterator itr;
        for(itr = nodes_vec[x].begin();itr!=nodes_vec[x].end();itr++){
            if(dist[*itr]==-1){
                q.push(*itr);
                dist[*itr]=dist[x]+1;
            }
        }
    }
    
}


int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
// #endif
    
    int test_case =1;
    while (cin >> nodes)
    {
        if(nodes==0)
            break;
        //Clearing node and vector 
        node_map.clear();
        for (int i = 1; i <= Max; i++)
        {
            nodes_vec[i].clear();
        }

        // Maping the value and store data in vector
        int x, y, z = 1;
        for (int i = 1; i <= nodes; i++)
        {
            cin >> x >> y;
            if (node_map[x] == 0)
            {
                node_map[x] = z;
                z++;
            }
            if (node_map[y] == 0)
            {
                node_map[y] = z;
                z++;
            }
            nodes_vec[node_map[x]].push_back(node_map[y]);
            nodes_vec[node_map[y]].push_back(node_map[x]);
        }

        int source,ttl;
        while(cin>>source && cin>>ttl)
        {
            int rem_nodes=0;
            if(source==0 && ttl ==0){
                break;
            }   
            
            BFS(node_map[source]);
            for(int i=1;i<z;i++){
                if(dist[i]>ttl || dist[i]==-1)
                {
                    rem_nodes++;
                }
            }
            cout<<"Case "<<test_case<<": "<<rem_nodes<<" nodes not reachable from node "<<source<<" with TTL = "<<ttl<<"."<<endl;
            test_case++;
        }       
    }
    return 0;
}
