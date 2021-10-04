#include<bits/stdc++.h>
using namespace std;


int  mem[120][120];
int n,m,k;
int recur(int x,int y,int cost) {
	if(x==n && y==m){
		if(cost==0) {
			return 1;
		}else{
			return 0;
		}
	}

	if (mem[x][y]!=-1) {
		return mem[x][y];
	}
	int right = y+1<=m ? recur(x,y+1,cost-x) : 0;
	int down = x+1<=n ? recur(x+1,y,cost-y) : 0;
	mem[x][y] = down || right;
	return mem[x][y];
}

void solve()
{
	cin>>n>>m>>k;
	memset(mem,-1,sizeof(mem));
	if(recur(1,1,k)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}


int main()
{
	int tc;
	cin>>tc;

	while(tc--){
		solve();
	}

	return 0;
}