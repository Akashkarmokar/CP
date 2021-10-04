#include <bits/stdc++.h>
using namespace std;


void run_case(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int mn = a[n-1];
	int ans = 0;
	for(int i=n-2;i>=0;i--){
		if(a[i]<=mn){
			mn = a[i];
		}else{
			ans++;
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