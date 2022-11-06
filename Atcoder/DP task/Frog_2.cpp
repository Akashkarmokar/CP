#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

void solve(){
	long long n,k;
	cin>>n>>k;
	vector<long long> h(n),dp(n,1e9+5);
	for(int i=0;i<n;i++) cin>>h[i];
	dp[0] = 0;
	for(int i=0;i<n;i++){
		for(int j=1;j<=k;j++){
			if(i-j>=0){
				dp[i] = min(dp[i],dp[i-j]+abs(h[i-j] - h[i]));
			}
		}
	}
	cout<<dp[n-1]<<endl;
}

int main(){
	int tc = 1;
	// cin>>tc; 
	while(tc--){
		solve();
	}
	return 0;
}