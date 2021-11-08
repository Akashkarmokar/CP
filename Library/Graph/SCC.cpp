/*
	Code For Library Checker 
	Link : https://judge.yosupo.jp/problem/scc	

*/



#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj, adj_rev,ans;
vector<bool> mark;
vector<int> order,component;


/*
	For condensation graph 

vector<int> root,root_nodes;
vector<vector<int>> adj_scc;

*/

void dfs1(int u){
	mark[u] = true;
	for(auto v: adj[u]){
		if(!mark[v]){
			dfs1(v);
		}
	}
	order.push_back(u);
}


void dfs2(int u){
	mark[u] = true;
	component.push_back(u);

	for(auto v:adj_rev[u]){
		if(!mark[v]){
			dfs2(v);
		}
	}
}


int main(){
	int n, m; 
	cin>>n>>m;
	// cout<<n<<" "<<m<<endl;
	adj.assign(n,vector<int>());
	adj_rev.assign(n,vector<int>());
	// ans.assign(n,vector<int>());

	for(int i=0;i<m;i++){
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
		adj_rev[v].push_back(u);
	}

	// for(int i=0;i<n;i++){
	// 	cout<<"I: "<<i<<" "<<"SIZE: "<<adj[i].size()<<endl;
	// }
	mark.assign(n,false);
	for(int i=0;i<n;i++){
		if(!mark[i]){
			dfs1(i);
		}
	}

	

	reverse(order.begin(), order.end());
	mark.assign(n,false);

	/* Graph Condensation 
	root.assign(n,0);
	adj_scc.assign(n,vector<int>());

	*/
	for(auto v:order){
		if(!mark[v]){
			dfs2(v);
			/* condensation graph

			int rootNode = component.front();
			for(auto u:component){
				root[u] = rootNode;
			}
			root_nodes.push_back(rootNode);

			*/
			ans.push_back(component);
			component.clear();
		}

	}

	/* For Condensation graph 

	for(int v = 0;v<n;v++){
		for(auto u:adj[v]){
			int rootV = root[v];
			int outNode = root[u];

			if(rootV != outNode){
				adj_scc[rootV].push_back(outNode);
			}
		}
	}
	*/
	cout<<ans.size()<<endl;
	for(auto it: ans){
		cout<<it.size()<<" ";
		for(auto it2:it){
			cout<<it2<<" ";
		}
		cout<<endl;
	}

	return 0;
}