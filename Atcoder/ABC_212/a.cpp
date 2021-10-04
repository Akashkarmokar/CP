#include <bits/stdc++.h>
using namespace std;



void run_case(){
	int a,b; cin>>a>>b;

	if(a>0 && b==0){
		cout<<"Gold"<<endl;
	}else if(a==0 && b>0){
		cout<<"Silver"<<endl;
	}else if(a>0 && b>0){
		cout<<"Alloy"<<endl;
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