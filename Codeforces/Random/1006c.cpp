#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void run_case(){
	ll n; cin>>n;
	vector<ll> a(n),pre(n),suf(n);
	for(ll i=0;i<n;i++){
		cin>>a[i];
		if(i>0){
			pre[i] = pre[i-1] + a[i];
		}else{
			pre[i] = a[i];
		}
	}
	suf[n-1] = a[n-1];
	for(ll i=n-2;i>=0;i--){
		suf[i] = suf[i+1]+a[i];
	}
 
	ll ans = 0;
	int l = 0, r = n-1;
	while(l<r){
		if(pre[l]==suf[r]){
			ans = max(ans,pre[l]);
			l++;
			r--;
		}else if(pre[l]<suf[r]){
			l++;
		}else{
			r--;
		}
	}
	cout<<ans<<endl;
}
 
int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}