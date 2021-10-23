#include <bits/stdc++.h>
using namespace std;


void run_case(){
	long long n; cin>>n;
	if(n==1){
		cout<<0<<" "<<1<<endl;
		return ;
	}
	cout<<-(n-1)<<" "<<n<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}