#include <bits/stdc++.h>
using namespace std;



void run_case(){
	string s; cin>>s;
	int n = (int)s.size();
	int stk = 0;
	for(int i=0;i<n;i++){
		if(stk && s[i]=='B'){
			stk--;
		}else{
			stk++;
		}
	}
	cout<<stk<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}