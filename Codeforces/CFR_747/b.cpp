#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;



void run_case(){
	long long n,k; cin>>n>>k;
	long long ans = 0;
	long long i = 1;
	while(k>0){
		if(k%2==1){
			ans=(ans+i)%MOD;
		}
		k/=2;
		i = (i*n)%MOD;
	}
	cout<<ans<<endl;
}

int main(){
	int tc = 1;
	cin>> tc;
	while(tc--){
		run_case();
	}
	return 0;
}