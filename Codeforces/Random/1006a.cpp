#include<bits/stdc++.h>
using namespace std;

void run_case(){
	int n; cin>>n;
	for(int i=0;i<n;i++){
		long long x; cin>>x;
		if(x&1){
			cout<<x<<" ";
		}else{
			cout<<x-1<<" ";
		}
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