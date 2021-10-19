#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n,k;
	cin>>n>>k;
	vector<int>v(k);
	for(int i=0;i<k;i++) cin>>v[i];
	sort(v.rbegin(),v.rend());
	int cnt = 0;
	long long sum = 0;
	while(cnt<k && sum+n-v[cnt]<n){
		sum+=n-v[cnt++];
	}

	cout<<cnt<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}

	return 0;
}