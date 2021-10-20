#include <bits/stdc++.h>
using namespace std;


void run_case(){
	string ans;
	for(int i=0;i<26;i++){
		int x; cin>>x; x--;
		ans+=(char)('a'+x);
	}
	cout<<ans<<endl;
}


int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}