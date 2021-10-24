#include <bits/stdc++.h>
using namespace std;

void run_case(){
	long long val = 0;
	for(int i=0;i<3;i++){
		long long x; cin>>x;
		val+=(x*(i+1));
	}
	int ans = 0;
	if(val&1){
		ans = 1;
	}
	cout<<ans<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}


