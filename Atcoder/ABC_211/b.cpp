#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;


void run_case(){
	vector<string> s(4);
	for(int i=0;i<4;i++) cin>>s[i];

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i!=j && s[i]==s[j]){
				cout<<"No"<<endl;
				return;
			}
		}
	}
	cout<<"Yes"<<endl;
}

int main(){
	int tc = 1;
	// cin>>tc;

	while(tc--){
		run_case();
	}

	return 0;
}