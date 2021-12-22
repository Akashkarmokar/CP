/*
    Author : UntilOver
    Topic: 
    Prerequisite:
    Algorithm:
    TimeComplexity:
*/




#include "bits/stdc++.h"
using namespace std;
 
#define ll long long 
#define ull unsigned long long
#define debug(x)       { cerr << #x << " = " << x << endl; } 
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
const int Max = (int)2e5+5;
 
//functions
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 
//direction arry
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
 
//____________________________________________________________________________________________________
int n,m;
vector<vector<int>> points;
bool good(int x){
	vector<bool> abl(m);
	bool pair = false;
	for(int i=0;i<n;i++){
		int c = 0; // count gift for each shop
		for(int j=0;j<m;j++){
			if(points[i][j]>=x){
				abl[j] = true;
				c++;
			}
		}
		if(c>1){ // if gift of each shop greater than 1 we found pair 
			pair = true;
		}
	}
	if(!pair && m>1) return false;
	else{
		bool ans = true;
		for(int i=0;i<m;i++){
			ans&=abl[i];
		}
		return ans;
	}
}

void solve(){
    // int n,m;
    cin>>n>>m;
    // vector<vector<int>> points(n,vector<int>(m));
    points.assign(n,vector<int>(m));
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>points[i][j];
    	}
    }
    int l = 1,r=2;
    while(good(r)) r*=2; // finding max value of r
    while(r>l+1){
    	int mid = (l+r)>>1;
    	if(good(mid)) l = mid;
    	else r = mid;
    }
    cout<<l<<endl;

}
 
int main(){
    fastread;
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}