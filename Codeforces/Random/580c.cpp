#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> out;
vector<int>cat;
int n,m;
long long ans = 0;

void dfs(int u,int per,long long catNum){
	if(catNum>m){
		return ;
	}
	int ok = 1;
	for(auto v:out[u]){
		if(v!=per){
			ok = 0;
			dfs(v,u,catNum*cat[v]+cat[v]);
		}
	}
	ans+=ok;
	// cout<<u<<" "<<ans<<endl;
}


int main(){
	cin>>n>>m;
	out.assign(n,vector<int>());
	cat.assign(n,0);

	for(int i=0;i<n;i++){
		cin>>cat[i];
	}
	for(int i=0;i<n-1;i++){
		int u,v; cin>>u>>v;
		u--;
		v--;
		out[u].push_back(v);
		out[v].push_back(u);
	}
	dfs(0,-1,cat[0]);
	cout<<ans<<endl;
	return 0;
}