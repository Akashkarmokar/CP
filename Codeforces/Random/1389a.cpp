#include <bits/stdc++.h>
using namespace std;


void run_case(){
	int l,r; cin>>l>>r;
	if(2*l>r){
		cout<<-1<<" "<<-1<<endl;
	}else{
		cout<<l<<" "<<2*l<<endl;
	}
}

int main(){
	int tc = 1;
	cin>>tc ;
	while(tc--){
		run_case();
	}
	return 0;
}