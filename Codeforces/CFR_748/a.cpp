#include <bits/stdc++.h>
using namespace std;

void run_case(){
	vector<long long>v(3);
	// long long mx = 0;
	for(int i=0;i<3;i++){
		cin>>v[i];
	}

	for(int i=0;i<3;i++){
		long long mx = 0;
		for(int j=0;j<3;j++){
			if(i==j){
				continue;
			}
			mx = max(mx,v[j]);
		}
		int ans = 0;
		if(v[i]<=mx){
			ans = mx - v[i] + 1;
		}
		cout<<ans<<" ";
	}
	cout<<endl;
}


int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}