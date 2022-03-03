/*
    @Author : Vyas
*/
 
#include "bits/stdc++.h"
#include <unordered_map>
using namespace std;
 
#define debug(x) { cerr << #x << " = " << x << endl; }
 
 
const int Max = (int)1e9+5;
 
long long lcm(long long a,long long b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 
 
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
 
void run_case(){
    int n,k,m;
    cin>>n>>k>>m;
    vector<string> container(n+1);
    vector<long long> cost(n+1);
    unordered_map<string,long long> ump; // string :index
    for(int i=1;i<=n;i++){
    	cin>>container[i];
    	ump[container[i]] = i;
    }
    for(int i=1;i<=n;i++){
    	cin>>cost[i];
    }
    vector<long long> group(n+1);
    vector<long long> minOfGroup(k+1,Max);
    for(int i=1;i<=k;i++){
    	int x; cin>>x;
    	for(int j=1;j<=x;j++){
    		int y; cin>>y;
    		group[y] = i;
    		minOfGroup[i] = min(minOfGroup[i],cost[y]);
    	}
    }
    long long ans = 0;
    for(int i=1;i<=m;i++){
    	string x; cin>>x;
    	ans+=minOfGroup[group[ump[x]]];
    }
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