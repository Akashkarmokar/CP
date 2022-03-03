/*
    @Author : Vyas
*/

#include "bits/stdc++.h"
using namespace std;

#define debug(x) { cerr << #x << " = " << x << endl; }


const int Max = (int)1e5+5;

long long lcm(long long a,long long b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};


vector<int> p(Max);
vector<int> color(Max);
vector<vector<int>> adj(Max);
vector<bool> mark(Max,false);
int ans = 0;


void dfs(int node, int col){
	mark[node] = true;
	if(color[node] != col){
		ans++;
	}
	for(auto v: adj[node]){
		if(mark[v] == false){
			dfs(v,color[node]);
		}
	}
}

void run_case(){
    int n; cin>>n;
    for(int i=2;i<=n;i++){
    	cin>>p[i];
    	adj[i].push_back(p[i]);
    	adj[p[i]].push_back(i);
    }
    for(int i=1;i<=n;i++){
    	cin>>color[i];
    }
    dfs(1,-1);
    cout<<ans<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc=1;
    // cin>>tc;
    while(tc--){
        run_case();
    }
    return 0;
}