#include "bits/stdc++.h"
#include <vector>
using namespace std;

void solve(){
	int n;cin>>n;
	long long sum = 0;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cout<<abs(sum)<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}