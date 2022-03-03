/*
    @Author : Vyas
*/

#include "bits/stdc++.h"
#include <algorithm>
#include <array>
using namespace std;

#define debug(x) { cerr << #x << " = " << x << endl; }


const int Max = (int)2e5+5;

long long lcm(long long a,long long b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};

void run_case(){
    int n;cin>>n;
    vector<vector<array<int, 2>>> g(n);
    vector<int> deg(n) , a(n-1);

    for(int u,v,i=0;i<n-1;i++){
    	cin>>u>>v;
    	g[--u].push_back({--v,i});
    	g[v].push_back({u,i});
    	deg[u]++;
    	deg[v]++;
    }
    if(*max_element(deg.begin(),deg.end())>2){
    	cout<<-1<<endl;
    	return;
    }

    function<void(int ,int ,int c)> dfs = [&](int v,int p,int c){
    	for(auto &[u,i]: g[v]){
    		if(u!=p){
    			a[i] = c;
    			dfs(u,v,c^1);
    		}
    	}
    };
    dfs(min_element(deg.begin(),deg.end())-deg.begin(),-1,0);
    for(auto &x: a){
    	cout<<x+2<<" ";
    }
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc=1;
    cin>>tc;
    while(tc--){
        run_case();
    }
    return 0;
}