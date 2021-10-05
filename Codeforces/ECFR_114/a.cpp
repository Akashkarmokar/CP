#include <bits/stdc++.h>
using namespace std;


bool next_balance_sequence(string& s){
	int n = s.size();
	int depth = 0;
	for(int i=n-1;i>=0;i--){
		if(s[i]==')'){
			depth++;
		}else{
			depth--;
		}

		if(s[i]=='(' && depth>0){
			depth--;
			int open = (n-1-i-depth)/2;
			int close = n-1-i-open;
			string next = s.substr(0,i)+')'+string(open,'(')+string(close,')');
			s.swap(next);
			return true;
		}
	}

	return false;
}


void run_case(){
	int n; cin>>n;
	string s = string(n,'(') + string(n,')');
	cout<<s<<endl;
	for(int i=1;i<n;i++){
		next_balance_sequence(s);
		cout<<s<<endl;
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