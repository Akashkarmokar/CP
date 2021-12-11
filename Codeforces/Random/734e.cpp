#include <bits/stdc++.h>
using namespace std;

vector<bool> color;
vector<bool> color1;
vector<vector<int>>graph;
long long con_comp = 0;
long long con_comp1 = 0;

void dfs(int u){
	color[u] = true;
	for(auto v:graph[u]){
		if(!color[v]){
			dfs(v);
		}
	}
}

void dfs1(int u){
	color1[u] = false;
	for(auto v:graph[u]){
		if(color1[v]){
			dfs1(v);
		}
	}
}

void run_case(){
	int n; cin>>n;
	color.assign(n+5,0);
	color1.assign(n+5,0);
	graph.assign(n+1,vector<int>());
	con_comp= 0;
	con_comp1=0;
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		if(x==0){

			color[i] = false; color1[i] = false;
		}
		else{
			color[i] = true; color1[i] = true;
		}
	}

	for(int i=0;i<n-1;i++){
		int u,v; cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		if(!color[i]){
			dfs(i);
			con_comp++;
		}
	}
	for(int i=1;i<=n;i++){
		if(color[i]){
			dfs1(i);
			con_comp1++;
		}
	}
	cout<<min(con_comp,con_comp1)<<endl;

}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}