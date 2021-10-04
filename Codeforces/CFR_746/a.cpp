#include <bits/stdc++.h>
using namespace std;


void run_case(){
	long long n,h;
	cin>>n>>h;
	vector<long long> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.rbegin(),a.rend());
	long long l = 1 ;
	long long r = h;
	long long ans = 0;
	while(l<=r){
		long long mid = (l+r)>>1;
		long long x = (mid+1)/2;
		long long cur = a[0]*x+a[1]*(mid-x);
		if(cur>=h){
			ans = mid ;
			r = mid -1;
		}else{
			l = mid + 1;
		}
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