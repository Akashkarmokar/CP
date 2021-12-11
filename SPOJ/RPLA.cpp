#include <bits/stdc++.h>
#include <queue>
using namespace std;

vector<vector<int>> out;
vector<int> inEdge,order;

void run_case(){
	int n,r; cin>>n>>r;
	out.assign(n,vector<int>());
	inEdge.assign(n,0);

	for(int i=0;i<r;i++){
		int u,v; cin>>u>>v;
		out[u].push_back(v);
		inEdge[v]++;
	}
	// priority_queue<int,vector<int>,greater<int>> q;
	queue<int> q;
	for(int i=0;i<n;i++){
		if(inEdge[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		// int node = q.top();
		int node = q.front();
		q.pop();
		order.push_back(node);
		for(auto u:out[node]){
			inEdge[u]--;
			if(inEdge[u]==0){
				q.push(u);
			}
		}
	}
	for(auto it:order){
		cout<<it<<" ";
	}
	cout<<endl;
}

int main(){
	int tc = 1;
	cin>>tc; 
	while(tc--){
		run_case();
	}
}