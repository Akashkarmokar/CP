#include <bits/stdc++.h>
#include <cmath>
#include <math.h>
using namespace std;

void run_case(){
	long long n,k;
	cin>>n>>k;
	long long ans = 0 ,cur = 1;
	while(cur<k){
		cur*=2;
		ans++;
	}
	if(cur<n){
		ans+=(n-cur+k-1)/k;
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