#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n; cin>>n;
	vector<string>v(2);
	for(int i=0;i<2;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		if(v[0][i]=='1' && v[1][i]=='1'){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}