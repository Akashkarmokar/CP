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

int x[1005],y[1005];
struct DSU{
private:
	vector<int> rank;
	vector<int> parent;
	int totalEle;
public:
	DSU(int _n): parent(_n+1),rank(_n+1),totalEle(_n){
		for(int i=0;i<=totalEle;i++){
			parent[i] = i;
			rank[i] = 0;
		}
	}


	// Time Comp: O(logn)
	int find(int _x){
		int parentOf_x = _x;
		while(parent[parentOf_x]!=parentOf_x){
			parentOf_x = parent[parentOf_x];
		}

		while(parent[_x] != _x){
			int temp = parent[_x];
			parent[_x] = parentOf_x;
			_x = temp;
		}
		return parentOf_x;
	}


	// Time Comp: O()
	bool merge(int _x,int _y){ // In total merge fun can be call '<=(n-1)' times
		if(parent[_x] != parent[_y]){
			_x = find(_x);
			_y = find(_y);
			if(rank[_x] > rank[_y]){
				swap(_x,_y);
			}
			parent[_x] = _y;
			if(rank[_x] == rank[_y]){
				rank[_y]++;
			}
			return true;
		}
		return false;
	}
};

void run_case(){
    int n;
    cin>>n;
    DSU dsu(n);
    for(int i=0;i<n;i++){
    	int a,b;
    	cin>>x[i]>>y[i];
    }
    int ans = n;
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(x[i] == x[j] || y[i]==y[j]){
    			int per_a = dsu.find(i);
    			int per_b = dsu.find(j);
    			if(per_a != per_b){
    				dsu.merge(i,j);
    				ans--;
    			}
    		}
    	}
    }
    cout<<ans-1<<endl;
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