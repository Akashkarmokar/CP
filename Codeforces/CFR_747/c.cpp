#include <bits/stdc++.h>
using namespace std;


void run_case(){
	int n;
	char ch;
	cin>>n>>ch;
	string s; cin>>s;
	vector<int> ans;
	bool ok = true;

	for(int i=0;i<n;i++){
		if(s[i]!=ch){
			ok = false;
		}
	}
	if(!ok){
		for(int i=1;i<n+1;i++){
			ok = true;
			for(int j=i;j<n+1;j++){
				ok &= (s[j-1]==ch);
				j+=i-1;
			}
			if(ok){
				ans.push_back(i);
				break;
			}
		}
		if(!ok){
			ans.push_back(n);
			ans.push_back(n-1);
		}
	}
	cout<<ans.size()<<"\n";
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	if(ans.size())
		cout<<"\n";
}

int main(){
	int tc= 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}