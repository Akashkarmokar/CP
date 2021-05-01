#include<bits/stdc++.h>
using namespace std;


vector<vector<int>>adj; // graph represented as adjacency list
int n; // number of vertices
vector<bool>color;
vector<int>time_in,time_out;
int dfs_timer= 0;

void dfs(int node){
    time_in[node]=dfs_timer++;
    color[node]=1;
    for(int u:adj[node]){
        if(color[u]==0){
            dfs(u);
        }
    }
    color[node]=2;
    time_out[node]=dfs_timer++;
}



int main(){

    return 0;
}