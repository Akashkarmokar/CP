#include <bits/stdc++.h>
using namespace std;

void run_case(){
	string s; cin>>s;
	s.back()= s.front();
	cout<<s<<endl;
}

int main(){
	int tc = 1;
	cin>>tc; 
	while(tc--){
		run_case();
	}
}