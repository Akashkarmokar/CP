#include <bits/stdc++.h>
using namespace std;


void run_case(){
	int n; cin>>n;
	vector<int> v(n);
	int ans = 0;
	for(int i=1;i<=n;i++){
		cin>>v[i-1];
		ans = max(ans,v[i-1]-i);
	}
	cout<<ans<<endl;
}

int main(){
	int tc = 1;
	cin>>tc; 
	while(tc--){
		run_case();
	}
}