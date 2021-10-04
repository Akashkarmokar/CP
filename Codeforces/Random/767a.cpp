#include <bits/stdc++.h>
using namespace std;



void run_case(){
	int n; cin>>n;
	map<int,int> mp;
	int base = n;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		mp[x] = 1;
		while(mp[base]==1){
			cout<<base<<" ";
			base--;
		}
		cout<<endl;
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