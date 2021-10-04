#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

void run_case(){
	ll n; cin>>n;
	vector<ll> s(n),t(n);

	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++) cin>>t[i];

	for(int i=0;i<n*2;i++){
		int next = (i+1)%n;
		t[next] = min(t[next],(int)t[i%n]+s[i%n]);
	}
	for(int i=0;i<n;i++){
		cout<<t[i]<<endl;
	}
}

int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		run_case();
	}

	return 0;
}