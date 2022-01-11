/*
    @Author : Vyas
*/

#include "bits/stdc++.h"
using namespace std;

#define debug(x) { cerr << #x << " = " << x << endl; }


const int Max = (int)2e5+5;

long long lcm(long long a,long long b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};

struct Bipartite{
private:
	int n,m;
	vector<vector<int>> adj;
	vector<int> side;
	queue<int> q;
	bool isBipartite = true;
public:
	Bipartite(){
		init(0,0);
	}
	Bipartite(int _n,int _m){
		init(_n,_m);
	}
	void init(int _n,int _m){
		n = _n;
		m = _m;
		adj.assign(n,{});
		side.assign(n,-1);
	}
	void add_edge(int u,int v){
		assert(0<=u && u<n);
		assert(0<=v && v<n);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bool isItBipartite(){
		for(int i=0;i<n;i++){ // use series of BFS which hasn't been visited yet
			if(side[i] == -1){
				q.push(i);
				side[i] = 0;
				while(!q.empty()){
					int u = q.front();
					q.pop();
					for(auto v: adj[u]){
						if(side[v] == -1){ // means not visited yet
							side[v] = side[u] ^ 1;
							q.push(v);
						}else{
							isBipartite &= (side[u]!=side[v]);
						}
					}
				}
			}
		}
		return isBipartite;
	}

	int getSide(int u){
		return side[u];
	}
};

void run_case(){
    int n,m;
    cin>>n>>m;
    Bipartite bp(n,m);
    vector<pair<int,int>> edges(m);
    for(int i=0;i<m;i++){
    	int u,v; cin>>u>>v;
    	u--;
    	v--;
    	edges[i]= {u,v};
    	bp.add_edge(u, v);
    }
    bool isBipar = bp.isItBipartite();
    if(!isBipar){
    	cout<<"NO"<<endl;
    }else{
    	cout<<"YES"<<endl;
    	for(int i=0;i<m;i++){
    		cout<<(bp.getSide(edges[i].first) < bp.getSide(edges[i].second));
    	}
    	cout<<endl;
    }

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