#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n; cin>>n;
	bool inc = true;
	vector<int> v(n+1);
	for(int i=1;i<=n;i++){
		cin>>v[i];
		inc &= v[i]>v[i-1];
	}
	if(n%2==0 || !inc){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int tc = 1;
	cin>>tc; 
	while(tc--){
		run_case();
	}
	return 0;
}