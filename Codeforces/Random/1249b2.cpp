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


struct DSU{
private:
	vector<int>rep;
	vector<vector<int>> lst;
	int totalEle;
public:
	DSU(int n): rep(n+1),totalEle(n), lst(n+1){
		for(int i=0;i<=n;i++){
			rep[i] = i;
			lst[i].push_back(i);
		}
	}
	// Time Comp: O(1)
	int find(int x){
		return rep[x];
	}
	// Time Comp: O(nlogn)
	// merge function's complexity depends on total for loop iteration.
	bool merge(int x,int y){ // In total merge fun can be call '<=(n-1)' times
		if(rep[x]!=rep[y]){
			x = find(x);
			y = find(y);
			if(lst[x].size() > lst[y].size()){
				swap(x,y);
			}
// 			 now in worst case This loop iterate n times
// 				but in life cycle of DSU data Structure we can call maximum 'n-1' times
// 				Though in worst case it iterate n times, but(when we choose small size set) if we think like thate a number 'x'(size of set which contain x is 'n') 
// 				can be moved to  other set of size '<=n' and new set size will be '<=2n' . 
// 				then next merge will be '2n' with '2n' size set.and new set will be '<=4n'...... so on;
// 				so a number can be moved at most '<= logn' times;

// 				SO for all element's (n) total move possible 'nlogn'
// 				so we can claim that our union time complexity - O(nlogn)
			

			for(auto it:lst[x]){
				rep[it] = y;
				lst[y].push_back(it);
			}
			lst[x].clear();
			return true;
		}
		return false;
	}
	int getSize(int _n){
		return lst[_n].size();
	}
};

void run_case(){
    int n; cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
    	cin>>p[i];
    	--p[i];
    }
    DSU dsu(n);
    for(int i=0;i<n;i++){
    	dsu.merge(i, p[i]);
    }
    for(int i=0;i<n;i++){
    	int pr = dsu.find(i);
    	cout<<dsu.getSize(pr)<<" ";
    }
    cout<<endl;
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