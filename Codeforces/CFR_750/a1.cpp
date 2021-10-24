#include <bits/stdc++.h>
using namespace std;

void run_case(){
	long long a,b,c;
	cin>>a>>b>>c;
	cout<<(a+b*2+c*3)%2<<endl;
}


int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}

	return 0;
}