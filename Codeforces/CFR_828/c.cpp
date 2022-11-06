#include "bits/stdc++.h"
using namespace std;

void solve(){
	int n; char c;
	cin>>n>>c;
	string s; cin>>s;
	s = s + s;
	int last  = -1;
	for(int i=2*n-1;i>=n;i--){
		if(s[i]=='g') last = i;
	}
	int ans = 0;
	for(int i=n-1;i>=0;i--){
		if(s[i] == 'g') last = i;
		if(s[i] == c) ans = max(ans, last - i);
	}
	cout<<ans<<"\n";
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}