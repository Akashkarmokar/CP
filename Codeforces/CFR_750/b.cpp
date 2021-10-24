#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void run_case(){
	int n; cin>>n;
	vector<int> v(n);
	int zero = 0, one = 0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]==0)
			zero++;
		if(v[i]==1)
			one++;
	}
	cout<<(1ll<<zero)*(ll)one<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}