#include <bits/stdc++.h>
using namespace std;



void run_case(){
	string s; cin>>s;

	bool same = true;
	bool step = true;

	for(int i=0;i<3;i++){
		if(s[i]!=s[i+1]){
			same = false;
		}
		if(((s[i]+1)%10) !=(s[i+1]%10)){
			step = false;
		}
	}

	if(same || step){
		cout<<"Weak"<<endl;
	}else{
		cout<<"Strong"<<endl;
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