#include <bits/stdc++.h>
using namespace std;

void run_case(){
	string s; cin>>s;
	int idx = -1;
	int mnCh = 26;
	for(int i=0;i<s.size();i++){
		if(s[i]-'a'<mnCh){
			mnCh = s[i]-'a';
			idx = i;
		}
	}
	cout<<s[idx]<<" "<<s.substr(0,idx)+s.substr(idx+1,s.size()-idx)<<endl;
}


int main(){
	int tc = 1;
	 cin>>tc;
	 while(tc--){
	 	run_case();
	 }
	return 0;
}