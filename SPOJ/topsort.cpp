#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <queue>
using namespace std;
#define ll long long

vector<vector<ll>> out;
vector<bool> mark;
vector<ll> order,inEdge;


void run_case(){
	ll n,m; cin>>n>>m;
	out.assign(n,vector<ll>());
	mark.assign(n,false);
	inEdge.assign(n,0);
	for(ll i=0;i<m;i++){
		ll u,v; cin>>u>>v;
		u--;
		v--;
		out[u].push_back(v);
		inEdge[v]++; // incrementing inDegree of node V
	}

	/* 	In KAHN's algorithm we use normal queue,and we insert node with 0 indegree nodes in
		queue.But in this problem say lexicographically ,thats why we take priority_queue here.
		Other wise all of the staff of KAHN's algorithm are same here
	*/
	priority_queue<ll,vector<ll>,greater<ll>> q; // to take lexicographically node
	for(ll i=0;i<n;i++){
		if(inEdge[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		ll v = q.top();
		q.pop();
		order.push_back(v);
		for(auto u:out[v]){
			inEdge[u]--;
			if(inEdge[u]==0){
				q.push(u);
			}
		}
	}

	if(order.size()!=n){ // it means there has a cycle 
		cout<<"Sandro fails."<<endl;
	}else{
		for(int i=0;i<order.size();i++){
			cout<<order[i]+1<<" ";
		}
		cout<<endl;
	}
	
}


int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}