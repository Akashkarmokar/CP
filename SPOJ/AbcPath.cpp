#include <bits/stdc++.h>
#include <cstring>
#include <utility>
using namespace std;

#define nl '\n'
#define ll long long 
#define ull unsigned long long
#define debug(x)       { cerr << #x << " = " << x << endl; } 
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
const int Max = (int)2e5+5;
 
//functions
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 
//direction arry
int dx8[] = {+0,+0,+1,-1,-1,+1,-1,+1};
int dy8[] = {-1,+1,+0,+0,+1,+1,-1,-1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
 
//____________________________________________________________________________________________________




vector<string>v;
vector<pair<int,int>>pos;
int h,w;

int dp[51][51];

bool check_valid_pos(int x,int y){
	return (x>=0 && x<h) && (y>=0 && y<w); 
}

int rec(int x,int y,char ch){
	int temp = 0;
	for(int i=0;i<8;i++){
		int newX = x+dx8[i];
		int newY = y+dy8[i];
		if(check_valid_pos(newX,newY)){
			if(v[newX][newY]-ch==1){
				if(dp[newX][newY]==-1){
					dp[newX][newY] = rec(newX, newY, v[newX][newY]);		
				}
				temp = max(temp,dp[newX][newY]);
			}
		}
	}
	dp[x][y] = 1+temp;
	return dp[x][y];
}



int main(){

	int tc = 0;
	while(scanf("%d %d",&h,&w)){
		if(h==0 && w==0){
			break;
		}
		tc++;

		memset(dp, -1, sizeof(dp));
		for(int i=0;i<h;i++){
			string s; cin>>s;
			v.push_back(s);
			for(int j=0;j<w;j++){
				if(s[j]=='A'){
					pos.push_back(make_pair(i, j));
				}
			}
		}
		int ans = 0;
		for(int i=0;i<pos.size();i++){
			ans = max(ans,rec(pos[i].first,pos[i].second,'A'));
		}
		printf("Case %d: %d\n", tc,ans);
		v.clear();
		pos.clear();
	}
	return 0;
}