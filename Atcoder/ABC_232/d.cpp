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


int h,w;
int dp[105][105];
int rec(vector<string>& a,int r,int c){
	if(r>=h || c>=w || a[r][c] == '#'){
		return 0;
	}
	if(dp[r][c]==-1){
		dp[r][c] = max(rec(a,r,c+1),rec(a,r+1,c)) + 1;
	}
	return dp[r][c];
}
void run_case(){
    cin>>h>>w;
    vector<string> a;
    for(int i=0;i<h;i++){
    	string s; cin>>s;
    	a.push_back(s);
    }
    for(int i=0;i<h;i++){
    	for(int j=0;j<w;j++){
    		dp[i][j] = -1;
    	}
    }
    int ans=rec(a,0,0);
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