#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj,jmp;
vector<int>d,p;


// to find depth and parent of all node
void dfs(int node,int parent){ 
    jmp[node][0] = parent;
    for(int i:adj[node]){
        if(i!=parent){
            d[i] = d[node] + 1;
            p[i] = node;
            dfs(i,node);
        }
    }

}

// This LCA function return lowest common ancestor of node U and V
int LCA(int u,int v,int k){
    if(d[v]<d[u]){
        swap(u,v);
    }
    for(int i=k;i>=0;i--){
        int new_v = jmp[v][i];
        if(d[new_v]>=d[u]){
            v = new_v;
        }
    }
    if(u==v){
        return u;
    }

    for(int i=k;i>=0;i--){
        int uPrime = jmp[u][i];
        int vPrime = jmp[v][i];
        if(uPrime!=vPrime){
            u = uPrime;
            v = vPrime;
        }
    }
    return p[u];
}

int main()
{   
    int n; // number of node
    cin>>n;
    int k = (int)ceil(log2(n)); 
    adj.assign(n+1,vector<int>());
    d.assign(n+1,0);
    p.assign(n+1,0);
    jmp.assign(n+1,vector<int>(k+1));

    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    // pre-processing
    dfs(0,0); // node are counting from 0.........n-1
    
    for(int node=0;node<n;node++){
        jmp[node][0] = p[node];
    }
    for(int node=0;node<n;node++){
        for(int pw=1;pw<=k;pw++){
            jmp[node][pw] = jmp[jmp[node][pw-1]][pw-1];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=k;j++){
    //         cout<<jmp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for each query
    int q; //num of query
    cin>>q;
    for(int i=1;i<=q;i++){
        int u,v;
        cin>>u>>v;
        cout<<"Case "<<i<<": "<<LCA(u,v,k);
    }
    
    return 0;
}


/*
9
0 1
0 2
0 3
2 4
2 5
4 6
4 7
7 8

*/