#include "bits/stdc++.h"
#include <vector>
using namespace std;

void solve(){
	int n,q; cin>>n>>q;
	vector<long long> sum(2,0), cnt(2,0);

	for(int i=0;i<n;i++){
		int x; cin>>x;
		sum[x%2]+=x;
		cnt[x%2]++;
	}
	while(q--){
		int ty,x; cin>>ty>>x;
		sum[ty]+= x*cnt[ty];
		cout<<sum[0]+sum[1]<<endl;
		if(x&1){
			sum[ty^1]+=sum[ty];
			cnt[ty^1]+= cnt[ty];
			sum[ty] = cnt[ty] = 0;
		}
	}
}

int main(){
	int tc = 1;
	cin>>tc; 
	while(tc--){
		solve();
	}
	return 0;
}