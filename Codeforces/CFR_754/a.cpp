#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int a,b,c; cin>>a>>b>>c;
	cout<<((a+c-2*b)%3==0?0:1)<<"\n";
}

int main(){
	int tc = 1;
	cin>>tc; 
	while(tc--){
		run_case();
	}
	return 0;
}