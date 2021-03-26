#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int cur;
	cin>>cur;
	int ans = 0;
	for(int i=1;i<n;i++){
		int nw;cin>>nw;
		int mn = min(cur,nw),mx = max(cur,nw);
		while(mx>mn*2){
			ans++;
			mn*=2;
		}
		cur = nw;
	}
	cout<<ans<<endl;
}


int main(){
	int tc;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}