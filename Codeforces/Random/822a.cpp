#include <bits/stdc++.h>
using namespace std;


long long fac(int n){
	if(n==1){
		return 1;
	}
	return n*fac(n-1);
}

void run_case(){
	int a,b;
	cin>>a>>b;
	int x = min(a,b);
	cout<<fac(x)<<endl;

}

int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}